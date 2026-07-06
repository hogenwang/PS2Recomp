#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197CF0
// Address: 0x197cf0 - 0x197e00
void sub_00197CF0_0x197cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197CF0_0x197cf0");
#endif

    switch (ctx->pc) {
        case 0x197db0u: goto label_197db0;
        default: break;
    }

    ctx->pc = 0x197cf0u;

    // 0x197cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197cf4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197cf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197cfc: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x197d00: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197d04: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197d08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197d0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197d10: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x197d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197d18: 0x24a5dbbc  addiu       $a1, $a1, -0x2444
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958012));
    // 0x197d1c: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197d20: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x197d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x197d24: 0x2442dbb8  addiu       $v0, $v0, -0x2448
    ctx->pc = 0x197d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958008));
    // 0x197d28: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x197d2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x197d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197d38: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x197d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x197d3c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x197d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x197d40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197d44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197D48u;
    {
        const bool branch_taken_0x197d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D48u;
            // 0x197d4c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d48) {
            ctx->pc = 0x197D60u;
            goto label_197d60;
        }
    }
    ctx->pc = 0x197D50u;
    // 0x197d50: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197D50u;
            // 0x197d54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197DF0u;
            goto label_197df0;
        }
    }
    ctx->pc = 0x197D58u;
    // 0x197d58: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197D58u;
            // 0x197d5c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197D6Cu;
            goto label_197d6c;
        }
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197d64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x197D64u;
    {
        const bool branch_taken_0x197d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d64) {
            ctx->pc = 0x197DF0u;
            goto label_197df0;
        }
    }
    ctx->pc = 0x197D6Cu;
label_197d6c:
    // 0x197d6c: 0x24440314  addiu       $a0, $v0, 0x314
    ctx->pc = 0x197d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 788));
    // 0x197d70: 0x904203a6  lbu         $v0, 0x3A6($v0)
    ctx->pc = 0x197d70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 934)));
    // 0x197d74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D74u;
    {
        const bool branch_taken_0x197d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d74) {
            ctx->pc = 0x197D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197D74u;
            // 0x197d78: 0x90820049  lbu         $v0, 0x49($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197D84u;
            goto label_197d84;
        }
    }
    ctx->pc = 0x197D7Cu;
    // 0x197d7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x197D7Cu;
    {
        const bool branch_taken_0x197d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D7Cu;
            // 0x197d80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d7c) {
            ctx->pc = 0x197DF0u;
            goto label_197df0;
        }
    }
    ctx->pc = 0x197D84u;
label_197d84:
    // 0x197d84: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x197d88: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x197d88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197d8c: 0x2a010010  slti        $at, $s0, 0x10
    ctx->pc = 0x197d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x197d90: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D90u;
    {
        const bool branch_taken_0x197d90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D90u;
            // 0x197d94: 0x24830048  addiu       $v1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d90) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197D98u;
    // 0x197d98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x197D98u;
    {
        const bool branch_taken_0x197d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D98u;
            // 0x197d9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d98) {
            ctx->pc = 0x197DF0u;
            goto label_197df0;
        }
    }
    ctx->pc = 0x197DA0u;
label_197da0:
    // 0x197da0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x197da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x197da4: 0x944400ea  lhu         $a0, 0xEA($v0)
    ctx->pc = 0x197da4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x197da8: 0xc063600  jal         func_18D800
    ctx->pc = 0x197DA8u;
    SET_GPR_U32(ctx, 31, 0x197DB0u);
    ctx->pc = 0x197DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197DA8u;
            // 0x197dac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (runtime->hasFunction(0x18D800u)) {
        auto targetFn = runtime->lookupFunction(0x18D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DB0u; }
        if (ctx->pc != 0x197DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D800_0x18d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DB0u; }
        if (ctx->pc != 0x197DB0u) { return; }
    }
    ctx->pc = 0x197DB0u;
label_197db0:
    // 0x197db0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x197db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x197db4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x197db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x197db8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197dbc: 0x24635bc0  addiu       $v1, $v1, 0x5BC0
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23488));
    // 0x197dc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x197dc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197dc4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x197dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197dcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197dd0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x197dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197dd4: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x197dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
    // 0x197dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197ddc: 0x28420054  slti        $v0, $v0, 0x54
    ctx->pc = 0x197ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)84) ? 1 : 0);
    // 0x197de0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x197de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x197de4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197de8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197dec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_197df0:
    // 0x197df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197df8: 0x3e00008  jr          $ra
    ctx->pc = 0x197DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197DF8u;
            // 0x197dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197E00u;
    ctx->pc = 0x197e00u;
}
