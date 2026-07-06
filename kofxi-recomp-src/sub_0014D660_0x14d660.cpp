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

// Function: sub_0014D660
// Address: 0x14d660 - 0x14d700
void sub_0014D660_0x14d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D660_0x14d660");
#endif

    ctx->pc = 0x14d660u;

    // 0x14d660: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x14d664: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14d668: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x14d66c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x14d66cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d670: 0x9442f100  lhu         $v0, -0xF00($v0)
    ctx->pc = 0x14d670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963456)));
    // 0x14d674: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x14d678: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d67c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d680: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D680u;
    {
        const bool branch_taken_0x14d680 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D680u;
        // 0x14d684: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d680) {
            ctx->pc = 0x14D694u;
            goto label_14d694;
        }
    }
    ctx->pc = 0x14D688u;
    // 0x14d688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D68Cu;
    {
        const bool branch_taken_0x14d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D68Cu;
        // 0x14d690: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d68c) {
            ctx->pc = 0x14D6B0u;
            goto label_14d6b0;
        }
    }
    ctx->pc = 0x14D694u;
label_14d694:
    // 0x14d694: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14d698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14d69c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d6a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d6a4: 0x0  nop
    ctx->pc = 0x14d6a4u;
    // NOP
    // 0x14d6a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d6ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14d6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14d6b0:
    // 0x14d6b0: 0x0  nop
    ctx->pc = 0x14d6b0u;
    // NOP
    // 0x14d6b4: 0x0  nop
    ctx->pc = 0x14d6b4u;
    // NOP
    // 0x14d6b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14d6b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x14d6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d6c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d6c4: 0x0  nop
    ctx->pc = 0x14d6c4u;
    // NOP
    // 0x14d6c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14d6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d6cc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14D6CCu;
    {
        const bool branch_taken_0x14d6cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d6cc) {
            ctx->pc = 0x14D6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D6CCu;
            // 0x14d6d0: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D6DCu;
            goto label_14d6dc;
        }
    }
    ctx->pc = 0x14D6D4u;
    // 0x14d6d4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x14d6d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x14d6d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_14d6dc:
    // 0x14d6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d6e0: 0x0  nop
    ctx->pc = 0x14d6e0u;
    // NOP
    // 0x14d6e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14d6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d6e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14D6E8u;
    {
        const bool branch_taken_0x14d6e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d6e8) {
            ctx->pc = 0x14D6F4u;
            goto label_14d6f4;
        }
    }
    ctx->pc = 0x14D6F0u;
    // 0x14d6f0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x14d6f0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_14d6f4:
    // 0x14d6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D6FCu;
    // 0x14d6fc: 0x0  nop
    ctx->pc = 0x14d6fcu;
    // NOP
}
