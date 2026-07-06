#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168D60
// Address: 0x168d60 - 0x168e10
void sub_00168D60_0x168d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168D60_0x168d60");
#endif

    switch (ctx->pc) {
        case 0x168d88u: goto label_168d88;
        case 0x168dd8u: goto label_168dd8;
        default: break;
    }

    ctx->pc = 0x168d60u;

    // 0x168d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168d64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168d70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168d78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d7c: 0x948400ea  lhu         $a0, 0xEA($a0)
    ctx->pc = 0x168d7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x168d80: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x168D80u;
    SET_GPR_U32(ctx, 31, 0x168D88u);
    ctx->pc = 0x168D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D80u;
            // 0x168d84: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (runtime->hasFunction(0x18DE30u)) {
        auto targetFn = runtime->lookupFunction(0x18DE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D88u; }
        if (ctx->pc != 0x168D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DE30_0x18de30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D88u; }
        if (ctx->pc != 0x168D88u) { return; }
    }
    ctx->pc = 0x168D88u;
label_168d88:
    // 0x168d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x168d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d8c: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x168d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x168d90: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x168d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x168d94: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D94u;
    {
        const bool branch_taken_0x168d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d94) {
            ctx->pc = 0x168D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168D94u;
            // 0x168d98: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168DA4u;
            goto label_168da4;
        }
    }
    ctx->pc = 0x168D9Cu;
    // 0x168d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168D9Cu;
    {
        const bool branch_taken_0x168d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D9Cu;
            // 0x168da0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d9c) {
            ctx->pc = 0x168DD0u;
            goto label_168dd0;
        }
    }
    ctx->pc = 0x168DA4u;
label_168da4:
    // 0x168da4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DA4u;
    {
        const bool branch_taken_0x168da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168da4) {
            ctx->pc = 0x168DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168DA4u;
            // 0x168da8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168DB4u;
            goto label_168db4;
        }
    }
    ctx->pc = 0x168DACu;
    // 0x168dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168DACu;
    {
        const bool branch_taken_0x168dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DACu;
            // 0x168db0: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dac) {
            ctx->pc = 0x168DD0u;
            goto label_168dd0;
        }
    }
    ctx->pc = 0x168DB4u;
label_168db4:
    // 0x168db4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DB4u;
    {
        const bool branch_taken_0x168db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168db4) {
            ctx->pc = 0x168DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168DB4u;
            // 0x168db8: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168DC4u;
            goto label_168dc4;
        }
    }
    ctx->pc = 0x168DBCu;
    // 0x168dbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168DBCu;
    {
        const bool branch_taken_0x168dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DBCu;
            // 0x168dc0: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dbc) {
            ctx->pc = 0x168DD0u;
            goto label_168dd0;
        }
    }
    ctx->pc = 0x168DC4u;
label_168dc4:
    // 0x168dc4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x168DC4u;
    {
        const bool branch_taken_0x168dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168dc4) {
            ctx->pc = 0x168DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168DC4u;
            // 0x168dc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168DD0u;
            goto label_168dd0;
        }
    }
    ctx->pc = 0x168DCCu;
    // 0x168dcc: 0x64120003  daddiu      $s2, $zero, 0x3
    ctx->pc = 0x168dccu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
label_168dd0:
    // 0x168dd0: 0xc062b50  jal         func_18AD40
    ctx->pc = 0x168DD0u;
    SET_GPR_U32(ctx, 31, 0x168DD8u);
    ctx->pc = 0x168DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DD0u;
            // 0x168dd4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AD40u;
    if (runtime->hasFunction(0x18AD40u)) {
        auto targetFn = runtime->lookupFunction(0x18AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DD8u; }
        if (ctx->pc != 0x168DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AD40_0x18ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DD8u; }
        if (ctx->pc != 0x168DD8u) { return; }
    }
    ctx->pc = 0x168DD8u;
label_168dd8:
    // 0x168dd8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x168dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x168ddc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x168ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x168de0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168de4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168de8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x168de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x168dec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168df0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x168df0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168dfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x168dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x168e00: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x168e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168e04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x168e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x168e08: 0x3e00008  jr          $ra
    ctx->pc = 0x168E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E08u;
            // 0x168e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168E10u;
    ctx->pc = 0x168e10u;
}
