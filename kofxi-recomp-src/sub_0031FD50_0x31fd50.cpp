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

// Function: sub_0031FD50
// Address: 0x31fd50 - 0x31fe00
void sub_0031FD50_0x31fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FD50_0x31fd50");
#endif

    switch (ctx->pc) {
        case 0x31fd68u: goto label_31fd68;
        case 0x31fd74u: goto label_31fd74;
        case 0x31fd90u: goto label_31fd90;
        case 0x31fde0u: goto label_31fde0;
        default: break;
    }

    ctx->pc = 0x31fd50u;

    // 0x31fd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31fd54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31fd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31fd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31fd5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fd60: 0xc062810  jal         func_18A040
    ctx->pc = 0x31FD60u;
    SET_GPR_U32(ctx, 31, 0x31FD68u);
    ctx->pc = 0x31FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD60u;
    // 0x31fd64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x31FD60u, 0x31FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD68u;
label_31fd68:
    // 0x31fd68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31fd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd6c: 0xc062810  jal         func_18A040
    ctx->pc = 0x31FD6Cu;
    SET_GPR_U32(ctx, 31, 0x31FD74u);
    ctx->pc = 0x31FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD6Cu;
    // 0x31fd70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x31FD6Cu, 0x31FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD74u;
label_31fd74:
    // 0x31fd74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31fd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x31fd78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fd7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x31fd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31fd80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31fd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31fd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fd88: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x31FD88u;
    SET_GPR_U32(ctx, 31, 0x31FD90u);
    ctx->pc = 0x31FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FD88u;
    // 0x31fd8c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x31FD88u, 0x31FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD90u;
label_31fd90:
    // 0x31fd90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31fd94: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fd98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31fd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fd9c: 0x0  nop
    ctx->pc = 0x31fd9cu;
    // NOP
    // 0x31fda0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31fda0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x31fda4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fda8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31fda8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31fdac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31fdacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31fdb0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31fdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31fdb4: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FDB4u;
    {
        const bool branch_taken_0x31fdb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fdb4) {
            ctx->pc = 0x31FDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FDB4u;
            // 0x31fdb8: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FDCCu;
            goto label_31fdcc;
        }
    }
    ctx->pc = 0x31FDBCu;
    // 0x31fdbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31fdc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31fdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31fdc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31FDC4u;
    {
        const bool branch_taken_0x31fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDC4u;
        // 0x31fdc8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdc4) {
            ctx->pc = 0x31FDD4u;
            goto label_31fdd4;
        }
    }
    ctx->pc = 0x31FDCCu;
label_31fdcc:
    // 0x31fdcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31fdd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31fdd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_31fdd4:
    // 0x31fdd4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x31fdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31fdd8: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x31FDD8u;
    SET_GPR_U32(ctx, 31, 0x31FDE0u);
    ctx->pc = 0x31FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDD8u;
    // 0x31fddc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x31FDD8u, 0x31FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDE0u;
label_31fde0:
    // 0x31fde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31fde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fde4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fde8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fdec: 0x3e00008  jr          $ra
    ctx->pc = 0x31FDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDECu;
        // 0x31fdf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FDF4u;
    // 0x31fdf4: 0x0  nop
    ctx->pc = 0x31fdf4u;
    // NOP
    // 0x31fdf8: 0x0  nop
    ctx->pc = 0x31fdf8u;
    // NOP
    // 0x31fdfc: 0x0  nop
    ctx->pc = 0x31fdfcu;
    // NOP
    if (ctx->pc == 0x31fdfcu) { ctx->pc = 0x31fe00u; }
}
