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

// Function: sub_00213228
// Address: 0x213228 - 0x213300
void sub_00213228_0x213228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213228_0x213228");
#endif

    switch (ctx->pc) {
        case 0x213264u: goto label_213264;
        case 0x213278u: goto label_213278;
        case 0x21328cu: goto label_21328c;
        case 0x2132a0u: goto label_2132a0;
        case 0x2132b4u: goto label_2132b4;
        case 0x2132c8u: goto label_2132c8;
        case 0x2132d8u: goto label_2132d8;
        default: break;
    }

    ctx->pc = 0x213228u;

    // 0x213228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21322c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21323c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21323cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213248: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21324c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21324cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213250: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213254: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x213254u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213258: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21325c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21325Cu;
    SET_GPR_U32(ctx, 31, 0x213264u);
    ctx->pc = 0x213260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21325Cu;
    // 0x213260: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21325Cu, 0x213264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213264u;
label_213264:
    // 0x213264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21326c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21326cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213270: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213270u;
    SET_GPR_U32(ctx, 31, 0x213278u);
    ctx->pc = 0x213274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213270u;
    // 0x213274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213270u, 0x213278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213278u;
label_213278:
    // 0x213278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21327c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213280: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213284: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213284u;
    SET_GPR_U32(ctx, 31, 0x21328Cu);
    ctx->pc = 0x213288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213284u;
    // 0x213288: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x213284u, 0x21328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21328Cu;
label_21328c:
    // 0x21328c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213294: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213298: 0xc08449a  jal         func_211268
    ctx->pc = 0x213298u;
    SET_GPR_U32(ctx, 31, 0x2132A0u);
    ctx->pc = 0x21329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213298u;
    // 0x21329c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x213298u, 0x2132A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132A0u;
label_2132a0:
    // 0x2132a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2132a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2132a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2132a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132ac: 0xc08449a  jal         func_211268
    ctx->pc = 0x2132ACu;
    SET_GPR_U32(ctx, 31, 0x2132B4u);
    ctx->pc = 0x2132B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132ACu;
    // 0x2132b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x2132ACu, 0x2132B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132B4u;
label_2132b4:
    // 0x2132b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2132b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2132b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2132bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132c0: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2132C0u;
    SET_GPR_U32(ctx, 31, 0x2132C8u);
    ctx->pc = 0x2132C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132C0u;
    // 0x2132c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2132C0u, 0x2132C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132C8u;
label_2132c8:
    // 0x2132c8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2132c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2132cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2132ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132d0: 0xc084c66  jal         func_213198
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132D0u;
    // 0x2132d4: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213198u, 0x2132D0u, 0x2132D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2132d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2132dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2132e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2132e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2132e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2132e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2132e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2132e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2132ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2132ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2132f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2132f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2132f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2132F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F4u;
        // 0x2132f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2132FCu;
    // 0x2132fc: 0x0  nop
    ctx->pc = 0x2132fcu;
    // NOP
}
