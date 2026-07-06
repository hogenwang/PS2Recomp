#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001659E0
// Address: 0x1659e0 - 0x165af0
void sub_001659E0_0x1659e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001659E0_0x1659e0");
#endif

    switch (ctx->pc) {
        case 0x165a20u: goto label_165a20;
        case 0x165aa4u: goto label_165aa4;
        case 0x165abcu: goto label_165abc;
        default: break;
    }

    ctx->pc = 0x1659e0u;

    // 0x1659e0: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1659e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1659e4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1659e8: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x1659e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1659ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1659f0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1659f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1659f4: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
    // 0x1659f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1659f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1659fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1659fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165a00: 0xa21804  sllv        $v1, $v0, $a1
    ctx->pc = 0x165a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x165a04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x165a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165a08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165a0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x165a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x165a10: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x165a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x165a14: 0x3e00008  jr          $ra
    ctx->pc = 0x165A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A14u;
            // 0x165a18: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165A1Cu;
    // 0x165a1c: 0x0  nop
    ctx->pc = 0x165a1cu;
    // NOP
label_165a20:
    // 0x165a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165a24: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x165a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x165a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165a2c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x165a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x165a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165a34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165a38: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x165a3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165A40u;
    {
        const bool branch_taken_0x165a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A40u;
            // 0x165a44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a40) {
            ctx->pc = 0x165A50u;
            goto label_165a50;
        }
    }
    ctx->pc = 0x165A48u;
    // 0x165a48: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x165A48u;
    {
        const bool branch_taken_0x165a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A48u;
            // 0x165a4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a48) {
            ctx->pc = 0x165AD0u;
            goto label_165ad0;
        }
    }
    ctx->pc = 0x165A50u;
label_165a50:
    // 0x165a50: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165a54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165a58: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x165A58u;
    {
        const bool branch_taken_0x165a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a58) {
            ctx->pc = 0x165A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165A58u;
            // 0x165a5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165A68u;
            goto label_165a68;
        }
    }
    ctx->pc = 0x165A60u;
    // 0x165a60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x165A60u;
    {
        const bool branch_taken_0x165a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A60u;
            // 0x165a64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a60) {
            ctx->pc = 0x165AD0u;
            goto label_165ad0;
        }
    }
    ctx->pc = 0x165A68u;
label_165a68:
    // 0x165a68: 0xa6220288  sh          $v0, 0x288($s1)
    ctx->pc = 0x165a68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 648), (uint16_t)GPR_U32(ctx, 2));
    // 0x165a6c: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x165a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x165a70: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x165a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x165a74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165A74u;
    {
        const bool branch_taken_0x165a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A74u;
            // 0x165a78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a74) {
            ctx->pc = 0x165A80u;
            goto label_165a80;
        }
    }
    ctx->pc = 0x165A7Cu;
    // 0x165a7c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x165a7cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_165a80:
    // 0x165a80: 0x92230281  lbu         $v1, 0x281($s1)
    ctx->pc = 0x165a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 641)));
    // 0x165a84: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x165a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x165a88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165A88u;
    {
        const bool branch_taken_0x165a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A88u;
            // 0x165a8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a88) {
            ctx->pc = 0x165AA4u;
            goto label_165aa4;
        }
    }
    ctx->pc = 0x165A90u;
    // 0x165a90: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x165a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x165a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a98: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x165a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x165a9c: 0xc0596bc  jal         func_165AF0
    ctx->pc = 0x165A9Cu;
    SET_GPR_U32(ctx, 31, 0x165AA4u);
    ctx->pc = 0x165AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A9Cu;
            // 0x165aa0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x165AF0u;
    if (runtime->hasFunction(0x165AF0u)) {
        auto targetFn = runtime->lookupFunction(0x165AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA4u; }
        if (ctx->pc != 0x165AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165AF0_0x165af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AA4u; }
        if (ctx->pc != 0x165AA4u) { return; }
    }
    ctx->pc = 0x165AA4u;
label_165aa4:
    // 0x165aa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x165aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165aa8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AA8u;
    {
        const bool branch_taken_0x165aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165aa8) {
            ctx->pc = 0x165ABCu;
            goto label_165abc;
        }
    }
    ctx->pc = 0x165AB0u;
    // 0x165ab0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x165ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x165ab4: 0xc0596bc  jal         func_165AF0
    ctx->pc = 0x165AB4u;
    SET_GPR_U32(ctx, 31, 0x165ABCu);
    ctx->pc = 0x165AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165AB4u;
            // 0x165ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165AF0u;
    if (runtime->hasFunction(0x165AF0u)) {
        auto targetFn = runtime->lookupFunction(0x165AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ABCu; }
        if (ctx->pc != 0x165ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165AF0_0x165af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165ABCu; }
        if (ctx->pc != 0x165ABCu) { return; }
    }
    ctx->pc = 0x165ABCu;
label_165abc:
    // 0x165abc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165ABCu;
    {
        const bool branch_taken_0x165abc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x165abc) {
            ctx->pc = 0x165AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165ABCu;
            // 0x165ac0: 0x2143c  dsll32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165ACCu;
            goto label_165acc;
        }
    }
    ctx->pc = 0x165AC4u;
    // 0x165ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165ac8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_165acc:
    // 0x165acc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165accu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_165ad0:
    // 0x165ad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165adc: 0x3e00008  jr          $ra
    ctx->pc = 0x165ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165ADCu;
            // 0x165ae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165AE4u;
    // 0x165ae4: 0x0  nop
    ctx->pc = 0x165ae4u;
    // NOP
    // 0x165ae8: 0x0  nop
    ctx->pc = 0x165ae8u;
    // NOP
    // 0x165aec: 0x0  nop
    ctx->pc = 0x165aecu;
    // NOP
    ctx->pc = 0x165af0u;
}
