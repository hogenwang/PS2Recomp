#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231AC0
// Address: 0x231ac0 - 0x231bc0
void sub_00231AC0_0x231ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231AC0_0x231ac0");
#endif

    switch (ctx->pc) {
        case 0x231af0u: goto label_231af0;
        case 0x231b30u: goto label_231b30;
        case 0x231b48u: goto label_231b48;
        default: break;
    }

    ctx->pc = 0x231ac0u;

    // 0x231ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x231ac4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x231ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x231ac8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x231ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x231acc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x231accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ad0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x231ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ad8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x231ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x231adc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231ae4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x231AE4u;
    {
        const bool branch_taken_0x231ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AE4u;
            // 0x231ae8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ae4) {
            ctx->pc = 0x231B88u;
            goto label_231b88;
        }
    }
    ctx->pc = 0x231AECu;
    // 0x231aec: 0x0  nop
    ctx->pc = 0x231aecu;
    // NOP
label_231af0:
    // 0x231af0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x231af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x231af4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231AF4u;
    {
        const bool branch_taken_0x231af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x231AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AF4u;
            // 0x231af8: 0x270102b  sltu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231af4) {
            ctx->pc = 0x231B14u;
            goto label_231b14;
        }
    }
    ctx->pc = 0x231AFCu;
    // 0x231afc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x231afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x231b00: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x231b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x231b04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x231b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x231b08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x231b0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x231B0Cu;
    {
        const bool branch_taken_0x231b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B0Cu;
            // 0x231b10: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b0c) {
            ctx->pc = 0x231B88u;
            goto label_231b88;
        }
    }
    ctx->pc = 0x231B14u;
label_231b14:
    // 0x231b14: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x231b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x231b18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231B18u;
    {
        const bool branch_taken_0x231b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B18u;
            // 0x231b1c: 0x262800b  movn        $s0, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b18) {
            ctx->pc = 0x231B38u;
            goto label_231b38;
        }
    }
    ctx->pc = 0x231B20u;
    // 0x231b20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x231b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231b24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x231b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b28: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231B28u;
    SET_GPR_U32(ctx, 31, 0x231B30u);
    ctx->pc = 0x231B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B28u;
            // 0x231b2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B30u; }
        if (ctx->pc != 0x231B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B30u; }
        if (ctx->pc != 0x231B30u) { return; }
    }
    ctx->pc = 0x231B30u;
label_231b30:
    // 0x231b30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x231B30u;
    {
        const bool branch_taken_0x231b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B30u;
            // 0x231b34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b30) {
            ctx->pc = 0x231B4Cu;
            goto label_231b4c;
        }
    }
    ctx->pc = 0x231B38u;
label_231b38:
    // 0x231b38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231b3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b40: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231B40u;
    SET_GPR_U32(ctx, 31, 0x231B48u);
    ctx->pc = 0x231B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B40u;
            // 0x231b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B48u; }
        if (ctx->pc != 0x231B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B48u; }
        if (ctx->pc != 0x231B48u) { return; }
    }
    ctx->pc = 0x231B48u;
label_231b48:
    // 0x231b48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x231b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_231b4c:
    // 0x231b4c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x231b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x231b50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x231b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x231b54: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x231b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x231b58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x231b5c: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x231b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x231b60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x231b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x231b64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x231b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x231b68: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x231b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x231b6c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x231b70: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x231b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x231b74: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x231b74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x231b78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x231b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x231b7c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x231b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x231b80: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x231b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x231b84: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x231b84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
label_231b88:
    // 0x231b88: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x231B88u;
    {
        const bool branch_taken_0x231b88 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x231B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B88u;
            // 0x231b8c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b88) {
            ctx->pc = 0x231BA0u;
            goto label_231ba0;
        }
    }
    ctx->pc = 0x231B90u;
    // 0x231b90: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x231b94: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x231B94u;
    {
        const bool branch_taken_0x231b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231b94) {
            ctx->pc = 0x231B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231B94u;
            // 0x231b98: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231af0;
        }
    }
    ctx->pc = 0x231B9Cu;
    // 0x231b9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x231b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_231ba0:
    // 0x231ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ba4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x231ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231ba8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x231ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231bb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x231BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BB8u;
            // 0x231bbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231BC0u;
    ctx->pc = 0x231bc0u;
}
