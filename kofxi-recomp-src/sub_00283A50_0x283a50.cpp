#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283A50
// Address: 0x283a50 - 0x283b30
void sub_00283A50_0x283a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A50_0x283a50");
#endif

    switch (ctx->pc) {
        case 0x283a78u: goto label_283a78;
        case 0x283aa4u: goto label_283aa4;
        case 0x283ae4u: goto label_283ae4;
        case 0x283b14u: goto label_283b14;
        default: break;
    }

    ctx->pc = 0x283a50u;

    // 0x283a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283a54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x283a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x283a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283a5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x283a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x283a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283a68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x283a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x283a6c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x283A6Cu;
    {
        const bool branch_taken_0x283a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A6Cu;
            // 0x283a70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a6c) {
            ctx->pc = 0x283AC0u;
            goto label_283ac0;
        }
    }
    ctx->pc = 0x283A74u;
    // 0x283a74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x283a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283a78:
    // 0x283a78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x283a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x283a7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x283a80: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x283a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x283a84: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x283A84u;
    {
        const bool branch_taken_0x283a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A84u;
            // 0x283a88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a84) {
            ctx->pc = 0x283AB4u;
            goto label_283ab4;
        }
    }
    ctx->pc = 0x283A8Cu;
    // 0x283a8c: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x283a8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x283a90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283a94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283A94u;
    {
        const bool branch_taken_0x283a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a94) {
            ctx->pc = 0x283AB4u;
            goto label_283ab4;
        }
    }
    ctx->pc = 0x283A9Cu;
    // 0x283a9c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x283A9Cu;
    SET_GPR_U32(ctx, 31, 0x283AA4u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AA4u; }
        if (ctx->pc != 0x283AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AA4u; }
        if (ctx->pc != 0x283AA4u) { return; }
    }
    ctx->pc = 0x283AA4u;
label_283aa4:
    // 0x283aa4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x283aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x283aa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x283aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x283aac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x283aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x283ab0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x283ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_283ab4:
    // 0x283ab4: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x283ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283ab8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x283AB8u;
    {
        const bool branch_taken_0x283ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AB8u;
            // 0x283abc: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ab8) {
            ctx->pc = 0x283A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283a78;
        }
    }
    ctx->pc = 0x283AC0u;
label_283ac0:
    // 0x283ac0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x283ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283ac4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x283ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x283ac8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283AC8u;
    {
        const bool branch_taken_0x283ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AC8u;
            // 0x283acc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ac8) {
            ctx->pc = 0x283AF0u;
            goto label_283af0;
        }
    }
    ctx->pc = 0x283AD0u;
    // 0x283ad0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x283ad4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283AD4u;
    {
        const bool branch_taken_0x283ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ad4) {
            ctx->pc = 0x283AF0u;
            goto label_283af0;
        }
    }
    ctx->pc = 0x283ADCu;
    // 0x283adc: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x283ADCu;
    SET_GPR_U32(ctx, 31, 0x283AE4u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AE4u; }
        if (ctx->pc != 0x283AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AE4u; }
        if (ctx->pc != 0x283AE4u) { return; }
    }
    ctx->pc = 0x283AE4u;
label_283ae4:
    // 0x283ae4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x283ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x283ae8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283aec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x283aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_283af0:
    // 0x283af0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283AF0u;
    {
        const bool branch_taken_0x283af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AF0u;
            // 0x283af4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283af0) {
            ctx->pc = 0x283B14u;
            goto label_283b14;
        }
    }
    ctx->pc = 0x283AF8u;
    // 0x283af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283afc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283b00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283b04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283b0c: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x283B0Cu;
    ctx->pc = 0x283B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283B0Cu;
            // 0x283b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x283B14u;
label_283b14:
    // 0x283b14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283b18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283b1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283b24: 0x3e00008  jr          $ra
    ctx->pc = 0x283B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B24u;
            // 0x283b28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283B2Cu;
    // 0x283b2c: 0x0  nop
    ctx->pc = 0x283b2cu;
    // NOP
    ctx->pc = 0x283b30u;
}
