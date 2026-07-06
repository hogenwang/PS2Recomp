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

// Function: sub_0030BCC0
// Address: 0x30bcc0 - 0x30bdd0
void sub_0030BCC0_0x30bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BCC0_0x30bcc0");
#endif

    switch (ctx->pc) {
        case 0x30bd04u: goto label_30bd04;
        case 0x30bd74u: goto label_30bd74;
        case 0x30bd84u: goto label_30bd84;
        case 0x30bd94u: goto label_30bd94;
        default: break;
    }

    ctx->pc = 0x30bcc0u;

    // 0x30bcc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30bcc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x30bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x30bcc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30bccc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30bcd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30bcd4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30bcd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30bcdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30bcdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30bce4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30bce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30bcec: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x30bcecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcf0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30bcf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30bcf4: 0x8c910118  lw          $s1, 0x118($a0)
    ctx->pc = 0x30bcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x30bcf8: 0x8c900114  lw          $s0, 0x114($a0)
    ctx->pc = 0x30bcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x30bcfc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x30BCFCu;
    {
        const bool branch_taken_0x30bcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCFCu;
        // 0x30bd00: 0x2472ffff  addiu       $s2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcfc) {
            ctx->pc = 0x30BDA0u;
            goto label_30bda0;
        }
    }
    ctx->pc = 0x30BD04u;
label_30bd04:
    // 0x30bd04: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x30bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30bd08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30bd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bd10: 0x0  nop
    ctx->pc = 0x30bd10u;
    // NOP
    // 0x30bd14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30bd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30bd18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x30BD18u;
    {
        const bool branch_taken_0x30bd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30bd18) {
            ctx->pc = 0x30BD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BD18u;
            // 0x30bd1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BD30u;
            goto label_30bd30;
        }
    }
    ctx->pc = 0x30BD20u;
    // 0x30bd20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bd20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30bd24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30bd24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30bd28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BD28u;
    {
        const bool branch_taken_0x30bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD28u;
        // 0x30bd2c: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd28) {
            ctx->pc = 0x30BD48u;
            goto label_30bd48;
        }
    }
    ctx->pc = 0x30BD30u;
label_30bd30:
    // 0x30bd30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30bd34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bd34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30bd38: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x30bd38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30bd3c: 0x0  nop
    ctx->pc = 0x30bd3cu;
    // NOP
    // 0x30bd40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30bd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30bd44: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x30bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30bd48:
    // 0x30bd48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30bd4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30bd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30bd50: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x30bd50u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30bd54: 0x2153021  addu        $a2, $s0, $s5
    ctx->pc = 0x30bd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x30bd58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bd5c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x30bd5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x30bd60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30bd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd64: 0x0  nop
    ctx->pc = 0x30bd64u;
    // NOP
    // 0x30bd68: 0x0  nop
    ctx->pc = 0x30bd68u;
    // NOP
    // 0x30bd6c: 0xc040ce6  jal         func_103398
    ctx->pc = 0x30BD6Cu;
    SET_GPR_U32(ctx, 31, 0x30BD74u);
    ctx->pc = 0x30BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD6Cu;
    // 0x30bd70: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103398u, 0x30BD6Cu, 0x30BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD74u;
label_30bd74:
    // 0x30bd74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bd78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30bd78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30bd7c: 0xc040e78  jal         func_1039E0
    ctx->pc = 0x30BD7Cu;
    SET_GPR_U32(ctx, 31, 0x30BD84u);
    ctx->pc = 0x30BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD7Cu;
    // 0x30bd80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1039E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039E0u, 0x30BD7Cu, 0x30BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD84u;
label_30bd84:
    // 0x30bd84: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x30bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x30bd88: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30bd8c: 0xc040e2a  jal         func_1038A8
    ctx->pc = 0x30BD8Cu;
    SET_GPR_U32(ctx, 31, 0x30BD94u);
    ctx->pc = 0x30BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD8Cu;
    // 0x30bd90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038A8u, 0x30BD8Cu, 0x30BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BD94u;
label_30bd94:
    // 0x30bd94: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x30bd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd98: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x30BD98u;
    {
        const bool branch_taken_0x30bd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD98u;
        // 0x30bd9c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd98) {
            ctx->pc = 0x30BD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30bd04;
        }
    }
    ctx->pc = 0x30BDA0u;
label_30bda0:
    // 0x30bda0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x30bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30bda4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30bda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30bda8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30bdac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30bdacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bdb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30bdb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30bdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bdb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30bdb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bdbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30bdbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x30BDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDC0u;
        // 0x30bdc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BDC8u;
    // 0x30bdc8: 0x0  nop
    ctx->pc = 0x30bdc8u;
    // NOP
    // 0x30bdcc: 0x0  nop
    ctx->pc = 0x30bdccu;
    // NOP
}
