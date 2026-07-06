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

// Function: sub_002197D8
// Address: 0x2197d8 - 0x2198d0
void sub_002197D8_0x2197d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002197D8_0x2197d8");
#endif

    switch (ctx->pc) {
        case 0x2197f4u: goto label_2197f4;
        case 0x219844u: goto label_219844;
        case 0x219854u: goto label_219854;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198acu: goto label_2198ac;
        default: break;
    }

    ctx->pc = 0x2197d8u;

label_2197d8:
    // 0x2197d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2197d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2197dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2197dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2197e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2197e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2197e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2197e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2197e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2197ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2197ECu;
    SET_GPR_U32(ctx, 31, 0x2197F4u);
    ctx->pc = 0x2197F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197ECu;
    // 0x2197f0: 0x248412a0  addiu       $a0, $a0, 0x12A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2197ECu, 0x2197F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197F4u;
label_2197f4:
    // 0x2197f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2197f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2197f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2197fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2197fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219804: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x219808: 0x8043e52  j           func_10F948
    ctx->pc = 0x219808u;
    ctx->pc = 0x21980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219808u;
    // 0x21980c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219810u;
    // 0x219810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219814: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21981c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219824: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x219824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21982c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21982cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219830: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x219830u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x219834: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x219834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x219838: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x219838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21983c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21983Cu;
    SET_GPR_U32(ctx, 31, 0x219844u);
    ctx->pc = 0x219840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21983Cu;
    // 0x219840: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21983Cu, 0x219844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219844u;
label_219844:
    // 0x219844: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x219844u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21984c: 0xc0865f6  jal         func_2197D8
    ctx->pc = 0x21984Cu;
    SET_GPR_U32(ctx, 31, 0x219854u);
    ctx->pc = 0x219850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21984Cu;
    // 0x219850: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2197D8u;
    goto label_2197d8;
    ctx->pc = 0x219854u;
label_219854:
    // 0x219854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21985c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21985cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219868: 0x3e00008  jr          $ra
    ctx->pc = 0x219868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219868u;
        // 0x21986c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219870u;
    // 0x219870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219874: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219878: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21987c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21987cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219884: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x219884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x219888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21988c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219890: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219894: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x219894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219898: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x219898u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21989c: 0xc084582  jal         func_211608
    ctx->pc = 0x21989Cu;
    SET_GPR_U32(ctx, 31, 0x2198A4u);
    ctx->pc = 0x2198A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21989Cu;
    // 0x2198a0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21989Cu, 0x2198A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A4u;
label_2198a4:
    // 0x2198a4: 0xc0865f6  jal         func_2197D8
    ctx->pc = 0x2198A4u;
    SET_GPR_U32(ctx, 31, 0x2198ACu);
    ctx->pc = 0x2198A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198A4u;
    // 0x2198a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2197D8u;
    goto label_2197d8;
    ctx->pc = 0x2198ACu;
label_2198ac:
    // 0x2198ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2198b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2198b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198b4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2198b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2198b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2198bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2198bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2198c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2198c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2198c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2198C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2198C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198C4u;
        // 0x2198c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2198C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2198CCu;
    // 0x2198cc: 0x0  nop
    ctx->pc = 0x2198ccu;
    // NOP
    if (ctx->pc == 0x2198ccu) { ctx->pc = 0x2198d0u; }
}
