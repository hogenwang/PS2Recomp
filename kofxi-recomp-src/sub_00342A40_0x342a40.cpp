#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342A40
// Address: 0x342a40 - 0x342af0
void sub_00342A40_0x342a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A40_0x342a40");
#endif

    switch (ctx->pc) {
        case 0x342adcu: goto label_342adc;
        default: break;
    }

    ctx->pc = 0x342a40u;

    // 0x342a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342a44: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x342a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x342a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342a4c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x342a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x342a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342A58u;
    {
        const bool branch_taken_0x342a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A58u;
            // 0x342a5c: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a58) {
            ctx->pc = 0x342A70u;
            goto label_342a70;
        }
    }
    ctx->pc = 0x342A60u;
    // 0x342a60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x342a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x342a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342A68u;
    {
        const bool branch_taken_0x342a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A68u;
            // 0x342a6c: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a68) {
            ctx->pc = 0x342A88u;
            goto label_342a88;
        }
    }
    ctx->pc = 0x342A70u;
label_342a70:
    // 0x342a70: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x342a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x342a74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x342A74u;
    {
        const bool branch_taken_0x342a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342a74) {
            ctx->pc = 0x342A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342A74u;
            // 0x342a78: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342A8Cu;
            goto label_342a8c;
        }
    }
    ctx->pc = 0x342A7Cu;
    // 0x342a7c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x342a80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x342a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x342a84: 0x90500001  lbu         $s0, 0x1($v0)
    ctx->pc = 0x342a84u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_342a88:
    // 0x342a88: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x342a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_342a8c:
    // 0x342a8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x342A8Cu;
    {
        const bool branch_taken_0x342a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342a8c) {
            ctx->pc = 0x342A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342A8Cu;
            // 0x342a90: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342AA8u;
            goto label_342aa8;
        }
    }
    ctx->pc = 0x342A94u;
    // 0x342a94: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x342a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342a9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x342a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x342aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342AA0u;
    {
        const bool branch_taken_0x342aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342AA0u;
            // 0x342aa4: 0x90500002  lbu         $s0, 0x2($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342aa0) {
            ctx->pc = 0x342AC0u;
            goto label_342ac0;
        }
    }
    ctx->pc = 0x342AA8u;
label_342aa8:
    // 0x342aa8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x342AA8u;
    {
        const bool branch_taken_0x342aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342aa8) {
            ctx->pc = 0x342AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342AA8u;
            // 0x342aac: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x342AC4u;
            goto label_342ac4;
        }
    }
    ctx->pc = 0x342AB0u;
    // 0x342ab0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x342ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342ab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342ab8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x342ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x342abc: 0x90500003  lbu         $s0, 0x3($v0)
    ctx->pc = 0x342abcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_342ac0:
    // 0x342ac0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x342ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_342ac4:
    // 0x342ac4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342ac8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342AC8u;
    {
        const bool branch_taken_0x342ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342ac8) {
            ctx->pc = 0x342ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342AC8u;
            // 0x342acc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x342AE0u;
            goto label_342ae0;
        }
    }
    ctx->pc = 0x342AD0u;
    // 0x342ad0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x342ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x342ad4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x342AD4u;
    SET_GPR_U32(ctx, 31, 0x342ADCu);
    ctx->pc = 0x342AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342AD4u;
            // 0x342ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342ADCu; }
        if (ctx->pc != 0x342ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342ADCu; }
        if (ctx->pc != 0x342ADCu) { return; }
    }
    ctx->pc = 0x342ADCu;
label_342adc:
    // 0x342adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342ae0:
    // 0x342ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x342AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342AE8u;
            // 0x342aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342AF0u;
    ctx->pc = 0x342af0u;
}
