#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AA00
// Address: 0x14aa00 - 0x14aaf0
void sub_0014AA00_0x14aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA00_0x14aa00");
#endif

    ctx->pc = 0x14aa00u;

    // 0x14aa00: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x14aa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14aa04: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x14aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x14aa08: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AA08u;
    {
        const bool branch_taken_0x14aa08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa08) {
            ctx->pc = 0x14AA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA08u;
            // 0x14aa0c: 0x640400dc  daddiu      $a0, $zero, 0xDC (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)220);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA30u;
            goto label_14aa30;
        }
    }
    ctx->pc = 0x14AA10u;
    // 0x14aa10: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x14aa14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AA14u;
    {
        const bool branch_taken_0x14aa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa14) {
            ctx->pc = 0x14AA2Cu;
            goto label_14aa2c;
        }
    }
    ctx->pc = 0x14AA1Cu;
    // 0x14aa1c: 0x2462feee  addiu       $v0, $v1, -0x112
    ctx->pc = 0x14aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967022));
    // 0x14aa20: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14aa20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14aa24: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AA24u;
    {
        const bool branch_taken_0x14aa24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa24) {
            ctx->pc = 0x14AA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA24u;
            // 0x14aa28: 0x640400e6  daddiu      $a0, $zero, 0xE6 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)230);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA30u;
            goto label_14aa30;
        }
    }
    ctx->pc = 0x14AA2Cu;
label_14aa2c:
    // 0x14aa2c: 0x640400dc  daddiu      $a0, $zero, 0xDC
    ctx->pc = 0x14aa2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)220);
label_14aa30:
    // 0x14aa30: 0x3c034479  lui         $v1, 0x4479
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17529 << 16));
    // 0x14aa34: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14aa38: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x14aa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x14aa3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14aa3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14aa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa44: 0x0  nop
    ctx->pc = 0x14aa44u;
    // NOP
    // 0x14aa48: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14aa48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x14aa4c: 0x0  nop
    ctx->pc = 0x14aa4cu;
    // NOP
    // 0x14aa50: 0x0  nop
    ctx->pc = 0x14aa50u;
    // NOP
    // 0x14aa54: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AA54u;
    {
        const bool branch_taken_0x14aa54 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x14aa54) {
            ctx->pc = 0x14AA68u;
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14AA5Cu;
    // 0x14aa5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14aa5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14AA60u;
    {
        const bool branch_taken_0x14aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA60u;
        // 0x14aa64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa60) {
            ctx->pc = 0x14AA84u;
            goto label_14aa84;
        }
    }
    ctx->pc = 0x14AA68u;
label_14aa68:
    // 0x14aa68: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x14aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x14aa6c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14aa70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14aa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14aa74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14aa74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa78: 0x0  nop
    ctx->pc = 0x14aa78u;
    // NOP
    // 0x14aa7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14aa7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14aa80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14aa80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14aa84:
    // 0x14aa84: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14aa88: 0x9043b26b  lbu         $v1, -0x4D95($v0)
    ctx->pc = 0x14aa88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947435)));
    // 0x14aa8c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x14aa8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14aa90: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14aa94: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14aa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x14aa98: 0x2442e0e0  addiu       $v0, $v0, -0x1F20
    ctx->pc = 0x14aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x14aa9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14aaa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14aaa4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aaa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14aaa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aaac: 0x0  nop
    ctx->pc = 0x14aaacu;
    // NOP
    // 0x14aab0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14aab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14aab4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14aab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14aab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14aab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14aabc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14AABCu;
    {
        const bool branch_taken_0x14aabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14aabc) {
            ctx->pc = 0x14AAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AABCu;
            // 0x14aac0: 0x3c024479  lui         $v0, 0x4479 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AAC4u;
    // 0x14aac4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14aac4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14aac8: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
label_14aacc:
    // 0x14aacc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x14aaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14aad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14aad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aad4: 0x0  nop
    ctx->pc = 0x14aad4u;
    // NOP
    // 0x14aad8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14aad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14aadc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14aadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14aae0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14aae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14aae4: 0x3e00008  jr          $ra
    ctx->pc = 0x14AAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AAECu;
    // 0x14aaec: 0x0  nop
    ctx->pc = 0x14aaecu;
    // NOP
}
