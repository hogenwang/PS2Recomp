#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127BE0
// Address: 0x127be0 - 0x127d40
void sub_00127BE0_0x127be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127BE0_0x127be0");
#endif

    switch (ctx->pc) {
        case 0x127c2cu: goto label_127c2c;
        case 0x127c50u: goto label_127c50;
        case 0x127c64u: goto label_127c64;
        case 0x127ca8u: goto label_127ca8;
        case 0x127ce0u: goto label_127ce0;
        case 0x127cf0u: goto label_127cf0;
        case 0x127d18u: goto label_127d18;
        default: break;
    }

    ctx->pc = 0x127be0u;

    // 0x127be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x127be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127bf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x127bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127bf8: 0x68943  sra         $s1, $a2, 5
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 5));
    // 0x127bfc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x127bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x127c00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127c04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x127c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127c0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x127c0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c10: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x127c14: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x127c14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x127c18: 0x22e7021  addu        $t6, $s1, $t6
    ctx->pc = 0x127c18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x127c1c: 0x25d20001  addiu       $s2, $t6, 0x1
    ctx->pc = 0x127c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x127c20: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x127c20u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x127c24: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x127C24u;
    {
        const bool branch_taken_0x127c24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C24u;
            // 0x127c28: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c24) {
            ctx->pc = 0x127C48u;
            goto label_127c48;
        }
    }
    ctx->pc = 0x127C2Cu;
label_127c2c:
    // 0x127c2c: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x127c2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x127c30: 0x1b2782a  slt         $t7, $t5, $s2
    ctx->pc = 0x127c30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x127c34: 0x0  nop
    ctx->pc = 0x127c34u;
    // NOP
    // 0x127c38: 0x0  nop
    ctx->pc = 0x127c38u;
    // NOP
    // 0x127c3c: 0x0  nop
    ctx->pc = 0x127c3cu;
    // NOP
    // 0x127c40: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127C40u;
    {
        const bool branch_taken_0x127c40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C40u;
            // 0x127c44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c40) {
            ctx->pc = 0x127C2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127c2c;
        }
    }
    ctx->pc = 0x127C48u;
label_127c48:
    // 0x127c48: 0xc049d12  jal         func_127448
    ctx->pc = 0x127C48u;
    SET_GPR_U32(ctx, 31, 0x127C50u);
    ctx->pc = 0x127C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127C48u;
            // 0x127c4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (runtime->hasFunction(0x127448u)) {
        auto targetFn = runtime->lookupFunction(0x127448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C50u; }
        if (ctx->pc != 0x127C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127448_0x127448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C50u; }
        if (ctx->pc != 0x127C50u) { return; }
    }
    ctx->pc = 0x127C50u;
label_127c50:
    // 0x127c50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x127c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c54: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x127C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C54u;
            // 0x127c58: 0x244d0014  addiu       $t5, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127C84u;
            goto label_127c84;
        }
    }
    ctx->pc = 0x127C5Cu;
    // 0x127c5c: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x127c5cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c60: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x127c60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127c64:
    // 0x127c64: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x127c64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x127c68: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x127c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x127c6c: 0x0  nop
    ctx->pc = 0x127c6cu;
    // NOP
    // 0x127c70: 0x0  nop
    ctx->pc = 0x127c70u;
    // NOP
    // 0x127c74: 0x0  nop
    ctx->pc = 0x127c74u;
    // NOP
    // 0x127c78: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127C78u;
    {
        const bool branch_taken_0x127c78 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x127C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C78u;
            // 0x127c7c: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c78) {
            ctx->pc = 0x127C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127c64;
        }
    }
    ctx->pc = 0x127C80u;
    // 0x127c80: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x127c80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_127c84:
    // 0x127c84: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x127c88: 0x266c0014  addiu       $t4, $s3, 0x14
    ctx->pc = 0x127c88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x127c8c: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x127c8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x127c90: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x127c94: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x127C94u;
    {
        const bool branch_taken_0x127c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C94u;
            // 0x127c98: 0x18f5821  addu        $t3, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c94) {
            ctx->pc = 0x127D18u;
            goto label_127d18;
        }
    }
    ctx->pc = 0x127C9Cu;
    // 0x127c9c: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x127c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x127ca0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x127ca0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ca4: 0x1f05023  subu        $t2, $t7, $s0
    ctx->pc = 0x127ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_127ca8:
    // 0x127ca8: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x127ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127cac: 0x20f7804  sllv        $t7, $t7, $s0
    ctx->pc = 0x127cacu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 16) & 0x1F));
    // 0x127cb0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x127cb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x127cb4: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x127cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x127cb8: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x127cb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127cbc: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x127cbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x127cc0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x127cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x127cc4: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x127cc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x127cc8: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127CC8u;
    {
        const bool branch_taken_0x127cc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CC8u;
            // 0x127ccc: 0x14e7006  srlv        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cc8) {
            ctx->pc = 0x127CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127ca8;
        }
    }
    ctx->pc = 0x127CD0u;
    // 0x127cd0: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x127CD0u;
    {
        const bool branch_taken_0x127cd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CD0u;
            // 0x127cd4: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cd0) {
            ctx->pc = 0x127CDCu;
            goto label_127cdc;
        }
    }
    ctx->pc = 0x127CD8u;
    // 0x127cd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x127cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_127cdc:
    // 0x127cdc: 0x264fffff  addiu       $t7, $s2, -0x1
    ctx->pc = 0x127cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_127ce0:
    // 0x127ce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ce4: 0xae8f0010  sw          $t7, 0x10($s4)
    ctx->pc = 0x127ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 15));
    // 0x127ce8: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x127CE8u;
    SET_GPR_U32(ctx, 31, 0x127CF0u);
    ctx->pc = 0x127CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CE8u;
            // 0x127cec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (runtime->hasFunction(0x1274F0u)) {
        auto targetFn = runtime->lookupFunction(0x1274F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CF0u; }
        if (ctx->pc != 0x127CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001274F0_0x1274f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CF0u; }
        if (ctx->pc != 0x127CF0u) { return; }
    }
    ctx->pc = 0x127CF0u;
label_127cf0:
    // 0x127cf0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x127cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127d04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127d04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127d08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x127d08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127d0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127d10: 0x3e00008  jr          $ra
    ctx->pc = 0x127D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D10u;
            // 0x127d14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127D18u;
label_127d18:
    // 0x127d18: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x127d18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127d1c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x127d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x127d20: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x127d20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x127d24: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x127d24u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x127d28: 0x0  nop
    ctx->pc = 0x127d28u;
    // NOP
    // 0x127d2c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127D2Cu;
    {
        const bool branch_taken_0x127d2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D2Cu;
            // 0x127d30: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d2c) {
            ctx->pc = 0x127D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127d18;
        }
    }
    ctx->pc = 0x127D34u;
    // 0x127d34: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x127D34u;
    {
        const bool branch_taken_0x127d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D34u;
            // 0x127d38: 0x264fffff  addiu       $t7, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d34) {
            ctx->pc = 0x127CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127ce0;
        }
    }
    ctx->pc = 0x127D3Cu;
    // 0x127d3c: 0x0  nop
    ctx->pc = 0x127d3cu;
    // NOP
    ctx->pc = 0x127d40u;
}
