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

// Function: sub_001E9890
// Address: 0x1e9890 - 0x1e99f0
void sub_001E9890_0x1e9890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9890_0x1e9890");
#endif

    switch (ctx->pc) {
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99c0u: goto label_1e99c0;
        default: break;
    }

    ctx->pc = 0x1e9890u;

    // 0x1e9890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9894: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e9894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e9898: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e9898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e989c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e98a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e98a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98a4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e98a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e98ac: 0xc07f298  jal         func_1FCA60
    ctx->pc = 0x1E98ACu;
    SET_GPR_U32(ctx, 31, 0x1E98B4u);
    ctx->pc = 0x1E98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98ACu;
    // 0x1e98b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCA60u, 0x1E98ACu, 0x1E98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98B4u;
label_1e98b4:
    // 0x1e98b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e98b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e98b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98bc: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1E98BCu;
    SET_GPR_U32(ctx, 31, 0x1E98C4u);
    ctx->pc = 0x1E98C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98BCu;
    // 0x1e98c0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1E98BCu, 0x1E98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C4u;
label_1e98c4:
    // 0x1e98c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e98c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e98c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e98cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e98ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e98d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e98d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e98d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E98D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98D4u;
        // 0x1e98d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E98D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E98DCu;
    // 0x1e98dc: 0x0  nop
    ctx->pc = 0x1e98dcu;
    // NOP
    // 0x1e98e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e98e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e98e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e98e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e98ec: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1e98ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1e98f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e98f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e98f4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E98F4u;
    ctx->pc = 0x1E98F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98F4u;
    // 0x1e98f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E98FCu;
    // 0x1e98fc: 0x0  nop
    ctx->pc = 0x1e98fcu;
    // NOP
    // 0x1e9900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9904: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e990c: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1e990cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1e9910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9914: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9914u;
    ctx->pc = 0x1E9918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9914u;
    // 0x1e9918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E991Cu;
    // 0x1e991c: 0x0  nop
    ctx->pc = 0x1e991cu;
    // NOP
    // 0x1e9920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9924: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e992c: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1e992cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1e9930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9934: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9934u;
    ctx->pc = 0x1E9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9934u;
    // 0x1e9938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E993Cu;
    // 0x1e993c: 0x0  nop
    ctx->pc = 0x1e993cu;
    // NOP
    // 0x1e9940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9944: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e994c: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x1e994cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x1e9950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9954: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9954u;
    ctx->pc = 0x1E9958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9954u;
    // 0x1e9958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E995Cu;
    // 0x1e995c: 0x0  nop
    ctx->pc = 0x1e995cu;
    // NOP
    // 0x1e9960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e996c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9970: 0xc07a67c  jal         func_1E99F0
    ctx->pc = 0x1E9970u;
    SET_GPR_U32(ctx, 31, 0x1E9978u);
    ctx->pc = 0x1E9974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9970u;
    // 0x1e9974: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E99F0u, 0x1E9970u, 0x1E9978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9978u;
label_1e9978:
    // 0x1e9978: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e9978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e997c: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E997Cu;
    {
        const bool branch_taken_0x1e997c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e997c) {
            ctx->pc = 0x1E9980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E997Cu;
            // 0x1e9980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E99DCu;
            goto label_1e99dc;
        }
    }
    ctx->pc = 0x1E9984u;
    // 0x1e9984: 0x8e10205c  lw          $s0, 0x205C($s0)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
    // 0x1e9988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e998c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e9990: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9990u;
    {
        const bool branch_taken_0x1e9990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9990u;
        // 0x1e9994: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9990) {
            ctx->pc = 0x1E99D8u;
            goto label_1e99d8;
        }
    }
    ctx->pc = 0x1E9998u;
    // 0x1e9998: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e999c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E999Cu;
    {
        const bool branch_taken_0x1e999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E999Cu;
        // 0x1e99a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e999c) {
            ctx->pc = 0x1E99D8u;
            goto label_1e99d8;
        }
    }
    ctx->pc = 0x1E99A4u;
    // 0x1e99a4: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x1e99a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e99a8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1e99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e99ac: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x1E99ACu;
    SET_GPR_U32(ctx, 31, 0x1E99B4u);
    ctx->pc = 0x1E99B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99ACu;
    // 0x1e99b0: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x1E99ACu, 0x1E99B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99B4u;
label_1e99b4:
    // 0x1e99b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e99b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99b8: 0xc06ed5c  jal         func_1BB570
    ctx->pc = 0x1E99B8u;
    SET_GPR_U32(ctx, 31, 0x1E99C0u);
    ctx->pc = 0x1E99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99B8u;
    // 0x1e99bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB570u, 0x1E99B8u, 0x1E99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99C0u;
label_1e99c0:
    // 0x1e99c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e99c4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e99c8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1e99cc: 0x246389b8  addiu       $v1, $v1, -0x7648
    ctx->pc = 0x1e99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937016));
    // 0x1e99d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e99d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99d4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1e99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_1e99d8:
    // 0x1e99d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e99d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e99dc:
    // 0x1e99dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e99dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e99e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e99e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e99e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E99E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E4u;
        // 0x1e99e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E99E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E99ECu;
    // 0x1e99ec: 0x0  nop
    ctx->pc = 0x1e99ecu;
    // NOP
    if (ctx->pc == 0x1e99ecu) { ctx->pc = 0x1e99f0u; }
}
