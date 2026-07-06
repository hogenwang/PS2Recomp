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

// Function: sub_001768A0
// Address: 0x1768a0 - 0x176930
void sub_001768A0_0x1768a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001768A0_0x1768a0");
#endif

    switch (ctx->pc) {
        case 0x1768dcu: goto label_1768dc;
        case 0x1768f0u: goto label_1768f0;
        case 0x176914u: goto label_176914;
        default: break;
    }

    ctx->pc = 0x1768a0u;

    // 0x1768a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1768a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1768a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1768a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1768ac: 0x240700d8  addiu       $a3, $zero, 0xD8
    ctx->pc = 0x1768acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x1768b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1768b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1768b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1768b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1768b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1768bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1768bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1768c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768c4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1768c8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1768cc: 0x248463f0  addiu       $a0, $a0, 0x63F0
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    // 0x1768d0: 0x24a5d6d8  addiu       $a1, $a1, -0x2928
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956760));
    // 0x1768d4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1768D4u;
    SET_GPR_U32(ctx, 31, 0x1768DCu);
    ctx->pc = 0x1768D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768D4u;
    // 0x1768d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1768D4u, 0x1768DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768DCu;
label_1768dc:
    // 0x1768dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1768dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1768e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1768e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1768e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768e8: 0xc067d64  jal         func_19F590
    ctx->pc = 0x1768E8u;
    SET_GPR_U32(ctx, 31, 0x1768F0u);
    ctx->pc = 0x1768ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768E8u;
    // 0x1768ec: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x1768E8u, 0x1768F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768F0u;
label_1768f0:
    // 0x1768f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1768f4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1768f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1768f8: 0xac50a240  sw          $s0, -0x5DC0($v0)
    ctx->pc = 0x1768f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943296), GPR_U32(ctx, 16));
    // 0x1768fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1768fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176900: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x176904: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x176904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x176908: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x176908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x17690c: 0xc05e170  jal         func_1785C0
    ctx->pc = 0x17690Cu;
    SET_GPR_U32(ctx, 31, 0x176914u);
    ctx->pc = 0x176910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17690Cu;
    // 0x176910: 0xa05100bc  sb          $s1, 0xBC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 188), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785C0u, 0x17690Cu, 0x176914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176914u;
label_176914:
    // 0x176914: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17691c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17691cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176924: 0x3e00008  jr          $ra
    ctx->pc = 0x176924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176924u;
        // 0x176928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17692Cu;
    // 0x17692c: 0x0  nop
    ctx->pc = 0x17692cu;
    // NOP
}
