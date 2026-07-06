#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AB80
// Address: 0x14ab80 - 0x14ac70
void sub_0014AB80_0x14ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AB80_0x14ab80");
#endif

    switch (ctx->pc) {
        case 0x14ac40u: goto label_14ac40;
        case 0x14ac50u: goto label_14ac50;
        default: break;
    }

    ctx->pc = 0x14ab80u;

    // 0x14ab80: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x14ab84: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x14ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14ab88: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14ab8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ab8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ab90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ab90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ab94: 0x0  nop
    ctx->pc = 0x14ab94u;
    // NOP
    // 0x14ab98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14ab98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x14ab9c: 0x0  nop
    ctx->pc = 0x14ab9cu;
    // NOP
    // 0x14aba0: 0x0  nop
    ctx->pc = 0x14aba0u;
    // NOP
    // 0x14aba4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABA4u;
    {
        const bool branch_taken_0x14aba4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x14aba4) {
            ctx->pc = 0x14ABB8u;
            goto label_14abb8;
        }
    }
    ctx->pc = 0x14ABACu;
    // 0x14abac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14abacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14abb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14ABB0u;
    {
        const bool branch_taken_0x14abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABB0u;
            // 0x14abb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abb0) {
            ctx->pc = 0x14ABD4u;
            goto label_14abd4;
        }
    }
    ctx->pc = 0x14ABB8u;
label_14abb8:
    // 0x14abb8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x14abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x14abbc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14abc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14abc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14abc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14abc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14abc8: 0x0  nop
    ctx->pc = 0x14abc8u;
    // NOP
    // 0x14abcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14abccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14abd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14abd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14abd4:
    // 0x14abd4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14abd8: 0x9043b26b  lbu         $v1, -0x4D95($v0)
    ctx->pc = 0x14abd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947435)));
    // 0x14abdc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x14abdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14abe0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14abe4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14abe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x14abe8: 0x2442e0e0  addiu       $v0, $v0, -0x1F20
    ctx->pc = 0x14abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x14abec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14abecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14abf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14abf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14abf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14abfc: 0x0  nop
    ctx->pc = 0x14abfcu;
    // NOP
    // 0x14ac00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14ac00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14ac04: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14ac04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14ac08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ac08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ac0c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC0Cu;
    {
        const bool branch_taken_0x14ac0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ac0c) {
            ctx->pc = 0x14AC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC0Cu;
            // 0x14ac10: 0x3c024479  lui         $v0, 0x4479 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AC1Cu;
            goto label_14ac1c;
        }
    }
    ctx->pc = 0x14AC14u;
    // 0x14ac14: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14ac14u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14ac18: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
label_14ac1c:
    // 0x14ac1c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14ac20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ac20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ac24: 0x0  nop
    ctx->pc = 0x14ac24u;
    // NOP
    // 0x14ac28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ac28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ac2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ac2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ac30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ac30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ac34: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AC3Cu;
    // 0x14ac3c: 0x0  nop
    ctx->pc = 0x14ac3cu;
    // NOP
label_14ac40:
    // 0x14ac40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ac44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ac48: 0xc06cfe4  jal         func_1B3F90
    ctx->pc = 0x14AC48u;
    SET_GPR_U32(ctx, 31, 0x14AC50u);
    ctx->pc = 0x14AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC48u;
            // 0x14ac4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F90u;
    if (runtime->hasFunction(0x1B3F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC50u; }
        if (ctx->pc != 0x14AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3F90_0x1b3f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC50u; }
        if (ctx->pc != 0x14AC50u) { return; }
    }
    ctx->pc = 0x14AC50u;
label_14ac50:
    // 0x14ac50: 0xf  sync
    ctx->pc = 0x14ac50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x14ac54: 0x42000038  ei
    ctx->pc = 0x14ac54u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
    // 0x14ac58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC5Cu;
            // 0x14ac60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AC64u;
    // 0x14ac64: 0x0  nop
    ctx->pc = 0x14ac64u;
    // NOP
    // 0x14ac68: 0x0  nop
    ctx->pc = 0x14ac68u;
    // NOP
    // 0x14ac6c: 0x0  nop
    ctx->pc = 0x14ac6cu;
    // NOP
    ctx->pc = 0x14ac70u;
}
