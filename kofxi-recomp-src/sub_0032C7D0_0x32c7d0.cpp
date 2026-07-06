#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032C7D0
// Address: 0x32c7d0 - 0x32c890
void sub_0032C7D0_0x32c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C7D0_0x32c7d0");
#endif

    switch (ctx->pc) {
        case 0x32c844u: goto label_32c844;
        case 0x32c860u: goto label_32c860;
        case 0x32c868u: goto label_32c868;
        case 0x32c870u: goto label_32c870;
        case 0x32c878u: goto label_32c878;
        case 0x32c880u: goto label_32c880;
        default: break;
    }

    ctx->pc = 0x32c7d0u;

    // 0x32c7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c7d4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c7dc: 0xac40f380  sw          $zero, -0xC80($v0)
    ctx->pc = 0x32c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964096), GPR_U32(ctx, 0));
    // 0x32c7e0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c7e4: 0xac40f384  sw          $zero, -0xC7C($v0)
    ctx->pc = 0x32c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964100), GPR_U32(ctx, 0));
    // 0x32c7e8: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c7ec: 0xac40f388  sw          $zero, -0xC78($v0)
    ctx->pc = 0x32c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964104), GPR_U32(ctx, 0));
    // 0x32c7f0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c7f4: 0xac40f38c  sw          $zero, -0xC74($v0)
    ctx->pc = 0x32c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964108), GPR_U32(ctx, 0));
    // 0x32c7f8: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c7fc: 0xac40f390  sw          $zero, -0xC70($v0)
    ctx->pc = 0x32c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964112), GPR_U32(ctx, 0));
    // 0x32c800: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32c804: 0xac40f394  sw          $zero, -0xC6C($v0)
    ctx->pc = 0x32c804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964116), GPR_U32(ctx, 0));
    // 0x32c808: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c80c: 0xac40b840  sw          $zero, -0x47C0($v0)
    ctx->pc = 0x32c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948928), GPR_U32(ctx, 0));
    // 0x32c810: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c814: 0xac40b850  sw          $zero, -0x47B0($v0)
    ctx->pc = 0x32c814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948944), GPR_U32(ctx, 0));
    // 0x32c818: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c81c: 0xac40b848  sw          $zero, -0x47B8($v0)
    ctx->pc = 0x32c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948936), GPR_U32(ctx, 0));
    // 0x32c820: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c824: 0xac40bbf8  sw          $zero, -0x4408($v0)
    ctx->pc = 0x32c824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949880), GPR_U32(ctx, 0));
    // 0x32c828: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c82c: 0xac40bbf0  sw          $zero, -0x4410($v0)
    ctx->pc = 0x32c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949872), GPR_U32(ctx, 0));
    // 0x32c830: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c834: 0xac40bc00  sw          $zero, -0x4400($v0)
    ctx->pc = 0x32c834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949888), GPR_U32(ctx, 0));
    // 0x32c838: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x32c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x32c83c: 0xc06350c  jal         func_18D430
    ctx->pc = 0x32C83Cu;
    SET_GPR_U32(ctx, 31, 0x32C844u);
    ctx->pc = 0x32C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C83Cu;
    // 0x32c840: 0xac401d10  sw          $zero, 0x1D10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D430u, 0x32C83Cu, 0x32C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C844u;
label_32c844:
    // 0x32c844: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c848: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32c848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32c84c: 0xac40d4d8  sw          $zero, -0x2B28($v0)
    ctx->pc = 0x32c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956248), GPR_U32(ctx, 0));
    // 0x32c850: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x32c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x32c854: 0xac60d4e0  sw          $zero, -0x2B20($v1)
    ctx->pc = 0x32c854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956256), GPR_U32(ctx, 0));
    // 0x32c858: 0xc0cb478  jal         func_32D1E0
    ctx->pc = 0x32C858u;
    SET_GPR_U32(ctx, 31, 0x32C860u);
    ctx->pc = 0x32C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C858u;
    // 0x32c85c: 0xa0405d28  sb          $zero, 0x5D28($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D1E0u, 0x32C858u, 0x32C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C860u;
label_32c860:
    // 0x32c860: 0xc063d18  jal         func_18F460
    ctx->pc = 0x32C860u;
    SET_GPR_U32(ctx, 31, 0x32C868u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x32C860u, 0x32C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C868u;
label_32c868:
    // 0x32c868: 0xc063568  jal         func_18D5A0
    ctx->pc = 0x32C868u;
    SET_GPR_U32(ctx, 31, 0x32C870u);
    ctx->pc = 0x32C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C868u;
    // 0x32c86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D5A0u, 0x32C868u, 0x32C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C870u;
label_32c870:
    // 0x32c870: 0xc063568  jal         func_18D5A0
    ctx->pc = 0x32C870u;
    SET_GPR_U32(ctx, 31, 0x32C878u);
    ctx->pc = 0x32C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C870u;
    // 0x32c874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D5A0u, 0x32C870u, 0x32C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C878u;
label_32c878:
    // 0x32c878: 0xc063568  jal         func_18D5A0
    ctx->pc = 0x32C878u;
    SET_GPR_U32(ctx, 31, 0x32C880u);
    ctx->pc = 0x32C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C878u;
    // 0x32c87c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D5A0u, 0x32C878u, 0x32C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C880u;
label_32c880:
    // 0x32c880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c884: 0x3e00008  jr          $ra
    ctx->pc = 0x32C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C884u;
        // 0x32c888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C88Cu;
    // 0x32c88c: 0x0  nop
    ctx->pc = 0x32c88cu;
    // NOP
    if (ctx->pc == 0x32c88cu) { ctx->pc = 0x32c890u; }
}
