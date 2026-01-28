#pragma once

#include <util/generic/fwd.h>

namespace NKikimrScheme {
    class TEvDescribeSchemeResult;
}

namespace NKikimrReplication {
    class TEvDescribeReplicationResult;
}

namespace NKikimrKesus {
    class TStreamingQuoterResource;
}

namespace NKikimr::NSchemeShard {

bool BuildScheme(
    const NKikimrScheme::TEvDescribeSchemeResult& describeResult,
    TString& scheme,
    const TString& databaseRoot,
    TString& error);

bool BuildRateLimiterResourceScheme(
    const NKikimrKesus::TStreamingQuoterResource& rateLimiterDesc,
    TString& scheme);

void BuildTransferScheme(
    const NKikimrReplication::TEvDescribeReplicationResult& describeResult,
    TString& scheme,
    const TString& name,
    const TString& databaseRoot);

} // namespace NKikimr::NSchemeShard
