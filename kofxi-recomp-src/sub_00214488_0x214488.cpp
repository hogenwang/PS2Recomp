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

// Function: sub_00214488
// Address: 0x214488 - 0x214580
void sub_00214488_0x214488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214488_0x214488");
#endif

    switch (ctx->pc) {
        case 0x2144a4u: goto label_2144a4;
        case 0x2144f4u: goto label_2144f4;
        case 0x214504u: goto label_214504;
        case 0x214554u: goto label_214554;
        case 0x21455cu: goto label_21455c;
        default: break;
    }

    ctx->pc = 0x214488u;

label_214488:
    // 0x214488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21448c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214498: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21449c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21449Cu;
    SET_GPR_U32(ctx, 31, 0x2144A4u);
    ctx->pc = 0x2144A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21449Cu;
    // 0x2144a0: 0x24840888  addiu       $a0, $a0, 0x888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21449Cu, 0x2144A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144A4u;
label_2144a4:
    // 0x2144a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2144a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2144a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2144ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2144b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2144b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2144b4: 0x24840878  addiu       $a0, $a0, 0x878
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2168));
    // 0x2144b8: 0x8043e52  j           func_10F948
    ctx->pc = 0x2144B8u;
    ctx->pc = 0x2144BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144B8u;
    // 0x2144bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2144C0u;
    // 0x2144c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2144c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2144c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2144c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2144c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2144cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2144ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2144d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2144d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2144d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2144d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2144d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2144dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2144dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144e0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2144e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2144e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2144e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2144e8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2144ec: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2144ECu;
    SET_GPR_U32(ctx, 31, 0x2144F4u);
    ctx->pc = 0x2144F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144ECu;
    // 0x2144f0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2144ECu, 0x2144F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144F4u;
label_2144f4:
    // 0x2144f4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2144f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2144f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2144f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144fc: 0xc085122  jal         func_214488
    ctx->pc = 0x2144FCu;
    SET_GPR_U32(ctx, 31, 0x214504u);
    ctx->pc = 0x214500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144FCu;
    // 0x214500: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214488u;
    goto label_214488;
    ctx->pc = 0x214504u;
label_214504:
    // 0x214504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21450c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21450cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214518: 0x3e00008  jr          $ra
    ctx->pc = 0x214518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214518u;
        // 0x21451c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214520u;
    // 0x214520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214524: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21452c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21452cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214534: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x214538: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21453c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214540: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x214540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214544: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x214544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214548: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x214548u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21454c: 0xc084582  jal         func_211608
    ctx->pc = 0x21454Cu;
    SET_GPR_U32(ctx, 31, 0x214554u);
    ctx->pc = 0x214550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21454Cu;
    // 0x214550: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21454Cu, 0x214554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214554u;
label_214554:
    // 0x214554: 0xc085122  jal         func_214488
    ctx->pc = 0x214554u;
    SET_GPR_U32(ctx, 31, 0x21455Cu);
    ctx->pc = 0x214558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214554u;
    // 0x214558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214488u;
    goto label_214488;
    ctx->pc = 0x21455Cu;
label_21455c:
    // 0x21455c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214564: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x214568: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21456c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21456cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214570: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214574: 0x3e00008  jr          $ra
    ctx->pc = 0x214574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214574u;
        // 0x214578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21457Cu;
    // 0x21457c: 0x0  nop
    ctx->pc = 0x21457cu;
    // NOP
    if (ctx->pc == 0x21457cu) { ctx->pc = 0x214580u; }
}
