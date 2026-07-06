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

// Function: sub_0018C1F0
// Address: 0x18c1f0 - 0x18c2d0
void sub_0018C1F0_0x18c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C1F0_0x18c1f0");
#endif

    switch (ctx->pc) {
        case 0x18c244u: goto label_18c244;
        case 0x18c278u: goto label_18c278;
        default: break;
    }

    ctx->pc = 0x18c1f0u;

    // 0x18c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c1f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c1fc: 0xc4404270  lwc1        $f0, 0x4270($v0)
    ctx->pc = 0x18c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c200: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c204: 0xc4424274  lwc1        $f2, 0x4274($v0)
    ctx->pc = 0x18c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c208: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18c20c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c210: 0xc4414278  lwc1        $f1, 0x4278($v0)
    ctx->pc = 0x18c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c214: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x18c214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18c218: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c21c: 0xc440427c  lwc1        $f0, 0x427C($v0)
    ctx->pc = 0x18c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c220: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18c220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18c224: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c228: 0xc4414280  lwc1        $f1, 0x4280($v0)
    ctx->pc = 0x18c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c22c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x18c22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18c230: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18c234: 0xc4404284  lwc1        $f0, 0x4284($v0)
    ctx->pc = 0x18c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c238: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x18c238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18c23c: 0xc062884  jal         func_18A210
    ctx->pc = 0x18C23Cu;
    SET_GPR_U32(ctx, 31, 0x18C244u);
    ctx->pc = 0x18C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C23Cu;
    // 0x18c240: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A210u, 0x18C23Cu, 0x18C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C244u;
label_18c244:
    // 0x18c244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c248: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x18c248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x18c24c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18c24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c250: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18c254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c258: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18c258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c25c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c260: 0x0  nop
    ctx->pc = 0x18c260u;
    // NOP
    // 0x18c264: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18c264u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x18c268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c270: 0x0  nop
    ctx->pc = 0x18c270u;
    // NOP
    // 0x18c274: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18c274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18c278:
    // 0x18c278: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c280: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18C280u;
    {
        const bool branch_taken_0x18c280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C280u;
        // 0x18c284: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c280) {
            ctx->pc = 0x18C28Cu;
            goto label_18c28c;
        }
    }
    ctx->pc = 0x18C288u;
    // 0x18c288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c28c:
    // 0x18c28c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18c290: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C290u;
    {
        const bool branch_taken_0x18c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c290) {
            ctx->pc = 0x18C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C290u;
            // 0x18c294: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C2A8u;
            goto label_18c2a8;
        }
    }
    ctx->pc = 0x18C298u;
    // 0x18c298: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x18c298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18c29c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18c2a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C2A0u;
    {
        const bool branch_taken_0x18c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2A0u;
        // 0x18c2a4: 0xc4400014  lwc1        $f0, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2a0) {
            ctx->pc = 0x18C2BCu;
            goto label_18c2bc;
        }
    }
    ctx->pc = 0x18C2A8u;
label_18c2a8:
    // 0x18c2a8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x18c2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18c2ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18C2ACu;
    {
        const bool branch_taken_0x18c2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2ACu;
        // 0x18c2b0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2ac) {
            ctx->pc = 0x18C278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c278;
        }
    }
    ctx->pc = 0x18C2B4u;
    // 0x18c2b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c2bc:
    // 0x18c2bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2C0u;
        // 0x18c2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C2C8u;
    // 0x18c2c8: 0x0  nop
    ctx->pc = 0x18c2c8u;
    // NOP
    // 0x18c2cc: 0x0  nop
    ctx->pc = 0x18c2ccu;
    // NOP
    if (ctx->pc == 0x18c2ccu) { ctx->pc = 0x18c2d0u; }
}
