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

// Function: sub_001DF8F8
// Address: 0x1df8f8 - 0x1df9f8
void sub_001DF8F8_0x1df8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF8F8_0x1df8f8");
#endif

    switch (ctx->pc) {
        case 0x1df910u: goto label_1df910;
        case 0x1df91cu: goto label_1df91c;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df988u: goto label_1df988;
        default: break;
    }

    ctx->pc = 0x1df8f8u;

    // 0x1df8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df8fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1df8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1df900: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1df900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df904: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1df904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1df908: 0xc07bf64  jal         func_1EFD90
    ctx->pc = 0x1DF908u;
    SET_GPR_U32(ctx, 31, 0x1DF910u);
    ctx->pc = 0x1DF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF908u;
    // 0x1df90c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFD90u, 0x1DF908u, 0x1DF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF910u;
label_1df910:
    // 0x1df910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df914: 0xc077ea8  jal         func_1DFAA0
    ctx->pc = 0x1DF914u;
    SET_GPR_U32(ctx, 31, 0x1DF91Cu);
    ctx->pc = 0x1DF918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF914u;
    // 0x1df918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFAA0u, 0x1DF914u, 0x1DF91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF91Cu;
label_1df91c:
    // 0x1df91c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1df91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df920: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1df920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df924: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF924u;
        // 0x1df928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF92Cu;
    // 0x1df92c: 0x0  nop
    ctx->pc = 0x1df92cu;
    // NOP
    // 0x1df930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1df934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df93c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1df940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df944: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df948: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df94c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1df94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1df950: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1df950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1df954: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1df954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1df958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1df958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1df95c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1df95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1df960: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1df960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df964: 0xc077e7e  jal         func_1DF9F8
    ctx->pc = 0x1DF964u;
    SET_GPR_U32(ctx, 31, 0x1DF96Cu);
    ctx->pc = 0x1DF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF964u;
    // 0x1df968: 0x8e170000  lw          $s7, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9F8u, 0x1DF964u, 0x1DF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF96Cu;
label_1df96c:
    // 0x1df96c: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x1df96cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1df970: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1df974: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1df974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df978: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1df97c: 0x8e130014  lw          $s3, 0x14($s0)
    ctx->pc = 0x1df97cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1df980: 0xc077e8e  jal         func_1DFA38
    ctx->pc = 0x1DF980u;
    SET_GPR_U32(ctx, 31, 0x1DF988u);
    ctx->pc = 0x1DF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF980u;
    // 0x1df984: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFA38u, 0x1DF980u, 0x1DF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF988u;
label_1df988:
    // 0x1df988: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1df98c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1df990: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1df994: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x1df994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1df998: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x1df998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1df99c: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x1df99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
    // 0x1df9a0: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x1df9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
    // 0x1df9a4: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x1df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x1df9a8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1df9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1df9ac: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1df9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1df9b0: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x1df9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x1df9b4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1df9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1df9b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1df9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1df9bc: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1df9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1df9c0: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x1df9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x1df9c4: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x1df9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x1df9c8: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x1df9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x1df9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df9d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df9d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df9d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df9dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1df9dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df9e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1df9e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df9e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1df9e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df9e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1df9e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df9ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1df9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9F0u;
        // 0x1df9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF9F8u;
}
