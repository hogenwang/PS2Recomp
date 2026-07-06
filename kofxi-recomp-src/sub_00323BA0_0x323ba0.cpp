#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323BA0
// Address: 0x323ba0 - 0x323c60
void sub_00323BA0_0x323ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323BA0_0x323ba0");
#endif

    ctx->pc = 0x323ba0u;

    // 0x323ba0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x323ba0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323ba4: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x323ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x323ba8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x323ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x323bac: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x323bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x323bb0: 0x5443c  dsll32      $t0, $a1, 16
    ctx->pc = 0x323bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 16));
    // 0x323bb4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x323bb4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x323bb8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x323bb8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x323bbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x323bbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x323bc0: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x323bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x323bc4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x323bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x323bc8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x323bc8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x323bcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x323bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323bd0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x323bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x323bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323bd8: 0x46050103  div.s       $f4, $f0, $f5
    ctx->pc = 0x323bd8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[5];
    // 0x323bdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x323bdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323be0: 0x0  nop
    ctx->pc = 0x323be0u;
    // NOP
    // 0x323be4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x323be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x323be8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x323be8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323bec: 0x0  nop
    ctx->pc = 0x323becu;
    // NOP
    // 0x323bf0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x323bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x323bf4: 0x46030883  div.s       $f2, $f1, $f3
    ctx->pc = 0x323bf4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[3];
    // 0x323bf8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x323bf8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323bfc: 0x0  nop
    ctx->pc = 0x323bfcu;
    // NOP
    // 0x323c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323c04: 0x46050043  div.s       $f1, $f0, $f5
    ctx->pc = 0x323c04u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[5];
    // 0x323c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x323c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323c0c: 0x0  nop
    ctx->pc = 0x323c0cu;
    // NOP
    // 0x323c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323c14: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x323c14u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x323c18: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x323c18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x323c1c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x323c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x323c20: 0xac8b0014  sw          $t3, 0x14($a0)
    ctx->pc = 0x323c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 11));
    // 0x323c24: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x323c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x323c28: 0xe4840028  swc1        $f4, 0x28($a0)
    ctx->pc = 0x323c28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x323c2c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x323c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x323c30: 0xac8b0030  sw          $t3, 0x30($a0)
    ctx->pc = 0x323c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 11));
    // 0x323c34: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x323c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x323c38: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x323c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x323c3c: 0xe4820048  swc1        $f2, 0x48($a0)
    ctx->pc = 0x323c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x323c40: 0xac8b004c  sw          $t3, 0x4C($a0)
    ctx->pc = 0x323c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 11));
    // 0x323c44: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x323c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x323c48: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x323c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x323c4c: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x323c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x323c50: 0xac8b0068  sw          $t3, 0x68($a0)
    ctx->pc = 0x323c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 11));
    // 0x323c54: 0x3e00008  jr          $ra
    ctx->pc = 0x323C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323C54u;
            // 0x323c58: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323C5Cu;
    // 0x323c5c: 0x0  nop
    ctx->pc = 0x323c5cu;
    // NOP
    ctx->pc = 0x323c60u;
}
