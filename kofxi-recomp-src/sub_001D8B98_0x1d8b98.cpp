#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8B98
// Address: 0x1d8b98 - 0x1d8c98
void sub_001D8B98_0x1d8b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8B98_0x1d8b98");
#endif

    switch (ctx->pc) {
        case 0x1d8bd8u: goto label_1d8bd8;
        case 0x1d8c48u: goto label_1d8c48;
        default: break;
    }

    ctx->pc = 0x1d8b98u;

    // 0x1d8b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8b9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8bac: 0x2058823  subu        $s1, $s0, $a1
    ctx->pc = 0x1d8bacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d8bb0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1d8bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d8bb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d8bb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d8bbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d8bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d8bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d8bc4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D8BC4u;
    {
        const bool branch_taken_0x1d8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BC4u;
            // 0x1d8bc8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bc4) {
            ctx->pc = 0x1D8C74u;
            goto label_1d8c74;
        }
    }
    ctx->pc = 0x1D8BCCu;
    // 0x1d8bcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8bd0: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8bd4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d8bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d8bd8:
    // 0x1d8bd8: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D8BD8u;
    {
        const bool branch_taken_0x1d8bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D8BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BD8u;
            // 0x1d8bdc: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bd8) {
            ctx->pc = 0x1D8C08u;
            goto label_1d8c08;
        }
    }
    ctx->pc = 0x1D8BE0u;
    // 0x1d8be0: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8BE0u;
    {
        const bool branch_taken_0x1d8be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8be0) {
            ctx->pc = 0x1D8BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BE0u;
            // 0x1d8be4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8BE8u;
    // 0x1d8be8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8bec: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8BECu;
    {
        const bool branch_taken_0x1d8bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d8bec) {
            ctx->pc = 0x1D8C18u;
            goto label_1d8c18;
        }
    }
    ctx->pc = 0x1D8BF4u;
    // 0x1d8bf4: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8BF4u;
    {
        const bool branch_taken_0x1d8bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x1d8bf4) {
            ctx->pc = 0x1D8C38u;
            goto label_1d8c38;
        }
    }
    ctx->pc = 0x1D8BFCu;
    // 0x1d8bfc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8BFCu;
    {
        const bool branch_taken_0x1d8bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BFCu;
            // 0x1d8c00: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bfc) {
            ctx->pc = 0x1D8C6Cu;
            goto label_1d8c6c;
        }
    }
    ctx->pc = 0x1D8C04u;
    // 0x1d8c04: 0x0  nop
    ctx->pc = 0x1d8c04u;
    // NOP
label_1d8c08:
    // 0x1d8c08: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8C08u;
    {
        const bool branch_taken_0x1d8c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8c08) {
            ctx->pc = 0x1D8C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C08u;
            // 0x1d8c0c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8C10u;
    // 0x1d8c10: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8C10u;
    {
        const bool branch_taken_0x1d8c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C10u;
            // 0x1d8c14: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c10) {
            ctx->pc = 0x1D8C6Cu;
            goto label_1d8c6c;
        }
    }
    ctx->pc = 0x1D8C18u;
label_1d8c18:
    // 0x1d8c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C18u;
    {
        const bool branch_taken_0x1d8c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c18) {
            ctx->pc = 0x1D8C28u;
            goto label_1d8c28;
        }
    }
    ctx->pc = 0x1D8C20u;
    // 0x1d8c20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8C20u;
    {
        const bool branch_taken_0x1d8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C20u;
            // 0x1d8c24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c20) {
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8C28u;
label_1d8c28:
    // 0x1d8c28: 0x10520010  beq         $v0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8C28u;
    {
        const bool branch_taken_0x1d8c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C28u;
            // 0x1d8c2c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c28) {
            ctx->pc = 0x1D8C6Cu;
            goto label_1d8c6c;
        }
    }
    ctx->pc = 0x1D8C30u;
    // 0x1d8c30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D8C30u;
    {
        const bool branch_taken_0x1d8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C30u;
            // 0x1d8c34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c30) {
            ctx->pc = 0x1D8C6Cu;
            goto label_1d8c6c;
        }
    }
    ctx->pc = 0x1D8C38u;
label_1d8c38:
    // 0x1d8c38: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8C38u;
    {
        const bool branch_taken_0x1d8c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c38) {
            ctx->pc = 0x1D8C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C38u;
            // 0x1d8c3c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C60u;
            goto label_1d8c60;
        }
    }
    ctx->pc = 0x1D8C40u;
    // 0x1d8c40: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1D8C40u;
    SET_GPR_U32(ctx, 31, 0x1D8C48u);
    ctx->pc = 0x1D8C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C40u;
            // 0x1d8c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C48u; }
        if (ctx->pc != 0x1D8C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C48u; }
        if (ctx->pc != 0x1D8C48u) { return; }
    }
    ctx->pc = 0x1D8C48u;
label_1d8c48:
    // 0x1d8c48: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x1d8c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1d8c4c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8C4Cu;
    {
        const bool branch_taken_0x1d8c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C4Cu;
            // 0x1d8c50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c4c) {
            ctx->pc = 0x1D8C78u;
            goto label_1d8c78;
        }
    }
    ctx->pc = 0x1D8C54u;
    // 0x1d8c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8C54u;
    {
        const bool branch_taken_0x1d8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C54u;
            // 0x1d8c58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c54) {
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8C5Cu;
    // 0x1d8c5c: 0x0  nop
    ctx->pc = 0x1d8c5cu;
    // NOP
label_1d8c60:
    // 0x1d8c60: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1d8c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c64: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1d8c64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1d8c68:
    // 0x1d8c68: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1d8c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d8c6c:
    // 0x1d8c6c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D8C6Cu;
    {
        const bool branch_taken_0x1d8c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C6Cu;
            // 0x1d8c70: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c6c) {
            ctx->pc = 0x1D8BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8bd8;
        }
    }
    ctx->pc = 0x1D8C74u;
label_1d8c74:
    // 0x1d8c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c78:
    // 0x1d8c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8c80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d8c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8c88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8c8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d8c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C90u;
            // 0x1d8c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8C98u;
    ctx->pc = 0x1d8c98u;
}
