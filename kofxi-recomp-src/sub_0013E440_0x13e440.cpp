#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E440
// Address: 0x13e440 - 0x13e4f0
void sub_0013E440_0x13e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E440_0x13e440");
#endif

    switch (ctx->pc) {
        case 0x13e474u: goto label_13e474;
        case 0x13e4b4u: goto label_13e4b4;
        default: break;
    }

    ctx->pc = 0x13e440u;

    // 0x13e440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e450: 0x2a01001e  slti        $at, $s0, 0x1E
    ctx->pc = 0x13e450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x13e454: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E454u;
    {
        const bool branch_taken_0x13e454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e454) {
            ctx->pc = 0x13E458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E454u;
            // 0x13e458: 0x2a010024  slti        $at, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E464u;
            goto label_13e464;
        }
    }
    ctx->pc = 0x13E45Cu;
    // 0x13e45c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13E45Cu;
    {
        const bool branch_taken_0x13e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E45Cu;
            // 0x13e460: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e45c) {
            ctx->pc = 0x13E4DCu;
            goto label_13e4dc;
        }
    }
    ctx->pc = 0x13E464u;
label_13e464:
    // 0x13e464: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E464u;
    {
        const bool branch_taken_0x13e464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e464) {
            ctx->pc = 0x13E4ACu;
            goto label_13e4ac;
        }
    }
    ctx->pc = 0x13E46Cu;
    // 0x13e46c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E46Cu;
    SET_GPR_U32(ctx, 31, 0x13E474u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E474u; }
        if (ctx->pc != 0x13E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E474u; }
        if (ctx->pc != 0x13E474u) { return; }
    }
    ctx->pc = 0x13E474u;
label_13e474:
    // 0x13e474: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x13e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x13e478: 0x2603ffe2  addiu       $v1, $s0, -0x1E
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967266));
    // 0x13e47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e480: 0x0  nop
    ctx->pc = 0x13e480u;
    // NOP
    // 0x13e484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13e488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e490: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13e494: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e498: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13e498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13e49c: 0x0  nop
    ctx->pc = 0x13e49cu;
    // NOP
    // 0x13e4a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e4a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13E4A4u;
    {
        const bool branch_taken_0x13e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4A4u;
            // 0x13e4a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4a4) {
            ctx->pc = 0x13E4DCu;
            goto label_13e4dc;
        }
    }
    ctx->pc = 0x13E4ACu;
label_13e4ac:
    // 0x13e4ac: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E4ACu;
    SET_GPR_U32(ctx, 31, 0x13E4B4u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4B4u; }
        if (ctx->pc != 0x13E4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4B4u; }
        if (ctx->pc != 0x13E4B4u) { return; }
    }
    ctx->pc = 0x13E4B4u;
label_13e4b4:
    // 0x13e4b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x13e4b8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x13e4bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e4c0: 0x0  nop
    ctx->pc = 0x13e4c0u;
    // NOP
    // 0x13e4c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e4c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e4cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13e4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13e4d0: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E4D0u;
    {
        const bool branch_taken_0x13e4d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x13E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4D0u;
            // 0x13e4d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4d0) {
            ctx->pc = 0x13E4DCu;
            goto label_13e4dc;
        }
    }
    ctx->pc = 0x13E4D8u;
    // 0x13e4d8: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_13e4dc:
    // 0x13e4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4E4u;
            // 0x13e4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E4ECu;
    // 0x13e4ec: 0x0  nop
    ctx->pc = 0x13e4ecu;
    // NOP
    ctx->pc = 0x13e4f0u;
}
