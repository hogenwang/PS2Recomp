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

// Function: sub_00215360
// Address: 0x215360 - 0x215458
void sub_00215360_0x215360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215360_0x215360");
#endif

    switch (ctx->pc) {
        case 0x21537cu: goto label_21537c;
        case 0x2153ccu: goto label_2153cc;
        case 0x2153dcu: goto label_2153dc;
        case 0x21542cu: goto label_21542c;
        case 0x215434u: goto label_215434;
        default: break;
    }

    ctx->pc = 0x215360u;

label_215360:
    // 0x215360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21536c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215370: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215374: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215374u;
    SET_GPR_U32(ctx, 31, 0x21537Cu);
    ctx->pc = 0x215378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215374u;
    // 0x215378: 0x24840a58  addiu       $a0, $a0, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x215374u, 0x21537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21537Cu;
label_21537c:
    // 0x21537c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21537cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215380: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215388: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x21538c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21538cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215390: 0x8043e52  j           func_10F948
    ctx->pc = 0x215390u;
    ctx->pc = 0x215394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215390u;
    // 0x215394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x215398u;
    // 0x215398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21539c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21539cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2153a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2153a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2153a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2153a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2153a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2153a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2153ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2153acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2153b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2153b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2153b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153b8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2153b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2153bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2153c0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2153c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2153c4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2153C4u;
    SET_GPR_U32(ctx, 31, 0x2153CCu);
    ctx->pc = 0x2153C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153C4u;
    // 0x2153c8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2153C4u, 0x2153CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153CCu;
label_2153cc:
    // 0x2153cc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2153d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2153d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153d4: 0xc0854d8  jal         func_215360
    ctx->pc = 0x2153D4u;
    SET_GPR_U32(ctx, 31, 0x2153DCu);
    ctx->pc = 0x2153D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153D4u;
    // 0x2153d8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215360u;
    goto label_215360;
    ctx->pc = 0x2153DCu;
label_2153dc:
    // 0x2153dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2153dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2153e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2153e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2153e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2153e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2153ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2153ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2153f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2153F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2153F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153F0u;
        // 0x2153f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2153F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2153F8u;
    // 0x2153f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2153fc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x215400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215404: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x215404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21540c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215418: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21541c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21541cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215420: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x215420u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x215424: 0xc084612  jal         func_211848
    ctx->pc = 0x215424u;
    SET_GPR_U32(ctx, 31, 0x21542Cu);
    ctx->pc = 0x215428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215424u;
    // 0x215428: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x215424u, 0x21542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21542Cu;
label_21542c:
    // 0x21542c: 0xc0854d8  jal         func_215360
    ctx->pc = 0x21542Cu;
    SET_GPR_U32(ctx, 31, 0x215434u);
    ctx->pc = 0x215430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21542Cu;
    // 0x215430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215360u;
    goto label_215360;
    ctx->pc = 0x215434u;
label_215434:
    // 0x215434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21543c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x215440: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215448: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21544c: 0x3e00008  jr          $ra
    ctx->pc = 0x21544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21544Cu;
        // 0x215450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215454u;
    // 0x215454: 0x0  nop
    ctx->pc = 0x215454u;
    // NOP
}
