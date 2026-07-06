#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6590
// Address: 0x1c6590 - 0x1c6668
void sub_001C6590_0x1c6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6590_0x1c6590");
#endif

    switch (ctx->pc) {
        case 0x1c65b0u: goto label_1c65b0;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c6620u: goto label_1c6620;
        case 0x1c663cu: goto label_1c663c;
        case 0x1c6648u: goto label_1c6648;
        case 0x1c6650u: goto label_1c6650;
        default: break;
    }

    ctx->pc = 0x1c6590u;

    // 0x1c6590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6594: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c659c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C659Cu;
    {
        const bool branch_taken_0x1c659c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C659Cu;
            // 0x1c65a0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c659c) {
            ctx->pc = 0x1C65B8u;
            goto label_1c65b8;
        }
    }
    ctx->pc = 0x1C65A4u;
    // 0x1c65a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c65a8: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C65A8u;
    SET_GPR_U32(ctx, 31, 0x1C65B0u);
    ctx->pc = 0x1C65ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65A8u;
            // 0x1c65ac: 0x2484a7b8  addiu       $a0, $a0, -0x5848 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65B0u; }
        if (ctx->pc != 0x1C65B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65B0u; }
        if (ctx->pc != 0x1C65B0u) { return; }
    }
    ctx->pc = 0x1C65B0u;
label_1c65b0:
    // 0x1c65b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C65B0u;
    {
        const bool branch_taken_0x1c65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65B0u;
            // 0x1c65b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b0) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C65B8u;
label_1c65b8:
    // 0x1c65b8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C65B8u;
    {
        const bool branch_taken_0x1c65b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C65BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65B8u;
            // 0x1c65bc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b8) {
            ctx->pc = 0x1C65D4u;
            goto label_1c65d4;
        }
    }
    ctx->pc = 0x1C65C0u;
    // 0x1c65c0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1c65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1c65c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c65c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c65c8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C65C8u;
    {
        const bool branch_taken_0x1c65c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65c8) {
            ctx->pc = 0x1C65CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65C8u;
            // 0x1c65cc: 0x8cc50020  lw          $a1, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C65E8u;
            goto label_1c65e8;
        }
    }
    ctx->pc = 0x1C65D0u;
    // 0x1c65d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c65d4:
    // 0x1c65d4: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C65D4u;
    SET_GPR_U32(ctx, 31, 0x1C65DCu);
    ctx->pc = 0x1C65D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65D4u;
            // 0x1c65d8: 0x2484a7e8  addiu       $a0, $a0, -0x5818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65DCu; }
        if (ctx->pc != 0x1C65DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65DCu; }
        if (ctx->pc != 0x1C65DCu) { return; }
    }
    ctx->pc = 0x1C65DCu;
label_1c65dc:
    // 0x1c65dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C65DCu;
    {
        const bool branch_taken_0x1c65dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65DCu;
            // 0x1c65e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65dc) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C65E4u;
    // 0x1c65e4: 0x0  nop
    ctx->pc = 0x1c65e4u;
    // NOP
label_1c65e8:
    // 0x1c65e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c65ec: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x1c65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1c65f0: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1c65f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c65f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c65f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65f8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1c65f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c65fc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6600: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6604: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c6608: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1c6608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c660c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c6610: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c6610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c6614:
    // 0x1c6614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6618: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6618u;
            // 0x1c661c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6620u;
label_1c6620:
    // 0x1c6620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c662c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6634: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6634u;
    SET_GPR_U32(ctx, 31, 0x1C663Cu);
    ctx->pc = 0x1C6638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6634u;
            // 0x1c6638: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C663Cu; }
        if (ctx->pc != 0x1C663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C663Cu; }
        if (ctx->pc != 0x1C663Cu) { return; }
    }
    ctx->pc = 0x1C663Cu;
label_1c663c:
    // 0x1c663c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6640: 0xc07199a  jal         func_1C6668
    ctx->pc = 0x1C6640u;
    SET_GPR_U32(ctx, 31, 0x1C6648u);
    ctx->pc = 0x1C6644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6640u;
            // 0x1c6644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6668u;
    if (runtime->hasFunction(0x1C6668u)) {
        auto targetFn = runtime->lookupFunction(0x1C6668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6648u; }
        if (ctx->pc != 0x1C6648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6668_0x1c6668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6648u; }
        if (ctx->pc != 0x1C6648u) { return; }
    }
    ctx->pc = 0x1C6648u;
label_1c6648:
    // 0x1c6648: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6648u;
    SET_GPR_U32(ctx, 31, 0x1C6650u);
    ctx->pc = 0x1C664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6648u;
            // 0x1c664c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6650u; }
        if (ctx->pc != 0x1C6650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6650u; }
        if (ctx->pc != 0x1C6650u) { return; }
    }
    ctx->pc = 0x1C6650u;
label_1c6650:
    // 0x1c6650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c665c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c665cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6660: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6660u;
            // 0x1c6664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6668u;
    ctx->pc = 0x1c6668u;
}
