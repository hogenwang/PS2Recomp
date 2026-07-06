#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351C80
// Address: 0x351c80 - 0x351f90
void sub_00351C80_0x351c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351C80_0x351c80");
#endif

    switch (ctx->pc) {
        case 0x351c90u: goto label_351c90;
        case 0x351ca0u: goto label_351ca0;
        case 0x351cbcu: goto label_351cbc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351d98u: goto label_351d98;
        case 0x351e54u: goto label_351e54;
        case 0x351ea0u: goto label_351ea0;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ee0u: goto label_351ee0;
        case 0x351f04u: goto label_351f04;
        case 0x351f10u: goto label_351f10;
        case 0x351f20u: goto label_351f20;
        case 0x351f30u: goto label_351f30;
        case 0x351f78u: goto label_351f78;
        default: break;
    }

    ctx->pc = 0x351c80u;

    // 0x351c80: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351c84: 0x3e00008  jr          $ra
    ctx->pc = 0x351C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351C84u;
            // 0x351c88: 0x8c42bdc0  lw          $v0, -0x4240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351C8Cu;
    // 0x351c8c: 0x0  nop
    ctx->pc = 0x351c8cu;
    // NOP
label_351c90:
    // 0x351c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351c98: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x351C98u;
    SET_GPR_U32(ctx, 31, 0x351CA0u);
    ctx->pc = 0x351C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351C98u;
            // 0x351c9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2F0u;
    if (runtime->hasFunction(0x18A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CA0u; }
        if (ctx->pc != 0x351CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A2F0_0x18a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CA0u; }
        if (ctx->pc != 0x351CA0u) { return; }
    }
    ctx->pc = 0x351CA0u;
label_351ca0:
    // 0x351ca0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x351ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x351ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351ca8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351cac: 0x16050007  bne         $s0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x351CACu;
    {
        const bool branch_taken_0x351cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x351CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351CACu;
            // 0x351cb0: 0xac40bdc0  sw          $zero, -0x4240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cac) {
            ctx->pc = 0x351CCCu;
            goto label_351ccc;
        }
    }
    ctx->pc = 0x351CB4u;
    // 0x351cb4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x351CB4u;
    SET_GPR_U32(ctx, 31, 0x351CBCu);
    ctx->pc = 0x351CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351CB4u;
            // 0x351cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CBCu; }
        if (ctx->pc != 0x351CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CBCu; }
        if (ctx->pc != 0x351CBCu) { return; }
    }
    ctx->pc = 0x351CBCu;
label_351cbc:
    // 0x351cbc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x351cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x351cc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351cc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x351CC4u;
    {
        const bool branch_taken_0x351cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351CC4u;
            // 0x351cc8: 0xac43bdc0  sw          $v1, -0x4240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cc4) {
            ctx->pc = 0x351CECu;
            goto label_351cec;
        }
    }
    ctx->pc = 0x351CCCu;
label_351ccc:
    // 0x351ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x351cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351cd0: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351CD0u;
    {
        const bool branch_taken_0x351cd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x351cd0) {
            ctx->pc = 0x351CECu;
            goto label_351cec;
        }
    }
    ctx->pc = 0x351CD8u;
    // 0x351cd8: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x351CD8u;
    SET_GPR_U32(ctx, 31, 0x351CE0u);
    ctx->pc = 0x351CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351CD8u;
            // 0x351cdc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CE0u; }
        if (ctx->pc != 0x351CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351CE0u; }
        if (ctx->pc != 0x351CE0u) { return; }
    }
    ctx->pc = 0x351CE0u;
label_351ce0:
    // 0x351ce0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x351ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x351ce4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351ce8: 0xac43bdc0  sw          $v1, -0x4240($v0)
    ctx->pc = 0x351ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950336), GPR_U32(ctx, 3));
label_351cec:
    // 0x351cec: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x351CECu;
    {
        const bool branch_taken_0x351cec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x351cec) {
            ctx->pc = 0x351CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351CECu;
            // 0x351cf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351D2Cu;
            goto label_351d2c;
        }
    }
    ctx->pc = 0x351CF4u;
    // 0x351cf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351cfc: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x351cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351d00: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x351d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x351d04: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x351d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x351d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351D08u;
    {
        const bool branch_taken_0x351d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d08) {
            ctx->pc = 0x351D20u;
            goto label_351d20;
        }
    }
    ctx->pc = 0x351D10u;
    // 0x351d10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x351d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351d14: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351d18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x351D18u;
    {
        const bool branch_taken_0x351d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D18u;
            // 0x351d1c: 0xac43fe50  sw          $v1, -0x1B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966864), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d18) {
            ctx->pc = 0x351D34u;
            goto label_351d34;
        }
    }
    ctx->pc = 0x351D20u;
label_351d20:
    // 0x351d20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351d24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x351D24u;
    {
        const bool branch_taken_0x351d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D24u;
            // 0x351d28: 0xac43fe50  sw          $v1, -0x1B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966864), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d24) {
            ctx->pc = 0x351D34u;
            goto label_351d34;
        }
    }
    ctx->pc = 0x351D2Cu;
label_351d2c:
    // 0x351d2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351d30: 0xac43fe50  sw          $v1, -0x1B0($v0)
    ctx->pc = 0x351d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966864), GPR_U32(ctx, 3));
label_351d34:
    // 0x351d34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351d38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x351d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x351d3c: 0x90489490  lbu         $t0, -0x6B70($v0)
    ctx->pc = 0x351d3cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351d40: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x351d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x351d44: 0x3c03d1b7  lui         $v1, 0xD1B7
    ctx->pc = 0x351d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53687 << 16));
    // 0x351d48: 0x24c6db94  addiu       $a2, $a2, -0x246C
    ctx->pc = 0x351d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957972));
    // 0x351d4c: 0x34651759  ori         $a1, $v1, 0x1759
    ctx->pc = 0x351d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5977);
    // 0x351d50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x351d50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x351d54: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x351d54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x351d58: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351d5c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x351d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x351d60: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x351d60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x351d64: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x351d64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x351d68: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x351d6c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x351d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x351d70: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x351d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x351d74: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x351d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x351d78: 0xa60019  multu       $a1, $a2
    ctx->pc = 0x351d78u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x351d7c: 0x2810  mfhi        $a1
    ctx->pc = 0x351d7cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x351d80: 0x52b82  srl         $a1, $a1, 14
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
    // 0x351d84: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x351D84u;
    {
        const bool branch_taken_0x351d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351D84u;
            // 0x351d88: 0xac4595a0  sw          $a1, -0x6A60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940064), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d84) {
            ctx->pc = 0x351E3Cu;
            goto label_351e3c;
        }
    }
    ctx->pc = 0x351D8Cu;
    // 0x351d8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x351d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x351d90: 0xc043e52  jal         func_10F948
    ctx->pc = 0x351D90u;
    SET_GPR_U32(ctx, 31, 0x351D98u);
    ctx->pc = 0x351D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351D90u;
            // 0x351d94: 0x248454c8  addiu       $a0, $a0, 0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351D98u; }
        if (ctx->pc != 0x351D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351D98u; }
        if (ctx->pc != 0x351D98u) { return; }
    }
    ctx->pc = 0x351D98u;
label_351d98:
    // 0x351d98: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351d9c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x351d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x351da0: 0x904594f8  lbu         $a1, -0x6B08($v0)
    ctx->pc = 0x351da0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
    // 0x351da4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x351da8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351dac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x351dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351db0: 0x90429500  lbu         $v0, -0x6B00($v0)
    ctx->pc = 0x351db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x351db4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x351db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x351db8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x351DB8u;
    {
        const bool branch_taken_0x351db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351DB8u;
            // 0x351dbc: 0xac6495a4  sw          $a0, -0x6A5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940068), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351db8) {
            ctx->pc = 0x351DCCu;
            goto label_351dcc;
        }
    }
    ctx->pc = 0x351DC0u;
    // 0x351dc0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x351dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351dc4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351dc8: 0xac4395a8  sw          $v1, -0x6A58($v0)
    ctx->pc = 0x351dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940072), GPR_U32(ctx, 3));
label_351dcc:
    // 0x351dcc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351dd0: 0x904294a0  lbu         $v0, -0x6B60($v0)
    ctx->pc = 0x351dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939808)));
    // 0x351dd4: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x351dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x351dd8: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x351DD8u;
    {
        const bool branch_taken_0x351dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351dd8) {
            ctx->pc = 0x351DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351DD8u;
            // 0x351ddc: 0x28410063  slti        $at, $v0, 0x63 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x351E08u;
            goto label_351e08;
        }
    }
    ctx->pc = 0x351DE0u;
    // 0x351de0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x351de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x351de4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351de8: 0xa04394a0  sb          $v1, -0x6B60($v0)
    ctx->pc = 0x351de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939808), (uint8_t)GPR_U32(ctx, 3));
    // 0x351dec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351df0: 0x904494a0  lbu         $a0, -0x6B60($v0)
    ctx->pc = 0x351df0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939808)));
    // 0x351df4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351df8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351e00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x351E00u;
    {
        const bool branch_taken_0x351e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E00u;
            // 0x351e04: 0xac4395ac  sw          $v1, -0x6A54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940076), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e00) {
            ctx->pc = 0x351E28u;
            goto label_351e28;
        }
    }
    ctx->pc = 0x351E08u;
label_351e08:
    // 0x351e08: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x351E08u;
    {
        const bool branch_taken_0x351e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e08) {
            ctx->pc = 0x351E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351E08u;
            // 0x351e0c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351E20u;
            goto label_351e20;
        }
    }
    ctx->pc = 0x351E10u;
    // 0x351e10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x351e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x351e14: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e18: 0xa04394a0  sb          $v1, -0x6B60($v0)
    ctx->pc = 0x351e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939808), (uint8_t)GPR_U32(ctx, 3));
    // 0x351e1c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_351e20:
    // 0x351e20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e24: 0xac4395ac  sw          $v1, -0x6A54($v0)
    ctx->pc = 0x351e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940076), GPR_U32(ctx, 3));
label_351e28:
    // 0x351e28: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x351e2c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e30: 0x906394a0  lbu         $v1, -0x6B60($v1)
    ctx->pc = 0x351e30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939808)));
    // 0x351e34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x351E34u;
    {
        const bool branch_taken_0x351e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E34u;
            // 0x351e38: 0xa0439498  sb          $v1, -0x6B68($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939800), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e34) {
            ctx->pc = 0x351EA8u;
            goto label_351ea8;
        }
    }
    ctx->pc = 0x351E3Cu;
label_351e3c:
    // 0x351e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351e40: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x351E40u;
    {
        const bool branch_taken_0x351e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x351e40) {
            ctx->pc = 0x351E94u;
            goto label_351e94;
        }
    }
    ctx->pc = 0x351E48u;
    // 0x351e48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x351e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x351e4c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x351E4Cu;
    SET_GPR_U32(ctx, 31, 0x351E54u);
    ctx->pc = 0x351E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351E4Cu;
            // 0x351e50: 0x248454d8  addiu       $a0, $a0, 0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351E54u; }
        if (ctx->pc != 0x351E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351E54u; }
        if (ctx->pc != 0x351E54u) { return; }
    }
    ctx->pc = 0x351E54u;
label_351e54:
    // 0x351e54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e58: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x351e5c: 0x904594f8  lbu         $a1, -0x6B08($v0)
    ctx->pc = 0x351e5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
    // 0x351e60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e64: 0x52023  negu        $a0, $a1
    ctx->pc = 0x351e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x351e68: 0x90429500  lbu         $v0, -0x6B00($v0)
    ctx->pc = 0x351e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x351e6c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x351e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x351e70: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x351E70u;
    {
        const bool branch_taken_0x351e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E70u;
            // 0x351e74: 0xac6495a4  sw          $a0, -0x6A5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940068), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e70) {
            ctx->pc = 0x351E88u;
            goto label_351e88;
        }
    }
    ctx->pc = 0x351E78u;
    // 0x351e78: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x351e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x351e7c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e80: 0x31823  negu        $v1, $v1
    ctx->pc = 0x351e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x351e84: 0xac4395a8  sw          $v1, -0x6A58($v0)
    ctx->pc = 0x351e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940072), GPR_U32(ctx, 3));
label_351e88:
    // 0x351e88: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351e8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x351E8Cu;
    {
        const bool branch_taken_0x351e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351E8Cu;
            // 0x351e90: 0xa04094a0  sb          $zero, -0x6B60($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939808), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e8c) {
            ctx->pc = 0x351EA8u;
            goto label_351ea8;
        }
    }
    ctx->pc = 0x351E94u;
label_351e94:
    // 0x351e94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x351e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x351e98: 0xc043e52  jal         func_10F948
    ctx->pc = 0x351E98u;
    SET_GPR_U32(ctx, 31, 0x351EA0u);
    ctx->pc = 0x351E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351E98u;
            // 0x351e9c: 0x248454e8  addiu       $a0, $a0, 0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EA0u; }
        if (ctx->pc != 0x351EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EA0u; }
        if (ctx->pc != 0x351EA0u) { return; }
    }
    ctx->pc = 0x351EA0u;
label_351ea0:
    // 0x351ea0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351ea4: 0xa0409498  sb          $zero, -0x6B68($v0)
    ctx->pc = 0x351ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939800), (uint8_t)GPR_U32(ctx, 0));
label_351ea8:
    // 0x351ea8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x351eac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351eb0: 0xc0bb32c  jal         func_2ECCB0
    ctx->pc = 0x351EB0u;
    SET_GPR_U32(ctx, 31, 0x351EB8u);
    ctx->pc = 0x351EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351EB0u;
            // 0x351eb4: 0xac439478  sw          $v1, -0x6B88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECCB0u;
    if (runtime->hasFunction(0x2ECCB0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EB8u; }
        if (ctx->pc != 0x351EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECCB0_0x2eccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EB8u; }
        if (ctx->pc != 0x351EB8u) { return; }
    }
    ctx->pc = 0x351EB8u;
label_351eb8:
    // 0x351eb8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351ebc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351EBCu;
    SET_GPR_U32(ctx, 31, 0x351EC4u);
    ctx->pc = 0x351EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351EBCu;
            // 0x351ec0: 0x24841ee0  addiu       $a0, $a0, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EC4u; }
        if (ctx->pc != 0x351EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351EC4u; }
        if (ctx->pc != 0x351EC4u) { return; }
    }
    ctx->pc = 0x351EC4u;
label_351ec4:
    // 0x351ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x351ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351ECCu;
            // 0x351ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351ED4u;
    // 0x351ed4: 0x0  nop
    ctx->pc = 0x351ed4u;
    // NOP
    // 0x351ed8: 0x0  nop
    ctx->pc = 0x351ed8u;
    // NOP
    // 0x351edc: 0x0  nop
    ctx->pc = 0x351edcu;
    // NOP
label_351ee0:
    // 0x351ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351ee4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x351ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x351ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351eec: 0x8c4440a0  lw          $a0, 0x40A0($v0)
    ctx->pc = 0x351eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16544)));
    // 0x351ef0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x351ef4: 0x8c4540a8  lw          $a1, 0x40A8($v0)
    ctx->pc = 0x351ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    // 0x351ef8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x351ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x351efc: 0xc089318  jal         func_224C60
    ctx->pc = 0x351EFCu;
    SET_GPR_U32(ctx, 31, 0x351F04u);
    ctx->pc = 0x351F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351EFCu;
            // 0x351f00: 0x8c4641e0  lw          $a2, 0x41E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224C60u;
    if (runtime->hasFunction(0x224C60u)) {
        auto targetFn = runtime->lookupFunction(0x224C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F04u; }
        if (ctx->pc != 0x351F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224C60_0x224c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F04u; }
        if (ctx->pc != 0x351F04u) { return; }
    }
    ctx->pc = 0x351F04u;
label_351f04:
    // 0x351f04: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351f08: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351F08u;
    SET_GPR_U32(ctx, 31, 0x351F10u);
    ctx->pc = 0x351F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351F08u;
            // 0x351f0c: 0x24841f20  addiu       $a0, $a0, 0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F10u; }
        if (ctx->pc != 0x351F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F10u; }
        if (ctx->pc != 0x351F10u) { return; }
    }
    ctx->pc = 0x351F10u;
label_351f10:
    // 0x351f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351f14: 0x3e00008  jr          $ra
    ctx->pc = 0x351F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351F14u;
            // 0x351f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351F1Cu;
    // 0x351f1c: 0x0  nop
    ctx->pc = 0x351f1cu;
    // NOP
label_351f20:
    // 0x351f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351f28: 0xc0d1810  jal         func_346040
    ctx->pc = 0x351F28u;
    SET_GPR_U32(ctx, 31, 0x351F30u);
    ctx->pc = 0x346040u;
    if (runtime->hasFunction(0x346040u)) {
        auto targetFn = runtime->lookupFunction(0x346040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F30u; }
        if (ctx->pc != 0x351F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346040_0x346040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F30u; }
        if (ctx->pc != 0x351F30u) { return; }
    }
    ctx->pc = 0x351F30u;
label_351f30:
    // 0x351f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351f34: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x351F34u;
    {
        const bool branch_taken_0x351f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x351f34) {
            ctx->pc = 0x351F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351F34u;
            // 0x351f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351F7Cu;
            goto label_351f7c;
        }
    }
    ctx->pc = 0x351F3Cu;
    // 0x351f3c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x351f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x351f40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x351f44: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x351f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x351f48: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351f4c: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x351f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x351f50: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x351f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x351f54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x351f58: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x351f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x351f5c: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x351f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x351f60: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x351f64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x351f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x351f68: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351f6c: 0x0  nop
    ctx->pc = 0x351f6cu;
    // NOP
    // 0x351f70: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351F70u;
    SET_GPR_U32(ctx, 31, 0x351F78u);
    ctx->pc = 0x351F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351F70u;
            // 0x351f74: 0x2484ddd0  addiu       $a0, $a0, -0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F78u; }
        if (ctx->pc != 0x351F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351F78u; }
        if (ctx->pc != 0x351F78u) { return; }
    }
    ctx->pc = 0x351F78u;
label_351f78:
    // 0x351f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351f7c:
    // 0x351f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x351F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351F7Cu;
            // 0x351f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351F84u;
    // 0x351f84: 0x0  nop
    ctx->pc = 0x351f84u;
    // NOP
    // 0x351f88: 0x0  nop
    ctx->pc = 0x351f88u;
    // NOP
    // 0x351f8c: 0x0  nop
    ctx->pc = 0x351f8cu;
    // NOP
    ctx->pc = 0x351f90u;
}
