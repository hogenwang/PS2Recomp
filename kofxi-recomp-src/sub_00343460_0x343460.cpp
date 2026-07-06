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

// Function: sub_00343460
// Address: 0x343460 - 0x343510
void sub_00343460_0x343460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343460_0x343460");
#endif

    switch (ctx->pc) {
        case 0x343500u: goto label_343500;
        default: break;
    }

    ctx->pc = 0x343460u;

    // 0x343460: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x343460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343464: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x343464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x343468: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34346c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34346cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x343470: 0xac434348  sw          $v1, 0x4348($v0)
    ctx->pc = 0x343470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17224), GPR_U32(ctx, 3));
    // 0x343474: 0x80558d4  j           func_156350
    ctx->pc = 0x343474u;
    ctx->pc = 0x343478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343474u;
    // 0x343478: 0x24843420  addiu       $a0, $a0, 0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x34347Cu;
    // 0x34347c: 0x0  nop
    ctx->pc = 0x34347cu;
    // NOP
    // 0x343480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343484: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34348c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34348cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343490: 0x8c654348  lw          $a1, 0x4348($v1)
    ctx->pc = 0x343490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x343494: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343498: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x343498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34349c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x34349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3434a0: 0xc462d9c0  lwc1        $f2, -0x2640($v1)
    ctx->pc = 0x3434a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3434a4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3434a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3434a8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3434A8u;
    {
        const bool branch_taken_0x3434a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3434ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434A8u;
        // 0x3434ac: 0xac854348  sw          $a1, 0x4348($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434a8) {
            ctx->pc = 0x3434DCu;
            goto label_3434dc;
        }
    }
    ctx->pc = 0x3434B0u;
    // 0x3434b0: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x3434b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x3434b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3434b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3434b8: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3434b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3434bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3434bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3434c0: 0x0  nop
    ctx->pc = 0x3434c0u;
    // NOP
    // 0x3434c4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3434c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3434c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3434c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3434cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3434CCu;
    {
        const bool branch_taken_0x3434cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3434D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434CCu;
        // 0x3434d0: 0xe460d9c0  swc1        $f0, -0x2640($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434cc) {
            ctx->pc = 0x3434DCu;
            goto label_3434dc;
        }
    }
    ctx->pc = 0x3434D4u;
    // 0x3434d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3434d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3434d8: 0xe461d9c0  swc1        $f1, -0x2640($v1)
    ctx->pc = 0x3434d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
label_3434dc:
    // 0x3434dc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3434dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3434e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3434e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3434e4: 0x5c600007  bgtzl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3434E4u;
    {
        const bool branch_taken_0x3434e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3434e4) {
            ctx->pc = 0x3434E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3434E4u;
            // 0x3434e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343504u;
            goto label_343504;
        }
    }
    ctx->pc = 0x3434ECu;
    // 0x3434ec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3434ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3434f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3434f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3434f4: 0x8c44f78c  lw          $a0, -0x874($v0)
    ctx->pc = 0x3434f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    // 0x3434f8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3434F8u;
    SET_GPR_U32(ctx, 31, 0x343500u);
    ctx->pc = 0x3434FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434F8u;
    // 0x3434fc: 0xac60d9c0  sw          $zero, -0x2640($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3434F8u, 0x343500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343500u;
label_343500:
    // 0x343500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343504:
    // 0x343504: 0x3e00008  jr          $ra
    ctx->pc = 0x343504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343504u;
        // 0x343508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34350Cu;
    // 0x34350c: 0x0  nop
    ctx->pc = 0x34350cu;
    // NOP
}
