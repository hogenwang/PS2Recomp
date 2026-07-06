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

// Function: sub_001EF6E8
// Address: 0x1ef6e8 - 0x1ef7f8
void sub_001EF6E8_0x1ef6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF6E8_0x1ef6e8");
#endif

    switch (ctx->pc) {
        case 0x1ef710u: goto label_1ef710;
        case 0x1ef71cu: goto label_1ef71c;
        case 0x1ef758u: goto label_1ef758;
        case 0x1ef760u: goto label_1ef760;
        case 0x1ef7a4u: goto label_1ef7a4;
        case 0x1ef7b4u: goto label_1ef7b4;
        default: break;
    }

    ctx->pc = 0x1ef6e8u;

    // 0x1ef6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef6ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ef6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ef6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef6f8: 0x8e02137c  lw          $v0, 0x137C($s0)
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4988)));
    // 0x1ef6fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF6FCu;
    {
        const bool branch_taken_0x1ef6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6FCu;
        // 0x1ef700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6fc) {
            ctx->pc = 0x1EF720u;
            goto label_1ef720;
        }
    }
    ctx->pc = 0x1EF704u;
    // 0x1ef704: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ef704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef708: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF708u;
    SET_GPR_U32(ctx, 31, 0x1EF710u);
    ctx->pc = 0x1EF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF708u;
    // 0x1ef70c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF708u, 0x1EF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF710u;
label_1ef710:
    // 0x1ef710: 0xde040988  ld          $a0, 0x988($s0)
    ctx->pc = 0x1ef710u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x1ef714: 0xc07ae06  jal         func_1EB818
    ctx->pc = 0x1EF714u;
    SET_GPR_U32(ctx, 31, 0x1EF71Cu);
    ctx->pc = 0x1EF718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF714u;
    // 0x1ef718: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB818u, 0x1EF714u, 0x1EF71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF71Cu;
label_1ef71c:
    // 0x1ef71c: 0xfe020988  sd          $v0, 0x988($s0)
    ctx->pc = 0x1ef71cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2440), GPR_U64(ctx, 2));
label_1ef720:
    // 0x1ef720: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ef720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef724: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef728: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF728u;
        // 0x1ef72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF730u;
    // 0x1ef730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef73c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef740: 0x261221f0  addiu       $s2, $s0, 0x21F0
    ctx->pc = 0x1ef740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8688));
    // 0x1ef744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ef748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef74c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef750: 0xc07bdfe  jal         func_1EF7F8
    ctx->pc = 0x1EF750u;
    SET_GPR_U32(ctx, 31, 0x1EF758u);
    ctx->pc = 0x1EF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF750u;
    // 0x1ef754: 0xae121fd4  sw          $s2, 0x1FD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8148), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7F8u, 0x1EF750u, 0x1EF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF758u;
label_1ef758:
    // 0x1ef758: 0xc076244  jal         func_1D8910
    ctx->pc = 0x1EF758u;
    SET_GPR_U32(ctx, 31, 0x1EF760u);
    ctx->pc = 0x1D8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8910u, 0x1EF758u, 0x1EF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF760u;
label_1ef760:
    // 0x1ef760: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef764: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef770: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF770u;
    {
        const bool branch_taken_0x1ef770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF770u;
        // 0x1ef774: 0x34a50d08  ori         $a1, $a1, 0xD08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef770) {
            ctx->pc = 0x1EF798u;
            goto label_1ef798;
        }
    }
    ctx->pc = 0x1EF778u;
    // 0x1ef778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef77c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef788: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef78c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF78Cu;
    ctx->pc = 0x1EF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF78Cu;
    // 0x1ef790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF794u;
    // 0x1ef794: 0x0  nop
    ctx->pc = 0x1ef794u;
    // NOP
label_1ef798:
    // 0x1ef798: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ef798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1ef79c: 0xc0761e8  jal         func_1D87A0
    ctx->pc = 0x1EF79Cu;
    SET_GPR_U32(ctx, 31, 0x1EF7A4u);
    ctx->pc = 0x1EF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF79Cu;
    // 0x1ef7a0: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D87A0u, 0x1EF79Cu, 0x1EF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7A4u;
label_1ef7a4:
    // 0x1ef7a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF7A4u;
    {
        const bool branch_taken_0x1ef7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7A4u;
        // 0x1ef7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7a4) {
            ctx->pc = 0x1EF7D8u;
            goto label_1ef7d8;
        }
    }
    ctx->pc = 0x1EF7ACu;
    // 0x1ef7ac: 0xc07be3a  jal         func_1EF8E8
    ctx->pc = 0x1EF7ACu;
    SET_GPR_U32(ctx, 31, 0x1EF7B4u);
    ctx->pc = 0x1EF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8E8u, 0x1EF7ACu, 0x1EF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7B4u;
label_1ef7b4:
    // 0x1ef7b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef7b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef7bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ef7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef7c4: 0x34a50d09  ori         $a1, $a1, 0xD09
    ctx->pc = 0x1ef7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3337);
    // 0x1ef7c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef7cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef7d0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF7D0u;
    ctx->pc = 0x1EF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7D0u;
    // 0x1ef7d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF7D8u;
label_1ef7d8:
    // 0x1ef7d8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1ef7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1ef7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef7e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef7e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef7e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7ECu;
        // 0x1ef7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF7F4u;
    // 0x1ef7f4: 0x0  nop
    ctx->pc = 0x1ef7f4u;
    // NOP
}
