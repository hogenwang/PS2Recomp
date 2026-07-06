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

// Function: sub_00213678
// Address: 0x213678 - 0x2136e8
void sub_00213678_0x213678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213678_0x213678");
#endif

    switch (ctx->pc) {
        case 0x213694u: goto label_213694;
        case 0x2136a4u: goto label_2136a4;
        case 0x2136b4u: goto label_2136b4;
        case 0x2136c8u: goto label_2136c8;
        default: break;
    }

    ctx->pc = 0x213678u;

    // 0x213678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21367c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213680: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213688: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21368c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21368Cu;
    SET_GPR_U32(ctx, 31, 0x213694u);
    ctx->pc = 0x213690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21368Cu;
    // 0x213690: 0x248406c8  addiu       $a0, $a0, 0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21368Cu, 0x213694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213694u;
label_213694:
    // 0x213694: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x213694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213698: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21369c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21369Cu;
    SET_GPR_U32(ctx, 31, 0x2136A4u);
    ctx->pc = 0x2136A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21369Cu;
    // 0x2136a0: 0x248406e8  addiu       $a0, $a0, 0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21369Cu, 0x2136A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136A4u;
label_2136a4:
    // 0x2136a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2136a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2136a8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2136a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2136ac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2136ACu;
    SET_GPR_U32(ctx, 31, 0x2136B4u);
    ctx->pc = 0x2136B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136ACu;
    // 0x2136b0: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2136ACu, 0x2136B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136B4u;
label_2136b4:
    // 0x2136b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2136b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2136b8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x2136b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2136bc: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x2136bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x2136c0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2136C0u;
    SET_GPR_U32(ctx, 31, 0x2136C8u);
    ctx->pc = 0x2136C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136C0u;
    // 0x2136c4: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2136C0u, 0x2136C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136C8u;
label_2136c8:
    // 0x2136c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2136c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2136ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2136d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2136d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2136d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2136d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2136d8: 0x248406f8  addiu       $a0, $a0, 0x6F8
    ctx->pc = 0x2136d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1784));
    // 0x2136dc: 0x8043e52  j           func_10F948
    ctx->pc = 0x2136DCu;
    ctx->pc = 0x2136E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136DCu;
    // 0x2136e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2136E4u;
    // 0x2136e4: 0x0  nop
    ctx->pc = 0x2136e4u;
    // NOP
    if (ctx->pc == 0x2136e4u) { ctx->pc = 0x2136e8u; }
}
