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

// Function: sub_00150BA0
// Address: 0x150ba0 - 0x150cc0
void sub_00150BA0_0x150ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150BA0_0x150ba0");
#endif

    ctx->pc = 0x150ba0u;

    // 0x150ba0: 0x50a00023  beql        $a1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x150BA0u;
    {
        const bool branch_taken_0x150ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ba0) {
            ctx->pc = 0x150BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150BA0u;
            // 0x150ba4: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C30u;
            goto label_150c30;
        }
    }
    ctx->pc = 0x150BA8u;
    // 0x150ba8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x150ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x150bac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150bb0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x150bb4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x150bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x150bb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x150bbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x150bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x150bc0: 0x2463f145  addiu       $v1, $v1, -0xEBB
    ctx->pc = 0x150bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963525));
    // 0x150bc4: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x150bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x150bc8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150bcc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x150bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x150bd0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x150bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150bd4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BD4u;
    {
        const bool branch_taken_0x150bd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x150bd4) {
            ctx->pc = 0x150BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150BD4u;
            // 0x150bd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150BE8u;
            goto label_150be8;
        }
    }
    ctx->pc = 0x150BDCu;
    // 0x150bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150be0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150BE0u;
    {
        const bool branch_taken_0x150be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BE0u;
        // 0x150be4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150be0) {
            ctx->pc = 0x150C00u;
            goto label_150c00;
        }
    }
    ctx->pc = 0x150BE8u;
label_150be8:
    // 0x150be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x150bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x150becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x150bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150bf4: 0x0  nop
    ctx->pc = 0x150bf4u;
    // NOP
    // 0x150bf8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x150bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x150bfc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x150bfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_150c00:
    // 0x150c00: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150c04: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x150c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150c08: 0x2463f140  addiu       $v1, $v1, -0xEC0
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x150c0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c10: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x150c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150c18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c1c: 0x0  nop
    ctx->pc = 0x150c1cu;
    // NOP
    // 0x150c20: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x150c20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x150c24: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x150c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x150c28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x150C28u;
    {
        const bool branch_taken_0x150c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C28u;
        // 0x150c2c: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c28) {
            ctx->pc = 0x150CB0u;
            goto label_150cb0;
        }
    }
    ctx->pc = 0x150C30u;
label_150c30:
    // 0x150c30: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150c34: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x150c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x150c38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x150c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x150c3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x150c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x150c40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x150c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x150c44: 0x2463f144  addiu       $v1, $v1, -0xEBC
    ctx->pc = 0x150c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963524));
    // 0x150c48: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x150c4c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c50: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x150c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x150c54: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x150c54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150c58: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150C58u;
    {
        const bool branch_taken_0x150c58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x150c58) {
            ctx->pc = 0x150C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150C58u;
            // 0x150c5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150C6Cu;
            goto label_150c6c;
        }
    }
    ctx->pc = 0x150C60u;
    // 0x150c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150C64u;
    {
        const bool branch_taken_0x150c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C64u;
        // 0x150c68: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c64) {
            ctx->pc = 0x150C84u;
            goto label_150c84;
        }
    }
    ctx->pc = 0x150C6Cu;
label_150c6c:
    // 0x150c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x150c70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x150c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x150c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c78: 0x0  nop
    ctx->pc = 0x150c78u;
    // NOP
    // 0x150c7c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x150c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x150c80: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x150c80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_150c84:
    // 0x150c84: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150c88: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x150c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150c8c: 0x2463f13c  addiu       $v1, $v1, -0xEC4
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963516));
    // 0x150c90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x150c94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x150c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ca0: 0x0  nop
    ctx->pc = 0x150ca0u;
    // NOP
    // 0x150ca4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x150ca4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x150ca8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x150ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x150cac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x150cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_150cb0:
    // 0x150cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x150CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150CB8u;
    // 0x150cb8: 0x0  nop
    ctx->pc = 0x150cb8u;
    // NOP
    // 0x150cbc: 0x0  nop
    ctx->pc = 0x150cbcu;
    // NOP
    if (ctx->pc == 0x150cbcu) { ctx->pc = 0x150cc0u; }
}
