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

// Function: sub_00216508
// Address: 0x216508 - 0x2166a8
void sub_00216508_0x216508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216508_0x216508");
#endif

    switch (ctx->pc) {
        case 0x216524u: goto label_216524;
        case 0x216534u: goto label_216534;
        case 0x216548u: goto label_216548;
        case 0x2165acu: goto label_2165ac;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165e4u: goto label_2165e4;
        case 0x21664cu: goto label_21664c;
        case 0x216660u: goto label_216660;
        case 0x216674u: goto label_216674;
        case 0x21667cu: goto label_21667c;
        default: break;
    }

    ctx->pc = 0x216508u;

label_216508:
    // 0x216508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21650c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216510: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x216514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216518: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21651c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21651Cu;
    SET_GPR_U32(ctx, 31, 0x216524u);
    ctx->pc = 0x216520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21651Cu;
    // 0x216520: 0x24840cf8  addiu       $a0, $a0, 0xCF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21651Cu, 0x216524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216524u;
label_216524:
    // 0x216524: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216528: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21652c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21652Cu;
    SET_GPR_U32(ctx, 31, 0x216534u);
    ctx->pc = 0x216530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21652Cu;
    // 0x216530: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21652Cu, 0x216534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216534u;
label_216534:
    // 0x216534: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216538: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x216538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21653c: 0x24840868  addiu       $a0, $a0, 0x868
    ctx->pc = 0x21653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    // 0x216540: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216540u;
    SET_GPR_U32(ctx, 31, 0x216548u);
    ctx->pc = 0x216544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216540u;
    // 0x216544: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216540u, 0x216548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216548u;
label_216548:
    // 0x216548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21654c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216558: 0x24840d18  addiu       $a0, $a0, 0xD18
    ctx->pc = 0x216558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3352));
    // 0x21655c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21655Cu;
    ctx->pc = 0x216560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21655Cu;
    // 0x216560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x216564u;
    // 0x216564: 0x0  nop
    ctx->pc = 0x216564u;
    // NOP
    // 0x216568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21656c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21656cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216570: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21657c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216584: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216584u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x216588: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21658c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x216590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216594: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216598: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21659c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21659cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2165a0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2165a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2165a4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2165A4u;
    SET_GPR_U32(ctx, 31, 0x2165ACu);
    ctx->pc = 0x2165A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165A4u;
    // 0x2165a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2165A4u, 0x2165ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165ACu;
label_2165ac:
    // 0x2165ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2165acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2165b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2165b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165b8: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2165B8u;
    SET_GPR_U32(ctx, 31, 0x2165C0u);
    ctx->pc = 0x2165BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165B8u;
    // 0x2165bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2165B8u, 0x2165C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165C0u;
label_2165c0:
    // 0x2165c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2165c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2165c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2165c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165cc: 0xc08449a  jal         func_211268
    ctx->pc = 0x2165CCu;
    SET_GPR_U32(ctx, 31, 0x2165D4u);
    ctx->pc = 0x2165D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165CCu;
    // 0x2165d0: 0x24067d00  addiu       $a2, $zero, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x2165CCu, 0x2165D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165D4u;
label_2165d4:
    // 0x2165d4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2165d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2165d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165dc: 0xc085942  jal         func_216508
    ctx->pc = 0x2165DCu;
    SET_GPR_U32(ctx, 31, 0x2165E4u);
    ctx->pc = 0x2165E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165DCu;
    // 0x2165e0: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216508u;
    goto label_216508;
    ctx->pc = 0x2165E4u;
label_2165e4:
    // 0x2165e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2165e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2165e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2165ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2165ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2165f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2165f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2165f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2165f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2165f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2165f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2165fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2165fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216600: 0x3e00008  jr          $ra
    ctx->pc = 0x216600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216600u;
        // 0x216604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216608u;
    // 0x216608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21660c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21660cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216610: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21661c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216624: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216628: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21662c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216630: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x216630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216634: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x216634u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x216638: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21663c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21663cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216640: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216644: 0xc084612  jal         func_211848
    ctx->pc = 0x216644u;
    SET_GPR_U32(ctx, 31, 0x21664Cu);
    ctx->pc = 0x216648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216644u;
    // 0x216648: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216644u, 0x21664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21664Cu;
label_21664c:
    // 0x21664c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216654: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216658: 0xc084582  jal         func_211608
    ctx->pc = 0x216658u;
    SET_GPR_U32(ctx, 31, 0x216660u);
    ctx->pc = 0x21665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216658u;
    // 0x21665c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x216658u, 0x216660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216660u;
label_216660:
    // 0x216660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216664: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21666c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21666Cu;
    SET_GPR_U32(ctx, 31, 0x216674u);
    ctx->pc = 0x216670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21666Cu;
    // 0x216670: 0x24067d00  addiu       $a2, $zero, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x21666Cu, 0x216674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216674u;
label_216674:
    // 0x216674: 0xc085942  jal         func_216508
    ctx->pc = 0x216674u;
    SET_GPR_U32(ctx, 31, 0x21667Cu);
    ctx->pc = 0x216678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216674u;
    // 0x216678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216508u;
    goto label_216508;
    ctx->pc = 0x21667Cu;
label_21667c:
    // 0x21667c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216684: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x216684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x216688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21668c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21668cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216698: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21669c: 0x3e00008  jr          $ra
    ctx->pc = 0x21669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21669Cu;
        // 0x2166a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21669Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166A4u;
    // 0x2166a4: 0x0  nop
    ctx->pc = 0x2166a4u;
    // NOP
}
