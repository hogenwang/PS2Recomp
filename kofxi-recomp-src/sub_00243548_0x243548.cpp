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

// Function: sub_00243548
// Address: 0x243548 - 0x243638
void sub_00243548_0x243548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243548_0x243548");
#endif

    switch (ctx->pc) {
        case 0x243580u: goto label_243580;
        case 0x243594u: goto label_243594;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435d0u: goto label_2435d0;
        case 0x243614u: goto label_243614;
        default: break;
    }

    ctx->pc = 0x243548u;

    // 0x243548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24354c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x24354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x243550: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x243550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x243554: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x243554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x243558: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x243558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24355c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x243560: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x243560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243564: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x243564u;
    {
        const bool branch_taken_0x243564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243564u;
        // 0x243568: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243564) {
            ctx->pc = 0x24359Cu;
            goto label_24359c;
        }
    }
    ctx->pc = 0x24356Cu;
    // 0x24356c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x24356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x243570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243570u;
    {
        const bool branch_taken_0x243570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243570u;
        // 0x243574: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243570) {
            ctx->pc = 0x243584u;
            goto label_243584;
        }
    }
    ctx->pc = 0x243578u;
    // 0x243578: 0xc08d39c  jal         func_234E70
    ctx->pc = 0x243578u;
    SET_GPR_U32(ctx, 31, 0x243580u);
    ctx->pc = 0x24357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243578u;
    // 0x24357c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234E70u, 0x243578u, 0x243580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243580u;
label_243580:
    // 0x243580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243584:
    // 0x243584: 0x5600001c  bnel        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x243584u;
    {
        const bool branch_taken_0x243584 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x243584) {
            ctx->pc = 0x243588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243584u;
            // 0x243588: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2435F8u;
            goto label_2435f8;
        }
    }
    ctx->pc = 0x24358Cu;
    // 0x24358c: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24358Cu;
    SET_GPR_U32(ctx, 31, 0x243594u);
    ctx->pc = 0x243590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24358Cu;
    // 0x243590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D80u, 0x24358Cu, 0x243594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243594u;
label_243594:
    // 0x243594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x243594u;
    {
        const bool branch_taken_0x243594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243594u;
        // 0x243598: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243594) {
            ctx->pc = 0x2435A8u;
            goto label_2435a8;
        }
    }
    ctx->pc = 0x24359Cu;
label_24359c:
    // 0x24359c: 0xc08d39c  jal         func_234E70
    ctx->pc = 0x24359Cu;
    SET_GPR_U32(ctx, 31, 0x2435A4u);
    ctx->pc = 0x2435A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24359Cu;
    // 0x2435a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234E70u, 0x24359Cu, 0x2435A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435A4u;
label_2435a4:
    // 0x2435a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2435a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2435a8:
    // 0x2435a8: 0x56000013  bnel        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2435A8u;
    {
        const bool branch_taken_0x2435a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435a8) {
            ctx->pc = 0x2435ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435A8u;
            // 0x2435ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2435F8u;
            goto label_2435f8;
        }
    }
    ctx->pc = 0x2435B0u;
    // 0x2435b0: 0xc08d3d0  jal         func_234F40
    ctx->pc = 0x2435B0u;
    SET_GPR_U32(ctx, 31, 0x2435B8u);
    ctx->pc = 0x2435B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435B0u;
    // 0x2435b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234F40u, 0x2435B0u, 0x2435B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435B8u;
label_2435b8:
    // 0x2435b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2435b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435bc: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2435BCu;
    {
        const bool branch_taken_0x2435bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2435bc) {
            ctx->pc = 0x2435C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435BCu;
            // 0x2435c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2435F8u;
            goto label_2435f8;
        }
    }
    ctx->pc = 0x2435C4u;
    // 0x2435c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2435c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435c8: 0xc090bf0  jal         func_242FC0
    ctx->pc = 0x2435C8u;
    SET_GPR_U32(ctx, 31, 0x2435D0u);
    ctx->pc = 0x2435CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435C8u;
    // 0x2435cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x2435C8u, 0x2435D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435D0u;
label_2435d0:
    // 0x2435d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2435d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435d4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2435D4u;
    {
        const bool branch_taken_0x2435d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435D4u;
        // 0x2435d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435d4) {
            ctx->pc = 0x24361Cu;
            goto label_24361c;
        }
    }
    ctx->pc = 0x2435DCu;
    // 0x2435dc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2435e0: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2435e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2435e8: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2435e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2435ec: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2435ECu;
    {
        const bool branch_taken_0x2435ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435ECu;
        // 0x2435f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435ec) {
            ctx->pc = 0x24361Cu;
            goto label_24361c;
        }
    }
    ctx->pc = 0x2435F4u;
    // 0x2435f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2435f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2435f8:
    // 0x2435f8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2435f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2435fc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2435fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x243600: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243600u;
    {
        const bool branch_taken_0x243600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x243604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243600u;
        // 0x243604: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243600) {
            ctx->pc = 0x24361Cu;
            goto label_24361c;
        }
    }
    ctx->pc = 0x243608u;
    // 0x243608: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x243608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24360c: 0xc08d460  jal         func_235180
    ctx->pc = 0x24360Cu;
    SET_GPR_U32(ctx, 31, 0x243614u);
    ctx->pc = 0x243610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24360Cu;
    // 0x243610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24360Cu, 0x243614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243614u;
label_243614:
    // 0x243614: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x243614u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x243618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24361c:
    // 0x24361c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243620: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x243620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243624: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x243624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24362c: 0x3e00008  jr          $ra
    ctx->pc = 0x24362Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24362Cu;
        // 0x243630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24362Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243634u;
    // 0x243634: 0x0  nop
    ctx->pc = 0x243634u;
    // NOP
}
