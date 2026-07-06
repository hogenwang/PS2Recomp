#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E280
// Address: 0x13e280 - 0x13e340
void sub_0013E280_0x13e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E280_0x13e280");
#endif

    switch (ctx->pc) {
        case 0x13e2a4u: goto label_13e2a4;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2ecu: goto label_13e2ec;
        default: break;
    }

    ctx->pc = 0x13e280u;

    // 0x13e280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e284: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13e284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e28c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e29c: 0xc063730  jal         func_18DCC0
    ctx->pc = 0x13E29Cu;
    SET_GPR_U32(ctx, 31, 0x13E2A4u);
    ctx->pc = 0x13E2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E29Cu;
            // 0x13e2a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DCC0u;
    if (runtime->hasFunction(0x18DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2A4u; }
        if (ctx->pc != 0x13E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCC0_0x18dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2A4u; }
        if (ctx->pc != 0x13E2A4u) { return; }
    }
    ctx->pc = 0x13E2A4u;
label_13e2a4:
    // 0x13e2a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E2A4u;
    {
        const bool branch_taken_0x13e2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2a4) {
            ctx->pc = 0x13E2B4u;
            goto label_13e2b4;
        }
    }
    ctx->pc = 0x13E2ACu;
    // 0x13e2ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x13E2ACu;
    {
        const bool branch_taken_0x13e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2ACu;
            // 0x13e2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2ac) {
            ctx->pc = 0x13E320u;
            goto label_13e320;
        }
    }
    ctx->pc = 0x13E2B4u;
label_13e2b4:
    // 0x13e2b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13e2b8: 0x90635cc0  lbu         $v1, 0x5CC0($v1)
    ctx->pc = 0x13e2b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23744)));
    // 0x13e2bc: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x13e2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13e2c0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E2C0u;
    SET_GPR_U32(ctx, 31, 0x13E2C8u);
    ctx->pc = 0x13E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2C0u;
            // 0x13e2c4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2C8u; }
        if (ctx->pc != 0x13E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2C8u; }
        if (ctx->pc != 0x13E2C8u) { return; }
    }
    ctx->pc = 0x13E2C8u;
label_13e2c8:
    // 0x13e2c8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x13e2cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e2d4: 0x0  nop
    ctx->pc = 0x13e2d4u;
    // NOP
    // 0x13e2d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e2dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e2dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e2e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13e2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13e2e4: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x13E2E4u;
    {
        const bool branch_taken_0x13e2e4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x13E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2E4u;
            // 0x13e2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2e4) {
            ctx->pc = 0x13E310u;
            goto label_13e310;
        }
    }
    ctx->pc = 0x13E2ECu;
label_13e2ec:
    // 0x13e2ec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13e2ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e2f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13e2f4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x13e2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e2f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E2F8u;
    {
        const bool branch_taken_0x13e2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2f8) {
            ctx->pc = 0x13E310u;
            goto label_13e310;
        }
    }
    ctx->pc = 0x13E300u;
    // 0x13e300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e304: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x13e304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x13e308: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13E308u;
    {
        const bool branch_taken_0x13e308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E308u;
            // 0x13e30c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e308) {
            ctx->pc = 0x13E2ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13e2ec;
        }
    }
    ctx->pc = 0x13E310u;
label_13e310:
    // 0x13e310: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x13e310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x13e314: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E314u;
    {
        const bool branch_taken_0x13e314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e314) {
            ctx->pc = 0x13E320u;
            goto label_13e320;
        }
    }
    ctx->pc = 0x13E31Cu;
    // 0x13e31c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x13e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_13e320:
    // 0x13e320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e32c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E32Cu;
            // 0x13e330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E334u;
    // 0x13e334: 0x0  nop
    ctx->pc = 0x13e334u;
    // NOP
    // 0x13e338: 0x0  nop
    ctx->pc = 0x13e338u;
    // NOP
    // 0x13e33c: 0x0  nop
    ctx->pc = 0x13e33cu;
    // NOP
    ctx->pc = 0x13e340u;
}
