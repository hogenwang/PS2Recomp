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

// Function: sub_00152E00
// Address: 0x152e00 - 0x152ee0
void sub_00152E00_0x152e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152E00_0x152e00");
#endif

    switch (ctx->pc) {
        case 0x152e10u: goto label_152e10;
        case 0x152e48u: goto label_152e48;
        default: break;
    }

    ctx->pc = 0x152e00u;

    // 0x152e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152e08: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152E08u;
    SET_GPR_U32(ctx, 31, 0x152E10u);
    ctx->pc = 0x152E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E08u;
    // 0x152e0c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x152E08u, 0x152E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E10u;
label_152e10:
    // 0x152e10: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x152e10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152e14: 0x24490002  addiu       $t1, $v0, 0x2
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x152e18: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152e1c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152e20: 0xa064f120  sb          $a0, -0xEE0($v1)
    ctx->pc = 0x152e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963488), (uint8_t)GPR_U32(ctx, 4));
    // 0x152e24: 0x9042f120  lbu         $v0, -0xEE0($v0)
    ctx->pc = 0x152e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963488)));
    // 0x152e28: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x152E28u;
    {
        const bool branch_taken_0x152e28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x152E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E28u;
        // 0x152e2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e28) {
            ctx->pc = 0x152ED0u;
            goto label_152ed0;
        }
    }
    ctx->pc = 0x152E30u;
    // 0x152e30: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x152e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x152e34: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x152e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x152e38: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x152e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x152e3c: 0x24e7f130  addiu       $a3, $a3, -0xED0
    ctx->pc = 0x152e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963504));
    // 0x152e40: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x152e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x152e44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152e48:
    // 0x152e48: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x152e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x152e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x152e50: 0x25260008  addiu       $a2, $t1, 0x8
    ctx->pc = 0x152e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x152e54: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x152e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152e58: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x152e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x152e5c: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x152e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e60: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x152e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x152e64: 0x95240008  lhu         $a0, 0x8($t1)
    ctx->pc = 0x152e64u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x152e68: 0x30857fff  andi        $a1, $a0, 0x7FFF
    ctx->pc = 0x152e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x152e6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x152e6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152e70: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x152e74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152e78: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x152e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x152e7c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x152e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x152e80: 0xa0e40016  sb          $a0, 0x16($a3)
    ctx->pc = 0x152e80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x152e84: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x152e84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x152e88: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x152e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152e8c: 0x24c90004  addiu       $t1, $a2, 0x4
    ctx->pc = 0x152e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x152e90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152e94: 0x0  nop
    ctx->pc = 0x152e94u;
    // NOP
    // 0x152e98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152e9c: 0x52203  sra         $a0, $a1, 8
    ctx->pc = 0x152e9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 8));
    // 0x152ea0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x152ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x152ea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x152ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152ea8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x152ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x152eac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152eb0: 0x0  nop
    ctx->pc = 0x152eb0u;
    // NOP
    // 0x152eb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152eb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x152eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152ebc: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x152ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x152ec0: 0xa0e00014  sb          $zero, 0x14($a3)
    ctx->pc = 0x152ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x152ec4: 0xa0e00015  sb          $zero, 0x15($a3)
    ctx->pc = 0x152ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x152ec8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x152EC8u;
    {
        const bool branch_taken_0x152ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EC8u;
        // 0x152ecc: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ec8) {
            ctx->pc = 0x152E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152e48;
        }
    }
    ctx->pc = 0x152ED0u;
label_152ed0:
    // 0x152ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x152ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152ED8u;
        // 0x152edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152EE0u;
}
