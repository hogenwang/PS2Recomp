#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208BD0
// Address: 0x208bd0 - 0x208c60
void sub_00208BD0_0x208bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208BD0_0x208bd0");
#endif

    switch (ctx->pc) {
        case 0x208c44u: goto label_208c44;
        default: break;
    }

    ctx->pc = 0x208bd0u;

    // 0x208bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208bd4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x208bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208bdc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x208bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x208be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208be4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208be8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208BE8u;
    {
        const bool branch_taken_0x208be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BE8u;
            // 0x208bec: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208be8) {
            ctx->pc = 0x208C04u;
            goto label_208c04;
        }
    }
    ctx->pc = 0x208BF0u;
    // 0x208bf0: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x208BF0u;
    {
        const bool branch_taken_0x208bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x208bf0) {
            ctx->pc = 0x208BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208BF0u;
            // 0x208bf4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208C2Cu;
            goto label_208c2c;
        }
    }
    ctx->pc = 0x208BF8u;
    // 0x208bf8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x208bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x208bfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208BFCu;
    {
        const bool branch_taken_0x208bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BFCu;
            // 0x208c00: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bfc) {
            ctx->pc = 0x208C28u;
            goto label_208c28;
        }
    }
    ctx->pc = 0x208C04u;
label_208c04:
    // 0x208c04: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x208c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x208c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208C08u;
    {
        const bool branch_taken_0x208c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c08) {
            ctx->pc = 0x208C28u;
            goto label_208c28;
        }
    }
    ctx->pc = 0x208C10u;
    // 0x208c10: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x208c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x208c14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208c18: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208C18u;
    {
        const bool branch_taken_0x208c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x208c18) {
            ctx->pc = 0x208C28u;
            goto label_208c28;
        }
    }
    ctx->pc = 0x208C20u;
    // 0x208c20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x208c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208c24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x208c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_208c28:
    // 0x208c28: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x208c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_208c2c:
    // 0x208c2c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x208c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x208c30: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C30u;
    {
        const bool branch_taken_0x208c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x208c30) {
            ctx->pc = 0x208C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208C30u;
            // 0x208c34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208C48u;
            goto label_208c48;
        }
    }
    ctx->pc = 0x208C38u;
    // 0x208c38: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x208c3c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x208C3Cu;
    SET_GPR_U32(ctx, 31, 0x208C44u);
    ctx->pc = 0x208C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208C3Cu;
            // 0x208c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C44u; }
        if (ctx->pc != 0x208C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C44u; }
        if (ctx->pc != 0x208C44u) { return; }
    }
    ctx->pc = 0x208C44u;
label_208c44:
    // 0x208c44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x208c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c48:
    // 0x208c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208c50: 0x3e00008  jr          $ra
    ctx->pc = 0x208C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C50u;
            // 0x208c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208C58u;
    // 0x208c58: 0x0  nop
    ctx->pc = 0x208c58u;
    // NOP
    // 0x208c5c: 0x0  nop
    ctx->pc = 0x208c5cu;
    // NOP
    ctx->pc = 0x208c60u;
}
