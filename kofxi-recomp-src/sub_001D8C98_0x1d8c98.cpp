#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8C98
// Address: 0x1d8c98 - 0x1d8eb0
void sub_001D8C98_0x1d8c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8C98_0x1d8c98");
#endif

    switch (ctx->pc) {
        case 0x1d8ce8u: goto label_1d8ce8;
        case 0x1d8d58u: goto label_1d8d58;
        case 0x1d8da0u: goto label_1d8da0;
        case 0x1d8df0u: goto label_1d8df0;
        case 0x1d8e68u: goto label_1d8e68;
        default: break;
    }

    ctx->pc = 0x1d8c98u;

    // 0x1d8c98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d8cac: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x1d8cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d8cb0: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1d8cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d8cb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d8cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d8cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8cbc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d8cbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d8cc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d8cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d8cc8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d8ccc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D8CCCu;
    {
        const bool branch_taken_0x1d8ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CCCu;
            // 0x1d8cd0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ccc) {
            ctx->pc = 0x1D8D74u;
            goto label_1d8d74;
        }
    }
    ctx->pc = 0x1D8CD4u;
    // 0x1d8cd4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8cd8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1d8cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8cdc: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1d8cdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8ce0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8ce4: 0x0  nop
    ctx->pc = 0x1d8ce4u;
    // NOP
label_1d8ce8:
    // 0x1d8ce8: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8CE8u;
    {
        const bool branch_taken_0x1d8ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1D8CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CE8u;
            // 0x1d8cec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ce8) {
            ctx->pc = 0x1D8D20u;
            goto label_1d8d20;
        }
    }
    ctx->pc = 0x1D8CF0u;
    // 0x1d8cf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8CF0u;
    {
        const bool branch_taken_0x1d8cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cf0) {
            ctx->pc = 0x1D8D10u;
            goto label_1d8d10;
        }
    }
    ctx->pc = 0x1D8CF8u;
    // 0x1d8cf8: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8CF8u;
    {
        const bool branch_taken_0x1d8cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1d8cf8) {
            ctx->pc = 0x1D8D30u;
            goto label_1d8d30;
        }
    }
    ctx->pc = 0x1D8D00u;
    // 0x1d8d00: 0x50760013  beql        $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8D00u;
    {
        const bool branch_taken_0x1d8d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x1d8d00) {
            ctx->pc = 0x1D8D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D00u;
            // 0x1d8d04: 0x2630fffc  addiu       $s0, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D50u;
            goto label_1d8d50;
        }
    }
    ctx->pc = 0x1D8D08u;
    // 0x1d8d08: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D8D08u;
    {
        const bool branch_taken_0x1d8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D08u;
            // 0x1d8d0c: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d08) {
            ctx->pc = 0x1D8D6Cu;
            goto label_1d8d6c;
        }
    }
    ctx->pc = 0x1D8D10u;
label_1d8d10:
    // 0x1d8d10: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8D10u;
    {
        const bool branch_taken_0x1d8d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d10) {
            ctx->pc = 0x1D8D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D10u;
            // 0x1d8d14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D68u;
            goto label_1d8d68;
        }
    }
    ctx->pc = 0x1D8D18u;
    // 0x1d8d18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8D18u;
    {
        const bool branch_taken_0x1d8d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D18u;
            // 0x1d8d1c: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d18) {
            ctx->pc = 0x1D8D6Cu;
            goto label_1d8d6c;
        }
    }
    ctx->pc = 0x1D8D20u;
label_1d8d20:
    // 0x1d8d20: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8D24u;
    {
        const bool branch_taken_0x1d8d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D24u;
            // 0x1d8d28: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d24) {
            ctx->pc = 0x1D8D68u;
            goto label_1d8d68;
        }
    }
    ctx->pc = 0x1D8D2Cu;
    // 0x1d8d2c: 0x0  nop
    ctx->pc = 0x1d8d2cu;
    // NOP
label_1d8d30:
    // 0x1d8d30: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8D30u;
    {
        const bool branch_taken_0x1d8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1d8d30) {
            ctx->pc = 0x1D8D40u;
            goto label_1d8d40;
        }
    }
    ctx->pc = 0x1D8D38u;
    // 0x1d8d38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D8D38u;
    {
        const bool branch_taken_0x1d8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D38u;
            // 0x1d8d3c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d38) {
            ctx->pc = 0x1D8D68u;
            goto label_1d8d68;
        }
    }
    ctx->pc = 0x1D8D40u;
label_1d8d40:
    // 0x1d8d40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8D40u;
    {
        const bool branch_taken_0x1d8d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D40u;
            // 0x1d8d44: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d40) {
            ctx->pc = 0x1D8D6Cu;
            goto label_1d8d6c;
        }
    }
    ctx->pc = 0x1D8D48u;
    // 0x1d8d48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8D48u;
    {
        const bool branch_taken_0x1d8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D48u;
            // 0x1d8d4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d48) {
            ctx->pc = 0x1D8D6Cu;
            goto label_1d8d6c;
        }
    }
    ctx->pc = 0x1D8D50u;
label_1d8d50:
    // 0x1d8d50: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1D8D50u;
    SET_GPR_U32(ctx, 31, 0x1D8D58u);
    ctx->pc = 0x1D8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D50u;
            // 0x1d8d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D58u; }
        if (ctx->pc != 0x1D8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D58u; }
        if (ctx->pc != 0x1D8D58u) { return; }
    }
    ctx->pc = 0x1D8D58u;
label_1d8d58:
    // 0x1d8d58: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x1d8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1d8d5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8D5Cu;
    {
        const bool branch_taken_0x1d8d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D5Cu;
            // 0x1d8d60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d5c) {
            ctx->pc = 0x1D8D78u;
            goto label_1d8d78;
        }
    }
    ctx->pc = 0x1D8D64u;
    // 0x1d8d64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d68:
    // 0x1d8d68: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1d8d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d8d6c:
    // 0x1d8d6c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D8D6Cu;
    {
        const bool branch_taken_0x1d8d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d6c) {
            ctx->pc = 0x1D8D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D6Cu;
            // 0x1d8d70: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8ce8;
        }
    }
    ctx->pc = 0x1D8D74u;
label_1d8d74:
    // 0x1d8d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d78:
    // 0x1d8d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8d7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8d80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8d84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d8d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8d88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d8d88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8d8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d8d8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d8d90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d8d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8d94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d8d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D98u;
            // 0x1d8d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8DA0u;
label_1d8da0:
    // 0x1d8da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8da4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8dac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d8db4: 0x2069021  addu        $s2, $s0, $a2
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1d8db8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1d8db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d8dbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8dc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d8dc4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1d8dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8dc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d8dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d8dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8dd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d8dd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d8dd8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D8DD8u;
    {
        const bool branch_taken_0x1d8dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DD8u;
            // 0x1d8ddc: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dd8) {
            ctx->pc = 0x1D8E84u;
            goto label_1d8e84;
        }
    }
    ctx->pc = 0x1D8DE0u;
    // 0x1d8de0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8de4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8de8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1d8de8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8dec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1d8decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1d8df0:
    // 0x1d8df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d8df4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1d8df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8df8: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8DF8u;
    {
        const bool branch_taken_0x1d8df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1D8DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DF8u;
            // 0x1d8dfc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8df8) {
            ctx->pc = 0x1D8E30u;
            goto label_1d8e30;
        }
    }
    ctx->pc = 0x1D8E00u;
    // 0x1d8e00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8E00u;
    {
        const bool branch_taken_0x1d8e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e00) {
            ctx->pc = 0x1D8E20u;
            goto label_1d8e20;
        }
    }
    ctx->pc = 0x1D8E08u;
    // 0x1d8e08: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8E40u;
            goto label_1d8e40;
        }
    }
    ctx->pc = 0x1D8E10u;
    // 0x1d8e10: 0x10760013  beq         $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8E10u;
    {
        const bool branch_taken_0x1d8e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x1d8e10) {
            ctx->pc = 0x1D8E60u;
            goto label_1d8e60;
        }
    }
    ctx->pc = 0x1D8E18u;
    // 0x1d8e18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D8E18u;
    {
        const bool branch_taken_0x1d8e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E18u;
            // 0x1d8e1c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e18) {
            ctx->pc = 0x1D8E7Cu;
            goto label_1d8e7c;
        }
    }
    ctx->pc = 0x1D8E20u;
label_1d8e20:
    // 0x1d8e20: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8E20u;
    {
        const bool branch_taken_0x1d8e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e20) {
            ctx->pc = 0x1D8E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E20u;
            // 0x1d8e24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E78u;
            goto label_1d8e78;
        }
    }
    ctx->pc = 0x1D8E28u;
    // 0x1d8e28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8E28u;
    {
        const bool branch_taken_0x1d8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E28u;
            // 0x1d8e2c: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e28) {
            ctx->pc = 0x1D8E7Cu;
            goto label_1d8e7c;
        }
    }
    ctx->pc = 0x1D8E30u;
label_1d8e30:
    // 0x1d8e30: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1d8e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8E34u;
    {
        const bool branch_taken_0x1d8e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E34u;
            // 0x1d8e38: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e34) {
            ctx->pc = 0x1D8E78u;
            goto label_1d8e78;
        }
    }
    ctx->pc = 0x1D8E3Cu;
    // 0x1d8e3c: 0x0  nop
    ctx->pc = 0x1d8e3cu;
    // NOP
label_1d8e40:
    // 0x1d8e40: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8E40u;
    {
        const bool branch_taken_0x1d8e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1d8e40) {
            ctx->pc = 0x1D8E50u;
            goto label_1d8e50;
        }
    }
    ctx->pc = 0x1D8E48u;
    // 0x1d8e48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D8E48u;
    {
        const bool branch_taken_0x1d8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E48u;
            // 0x1d8e4c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e48) {
            ctx->pc = 0x1D8E78u;
            goto label_1d8e78;
        }
    }
    ctx->pc = 0x1D8E50u;
label_1d8e50:
    // 0x1d8e50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8E50u;
    {
        const bool branch_taken_0x1d8e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E50u;
            // 0x1d8e54: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e50) {
            ctx->pc = 0x1D8E7Cu;
            goto label_1d8e7c;
        }
    }
    ctx->pc = 0x1D8E58u;
    // 0x1d8e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8E58u;
    {
        const bool branch_taken_0x1d8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E58u;
            // 0x1d8e5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e58) {
            ctx->pc = 0x1D8E7Cu;
            goto label_1d8e7c;
        }
    }
    ctx->pc = 0x1D8E60u;
label_1d8e60:
    // 0x1d8e60: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1D8E60u;
    SET_GPR_U32(ctx, 31, 0x1D8E68u);
    ctx->pc = 0x1D8E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E60u;
            // 0x1d8e64: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E68u; }
        if (ctx->pc != 0x1D8E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E68u; }
        if (ctx->pc != 0x1D8E68u) { return; }
    }
    ctx->pc = 0x1D8E68u;
label_1d8e68:
    // 0x1d8e68: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x1d8e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1d8e6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8E6Cu;
    {
        const bool branch_taken_0x1d8e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E6Cu;
            // 0x1d8e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e6c) {
            ctx->pc = 0x1D8E88u;
            goto label_1d8e88;
        }
    }
    ctx->pc = 0x1D8E74u;
    // 0x1d8e74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e78:
    // 0x1d8e78: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1d8e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d8e7c:
    // 0x1d8e7c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D8E7Cu;
    {
        const bool branch_taken_0x1d8e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e7c) {
            ctx->pc = 0x1D8E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E7Cu;
            // 0x1d8e80: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8df0;
        }
    }
    ctx->pc = 0x1D8E84u;
label_1d8e84:
    // 0x1d8e84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e88:
    // 0x1d8e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8e90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8e94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d8e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8e98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d8e98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8e9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d8e9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d8ea0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d8ea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8ea4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d8ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EA8u;
            // 0x1d8eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8EB0u;
    ctx->pc = 0x1d8eb0u;
}
