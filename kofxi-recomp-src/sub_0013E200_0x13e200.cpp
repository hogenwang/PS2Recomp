#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E200
// Address: 0x13e200 - 0x13e280
void sub_0013E200_0x13e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E200_0x13e200");
#endif

    switch (ctx->pc) {
        case 0x13e21cu: goto label_13e21c;
        case 0x13e248u: goto label_13e248;
        default: break;
    }

    ctx->pc = 0x13e200u;

    // 0x13e200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e214: 0xc063730  jal         func_18DCC0
    ctx->pc = 0x13E214u;
    SET_GPR_U32(ctx, 31, 0x13E21Cu);
    ctx->pc = 0x13E218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E214u;
            // 0x13e218: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DCC0u;
    if (runtime->hasFunction(0x18DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E21Cu; }
        if (ctx->pc != 0x13E21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCC0_0x18dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E21Cu; }
        if (ctx->pc != 0x13E21Cu) { return; }
    }
    ctx->pc = 0x13E21Cu;
label_13e21c:
    // 0x13e21c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E21Cu;
    {
        const bool branch_taken_0x13e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e21c) {
            ctx->pc = 0x13E22Cu;
            goto label_13e22c;
        }
    }
    ctx->pc = 0x13E224u;
    // 0x13e224: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13E224u;
    {
        const bool branch_taken_0x13e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E224u;
            // 0x13e228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e224) {
            ctx->pc = 0x13E270u;
            goto label_13e270;
        }
    }
    ctx->pc = 0x13E22Cu;
label_13e22c:
    // 0x13e22c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13e230: 0x90645cc0  lbu         $a0, 0x5CC0($v1)
    ctx->pc = 0x13e230u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23744)));
    // 0x13e234: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x13e234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13e238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e23c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13e240: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E240u;
    SET_GPR_U32(ctx, 31, 0x13E248u);
    ctx->pc = 0x13E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E240u;
            // 0x13e244: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E248u; }
        if (ctx->pc != 0x13E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E248u; }
        if (ctx->pc != 0x13E248u) { return; }
    }
    ctx->pc = 0x13E248u;
label_13e248:
    // 0x13e248: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x13e24c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13e24cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e250: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13e250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e254: 0x0  nop
    ctx->pc = 0x13e254u;
    // NOP
    // 0x13e258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e25c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e25cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e260: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13e260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13e264: 0x0  nop
    ctx->pc = 0x13e264u;
    // NOP
    // 0x13e268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13e268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e26c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e270:
    // 0x13e270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e278: 0x3e00008  jr          $ra
    ctx->pc = 0x13E278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E278u;
            // 0x13e27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E280u;
    ctx->pc = 0x13e280u;
}
