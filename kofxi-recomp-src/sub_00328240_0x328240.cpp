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

// Function: sub_00328240
// Address: 0x328240 - 0x3291a0
void sub_00328240_0x328240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328240_0x328240");
#endif

    switch (ctx->pc) {
        case 0x328268u: goto label_328268;
        case 0x328290u: goto label_328290;
        case 0x3282e8u: goto label_3282e8;
        case 0x3283acu: goto label_3283ac;
        case 0x3283ecu: goto label_3283ec;
        case 0x3285c0u: goto label_3285c0;
        case 0x328624u: goto label_328624;
        case 0x328674u: goto label_328674;
        case 0x32869cu: goto label_32869c;
        case 0x3286c8u: goto label_3286c8;
        case 0x328718u: goto label_328718;
        case 0x3288c0u: goto label_3288c0;
        case 0x328940u: goto label_328940;
        case 0x328a9cu: goto label_328a9c;
        case 0x328ab0u: goto label_328ab0;
        case 0x328adcu: goto label_328adc;
        case 0x328af0u: goto label_328af0;
        case 0x328bc8u: goto label_328bc8;
        case 0x328c08u: goto label_328c08;
        case 0x328c18u: goto label_328c18;
        case 0x328c20u: goto label_328c20;
        case 0x328c84u: goto label_328c84;
        case 0x328c8cu: goto label_328c8c;
        case 0x328c94u: goto label_328c94;
        case 0x328c9cu: goto label_328c9c;
        case 0x328cacu: goto label_328cac;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cbcu: goto label_328cbc;
        case 0x328cc8u: goto label_328cc8;
        case 0x328cd0u: goto label_328cd0;
        case 0x328ce0u: goto label_328ce0;
        case 0x328d2cu: goto label_328d2c;
        case 0x328d58u: goto label_328d58;
        case 0x328d60u: goto label_328d60;
        case 0x328db4u: goto label_328db4;
        case 0x328dccu: goto label_328dcc;
        case 0x328dd4u: goto label_328dd4;
        case 0x328df0u: goto label_328df0;
        case 0x328e00u: goto label_328e00;
        case 0x328e30u: goto label_328e30;
        case 0x328e38u: goto label_328e38;
        case 0x328e40u: goto label_328e40;
        case 0x328e48u: goto label_328e48;
        case 0x328e68u: goto label_328e68;
        case 0x328e7cu: goto label_328e7c;
        case 0x328e88u: goto label_328e88;
        case 0x328e98u: goto label_328e98;
        case 0x328ed4u: goto label_328ed4;
        case 0x328ee4u: goto label_328ee4;
        case 0x328f30u: goto label_328f30;
        case 0x328f38u: goto label_328f38;
        case 0x328f40u: goto label_328f40;
        case 0x328fd4u: goto label_328fd4;
        case 0x328fecu: goto label_328fec;
        case 0x328ff8u: goto label_328ff8;
        case 0x329008u: goto label_329008;
        case 0x32903cu: goto label_32903c;
        case 0x329044u: goto label_329044;
        case 0x32904cu: goto label_32904c;
        case 0x329064u: goto label_329064;
        case 0x329084u: goto label_329084;
        case 0x3290bcu: goto label_3290bc;
        case 0x3290c8u: goto label_3290c8;
        case 0x3290d8u: goto label_3290d8;
        case 0x3290e0u: goto label_3290e0;
        case 0x329138u: goto label_329138;
        case 0x329140u: goto label_329140;
        case 0x329150u: goto label_329150;
        case 0x329168u: goto label_329168;
        default: break;
    }

    ctx->pc = 0x328240u;

label_328240:
    // 0x328240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32824c: 0x948200d4  lhu         $v0, 0xD4($a0)
    ctx->pc = 0x32824cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x328250: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x328250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x328254: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x328254u;
    {
        const bool branch_taken_0x328254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328254u;
        // 0x328258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328254) {
            ctx->pc = 0x32829Cu;
            goto label_32829c;
        }
    }
    ctx->pc = 0x32825Cu;
    // 0x32825c: 0x860500dc  lh          $a1, 0xDC($s0)
    ctx->pc = 0x32825cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x328260: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x328260u;
    SET_GPR_U32(ctx, 31, 0x328268u);
    ctx->pc = 0x328264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328260u;
    // 0x328264: 0x860400e4  lh          $a0, 0xE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x328260u, 0x328268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328268u;
label_328268:
    // 0x328268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x328268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32826c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32826Cu;
    {
        const bool branch_taken_0x32826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32826c) {
            ctx->pc = 0x328270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32826Cu;
            // 0x328270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3282A0u;
            goto label_3282a0;
        }
    }
    ctx->pc = 0x328274u;
    // 0x328274: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x328274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x328278: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x328278u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x32827c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x328280: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x328280u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x328284: 0x860500dc  lh          $a1, 0xDC($s0)
    ctx->pc = 0x328284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x328288: 0xc0c8de0  jal         func_323780
    ctx->pc = 0x328288u;
    SET_GPR_U32(ctx, 31, 0x328290u);
    ctx->pc = 0x32828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328288u;
    // 0x32828c: 0x860400e4  lh          $a0, 0xE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323780u, 0x328288u, 0x328290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328290u;
label_328290:
    // 0x328290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x328294u;
    {
        const bool branch_taken_0x328294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328294) {
            ctx->pc = 0x3282A0u;
            goto label_3282a0;
        }
    }
    ctx->pc = 0x32829Cu;
label_32829c:
    // 0x32829c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3282a0:
    // 0x3282a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3282a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3282a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3282a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3282A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3282ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A8u;
        // 0x3282ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3282B0u;
    // 0x3282b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3282b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3282b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3282b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3282b8: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x3282b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3282bc: 0x94a60016  lhu         $a2, 0x16($a1)
    ctx->pc = 0x3282bcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x3282c0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3282c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3282c4: 0x94a30012  lhu         $v1, 0x12($a1)
    ctx->pc = 0x3282c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x3282c8: 0x94a8001a  lhu         $t0, 0x1A($a1)
    ctx->pc = 0x3282c8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x3282cc: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x3282ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3282d0: 0x84a90014  lh          $t1, 0x14($a1)
    ctx->pc = 0x3282d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3282d4: 0x94a70018  lhu         $a3, 0x18($a1)
    ctx->pc = 0x3282d4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3282d8: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x3282d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3282dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3282dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282e0: 0xc0c8e78  jal         func_3239E0
    ctx->pc = 0x3282E0u;
    SET_GPR_U32(ctx, 31, 0x3282E8u);
    ctx->pc = 0x3282E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282E0u;
    // 0x3282e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239E0u, 0x3282E0u, 0x3282E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282E8u;
label_3282e8:
    // 0x3282e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3282e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3282ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3282f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3282F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3282F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282F0u;
        // 0x3282f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3282F8u;
    // 0x3282f8: 0x0  nop
    ctx->pc = 0x3282f8u;
    // NOP
    // 0x3282fc: 0x0  nop
    ctx->pc = 0x3282fcu;
    // NOP
    // 0x328300: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x328300u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x328304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x328304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x328308: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x328308u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x32830c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x32830cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328310: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x328310u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x328314: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x328314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x328318: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328318u;
    {
        const bool branch_taken_0x328318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328318) {
            ctx->pc = 0x32831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328318u;
            // 0x32831c: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328328u;
            goto label_328328;
        }
    }
    ctx->pc = 0x328320u;
    // 0x328320: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x328320u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x328324: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x328324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_328328:
    // 0x328328: 0x3e00008  jr          $ra
    ctx->pc = 0x328328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328330u;
    // 0x328330: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x328330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x328334: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x328334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x328338: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x32833c: 0x3e00008  jr          $ra
    ctx->pc = 0x32833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32833Cu;
        // 0x328340: 0xa4a3000c  sh          $v1, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328344u;
    // 0x328344: 0x0  nop
    ctx->pc = 0x328344u;
    // NOP
    // 0x328348: 0x0  nop
    ctx->pc = 0x328348u;
    // NOP
    // 0x32834c: 0x0  nop
    ctx->pc = 0x32834cu;
    // NOP
    // 0x328350: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x328350u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x328354: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x328354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x328358: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x32835c: 0x3e00008  jr          $ra
    ctx->pc = 0x32835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32835Cu;
        // 0x328360: 0xa4a3000c  sh          $v1, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328364u;
    // 0x328364: 0x0  nop
    ctx->pc = 0x328364u;
    // NOP
    // 0x328368: 0x0  nop
    ctx->pc = 0x328368u;
    // NOP
    // 0x32836c: 0x0  nop
    ctx->pc = 0x32836cu;
    // NOP
    // 0x328370: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x328370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x328374: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x328374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x328378: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x32837c: 0x3e00008  jr          $ra
    ctx->pc = 0x32837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32837Cu;
        // 0x328380: 0xa4a3000c  sh          $v1, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328384u;
    // 0x328384: 0x0  nop
    ctx->pc = 0x328384u;
    // NOP
    // 0x328388: 0x0  nop
    ctx->pc = 0x328388u;
    // NOP
    // 0x32838c: 0x0  nop
    ctx->pc = 0x32838cu;
    // NOP
    // 0x328390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32839c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32839cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283a0: 0x94a40012  lhu         $a0, 0x12($a1)
    ctx->pc = 0x3283a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x3283a4: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x3283A4u;
    SET_GPR_U32(ctx, 31, 0x3283ACu);
    ctx->pc = 0x3283A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283A4u;
    // 0x3283a8: 0x84a50014  lh          $a1, 0x14($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x3283A4u, 0x3283ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283ACu;
label_3283ac:
    // 0x3283ac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3283acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3283b0: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x3283b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3283b4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3283b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3283b8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x3283b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x3283bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3283bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3283c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3283c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3283c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3283c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3283c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3283C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3283CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283C8u;
        // 0x3283cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283D0u;
    // 0x3283d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3283d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3283d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3283d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3283d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3283d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3283dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3283dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283e0: 0x94a40012  lhu         $a0, 0x12($a1)
    ctx->pc = 0x3283e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x3283e4: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x3283E4u;
    SET_GPR_U32(ctx, 31, 0x3283ECu);
    ctx->pc = 0x3283E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283E4u;
    // 0x3283e8: 0x84a50014  lh          $a1, 0x14($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x3283E4u, 0x3283ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283ECu;
label_3283ec:
    // 0x3283ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3283ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3283f0: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x3283f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3283f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3283f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3283f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3283fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3283fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328400: 0x3e00008  jr          $ra
    ctx->pc = 0x328400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328400u;
        // 0x328404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328408u;
    // 0x328408: 0x0  nop
    ctx->pc = 0x328408u;
    // NOP
    // 0x32840c: 0x0  nop
    ctx->pc = 0x32840cu;
    // NOP
    // 0x328410: 0x94a200d6  lhu         $v0, 0xD6($a1)
    ctx->pc = 0x328410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 214)));
    // 0x328414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x328414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x328418: 0xa4a200d6  sh          $v0, 0xD6($a1)
    ctx->pc = 0x328418u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 214), (uint16_t)GPR_U32(ctx, 2));
    // 0x32841c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x32841cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328420: 0x94a300d6  lhu         $v1, 0xD6($a1)
    ctx->pc = 0x328420u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 214)));
    // 0x328424: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x328424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x328428: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328428u;
    {
        const bool branch_taken_0x328428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328428) {
            ctx->pc = 0x32842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328428u;
            // 0x32842c: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328438u;
            goto label_328438;
        }
    }
    ctx->pc = 0x328430u;
    // 0x328430: 0xa4a000d6  sh          $zero, 0xD6($a1)
    ctx->pc = 0x328430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 214), (uint16_t)GPR_U32(ctx, 0));
    // 0x328434: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x328434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_328438:
    // 0x328438: 0x3e00008  jr          $ra
    ctx->pc = 0x328438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328440u;
    // 0x328440: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x328440u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x328444: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x328444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x328448: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32844c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x32844cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328450: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x328450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x328454: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x328454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328458: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x328458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32845c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x32845Cu;
    {
        const bool branch_taken_0x32845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32845c) {
            ctx->pc = 0x328460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32845Cu;
            // 0x328460: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328514u;
            goto label_328514;
        }
    }
    ctx->pc = 0x328464u;
    // 0x328464: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x328464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x328468: 0xa0a2001c  sb          $v0, 0x1C($a1)
    ctx->pc = 0x328468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x32846c: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x32846cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x328470: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328470u;
    {
        const bool branch_taken_0x328470 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328470) {
            ctx->pc = 0x328474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328470u;
            // 0x328474: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328484u;
            goto label_328484;
        }
    }
    ctx->pc = 0x328478u;
    // 0x328478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32847c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32847Cu;
    {
        const bool branch_taken_0x32847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32847Cu;
        // 0x328480: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32847c) {
            ctx->pc = 0x32849Cu;
            goto label_32849c;
        }
    }
    ctx->pc = 0x328484u;
label_328484:
    // 0x328484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32848c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32848cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328490: 0x0  nop
    ctx->pc = 0x328490u;
    // NOP
    // 0x328494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328498: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x328498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_32849c:
    // 0x32849c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x32849cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3284a0: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x3284a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3284a4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3284A4u;
    {
        const bool branch_taken_0x3284a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3284a4) {
            ctx->pc = 0x3284A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3284A4u;
            // 0x3284a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3284B8u;
            goto label_3284b8;
        }
    }
    ctx->pc = 0x3284ACu;
    // 0x3284ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3284acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3284b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3284B0u;
    {
        const bool branch_taken_0x3284b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B0u;
        // 0x3284b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284b0) {
            ctx->pc = 0x3284D0u;
            goto label_3284d0;
        }
    }
    ctx->pc = 0x3284B8u;
label_3284b8:
    // 0x3284b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3284b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3284bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3284bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3284c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3284c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3284c4: 0x0  nop
    ctx->pc = 0x3284c4u;
    // NOP
    // 0x3284c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3284c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3284cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3284ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3284d0:
    // 0x3284d0: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x3284d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x3284d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3284d8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3284d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3284dc: 0xa0a300bd  sb          $v1, 0xBD($a1)
    ctx->pc = 0x3284dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 189), (uint8_t)GPR_U32(ctx, 3));
    // 0x3284e0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3284e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3284e4: 0xa0a300be  sb          $v1, 0xBE($a1)
    ctx->pc = 0x3284e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 190), (uint8_t)GPR_U32(ctx, 3));
    // 0x3284e8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3284e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3284ec: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3284ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3284f0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3284f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3284f4: 0xa0a300bf  sb          $v1, 0xBF($a1)
    ctx->pc = 0x3284f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 191), (uint8_t)GPR_U32(ctx, 3));
    // 0x3284f8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3284f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3284fc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3284fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x328500: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x328500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x328504: 0xa0a300c0  sb          $v1, 0xC0($a1)
    ctx->pc = 0x328504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 192), (uint8_t)GPR_U32(ctx, 3));
    // 0x328508: 0xa4a00028  sh          $zero, 0x28($a1)
    ctx->pc = 0x328508u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x32850c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x32850Cu;
    {
        const bool branch_taken_0x32850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32850Cu;
        // 0x328510: 0xaca20138  sw          $v0, 0x138($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32850c) {
            ctx->pc = 0x32858Cu;
            goto label_32858c;
        }
    }
    ctx->pc = 0x328514u;
label_328514:
    // 0x328514: 0xa0a2001c  sb          $v0, 0x1C($a1)
    ctx->pc = 0x328514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x328518: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x328518u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32851c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32851Cu;
    {
        const bool branch_taken_0x32851c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32851c) {
            ctx->pc = 0x328520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32851Cu;
            // 0x328520: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328530u;
            goto label_328530;
        }
    }
    ctx->pc = 0x328524u;
    // 0x328524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x328528u;
    {
        const bool branch_taken_0x328528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328528u;
        // 0x32852c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328528) {
            ctx->pc = 0x328548u;
            goto label_328548;
        }
    }
    ctx->pc = 0x328530u;
label_328530:
    // 0x328530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32853c: 0x0  nop
    ctx->pc = 0x32853cu;
    // NOP
    // 0x328540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328544: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x328544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_328548:
    // 0x328548: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x328548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x32854c: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x32854cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x328550: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328550u;
    {
        const bool branch_taken_0x328550 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328550) {
            ctx->pc = 0x328554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328550u;
            // 0x328554: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328564u;
            goto label_328564;
        }
    }
    ctx->pc = 0x328558u;
    // 0x328558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32855c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32855Cu;
    {
        const bool branch_taken_0x32855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32855Cu;
        // 0x328560: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32855c) {
            ctx->pc = 0x32857Cu;
            goto label_32857c;
        }
    }
    ctx->pc = 0x328564u;
label_328564:
    // 0x328564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32856c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32856cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328570: 0x0  nop
    ctx->pc = 0x328570u;
    // NOP
    // 0x328574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328578: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x328578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_32857c:
    // 0x32857c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x32857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x328580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x328580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328584: 0xa4a00028  sh          $zero, 0x28($a1)
    ctx->pc = 0x328584u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x328588: 0xaca20138  sw          $v0, 0x138($a1)
    ctx->pc = 0x328588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 2));
label_32858c:
    // 0x32858c: 0x3e00008  jr          $ra
    ctx->pc = 0x32858Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32858Cu;
        // 0x328590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32858Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328594u;
    // 0x328594: 0x0  nop
    ctx->pc = 0x328594u;
    // NOP
    // 0x328598: 0x0  nop
    ctx->pc = 0x328598u;
    // NOP
    // 0x32859c: 0x0  nop
    ctx->pc = 0x32859cu;
    // NOP
    // 0x3285a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3285a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3285a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3285a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3285a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3285a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3285ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3285acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3285b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3285b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3285b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285b8: 0xc0ca090  jal         func_328240
    ctx->pc = 0x3285B8u;
    SET_GPR_U32(ctx, 31, 0x3285C0u);
    ctx->pc = 0x3285BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285B8u;
    // 0x3285bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    goto label_328240;
    ctx->pc = 0x3285C0u;
label_3285c0:
    // 0x3285c0: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x3285c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3285c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3285c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3285c8: 0x3063f87f  andi        $v1, $v1, 0xF87F
    ctx->pc = 0x3285c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63615);
    // 0x3285cc: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x3285ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x3285d0: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x3285d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3285d4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3285d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3285d8: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x3285d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x3285dc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3285dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3285e0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x3285e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3285e4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x3285e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3285e8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x3285e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3285ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3285ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3285f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3285f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3285f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3285f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3285f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3285F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3285FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285F8u;
        // 0x3285fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3285F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328600u;
    // 0x328600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x328604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x328608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32860c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328614: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32861c: 0xc0ca090  jal         func_328240
    ctx->pc = 0x32861Cu;
    SET_GPR_U32(ctx, 31, 0x328624u);
    ctx->pc = 0x328620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32861Cu;
    // 0x328620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    goto label_328240;
    ctx->pc = 0x328624u;
label_328624:
    // 0x328624: 0x962300d4  lhu         $v1, 0xD4($s1)
    ctx->pc = 0x328624u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x328628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32862c: 0x3063f87f  andi        $v1, $v1, 0xF87F
    ctx->pc = 0x32862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63615);
    // 0x328630: 0xa62300d4  sh          $v1, 0xD4($s1)
    ctx->pc = 0x328630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x328634: 0x962300d4  lhu         $v1, 0xD4($s1)
    ctx->pc = 0x328634u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x328638: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x328638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x32863c: 0xa62300d4  sh          $v1, 0xD4($s1)
    ctx->pc = 0x32863cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x328640: 0x962500e0  lhu         $a1, 0xE0($s1)
    ctx->pc = 0x328640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x328644: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x328644u;
    {
        const bool branch_taken_0x328644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x328648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328644u;
        // 0x328648: 0x96100000  lhu         $s0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328644) {
            ctx->pc = 0x328690u;
            goto label_328690;
        }
    }
    ctx->pc = 0x32864Cu;
    // 0x32864c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328650: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328650u;
    {
        const bool branch_taken_0x328650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x328650) {
            ctx->pc = 0x328654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328650u;
            // 0x328654: 0x862600dc  lh          $a2, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32866Cu;
            goto label_32866c;
        }
    }
    ctx->pc = 0x328658u;
    // 0x328658: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x328658u;
    {
        const bool branch_taken_0x328658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328658) {
            ctx->pc = 0x328668u;
            goto label_328668;
        }
    }
    ctx->pc = 0x328660u;
    // 0x328660: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x328660u;
    {
        const bool branch_taken_0x328660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328660u;
        // 0x328664: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328660) {
            ctx->pc = 0x3286DCu;
            goto label_3286dc;
        }
    }
    ctx->pc = 0x328668u;
label_328668:
    // 0x328668: 0x862600dc  lh          $a2, 0xDC($s1)
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
label_32866c:
    // 0x32866c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x32866Cu;
    SET_GPR_U32(ctx, 31, 0x328674u);
    ctx->pc = 0x328670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32866Cu;
    // 0x328670: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x32866Cu, 0x328674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328674u;
label_328674:
    // 0x328674: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x328674u;
    {
        const bool branch_taken_0x328674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328674) {
            ctx->pc = 0x3286D8u;
            goto label_3286d8;
        }
    }
    ctx->pc = 0x32867Cu;
    // 0x32867c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x328680: 0x962200e2  lhu         $v0, 0xE2($s1)
    ctx->pc = 0x328680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 226)));
    // 0x328684: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x328684u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x328688: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x328688u;
    {
        const bool branch_taken_0x328688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328688u;
        // 0x32868c: 0xa63000e4  sh          $s0, 0xE4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328688) {
            ctx->pc = 0x3286D8u;
            goto label_3286d8;
        }
    }
    ctx->pc = 0x328690u;
label_328690:
    // 0x328690: 0x862600dc  lh          $a2, 0xDC($s1)
    ctx->pc = 0x328690u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x328694: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x328694u;
    SET_GPR_U32(ctx, 31, 0x32869Cu);
    ctx->pc = 0x328698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328694u;
    // 0x328698: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x328694u, 0x32869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32869Cu;
label_32869c:
    // 0x32869c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32869cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286a0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3286A0u;
    {
        const bool branch_taken_0x3286a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3286a0) {
            ctx->pc = 0x3286D8u;
            goto label_3286d8;
        }
    }
    ctx->pc = 0x3286A8u;
    // 0x3286a8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3286a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x3286ac: 0x962500e0  lhu         $a1, 0xE0($s1)
    ctx->pc = 0x3286acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x3286b0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3286b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3286b4: 0x862600dc  lh          $a2, 0xDC($s1)
    ctx->pc = 0x3286b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3286b8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3286b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3286bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3286bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3286c0: 0xc0c8bac  jal         func_322EB0
    ctx->pc = 0x3286C0u;
    SET_GPR_U32(ctx, 31, 0x3286C8u);
    ctx->pc = 0x3286C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286C0u;
    // 0x3286c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EB0u, 0x3286C0u, 0x3286C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286C8u;
label_3286c8:
    // 0x3286c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3286c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3286cc: 0x962200e2  lhu         $v0, 0xE2($s1)
    ctx->pc = 0x3286ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 226)));
    // 0x3286d0: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x3286d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x3286d4: 0xa63000e4  sh          $s0, 0xE4($s1)
    ctx->pc = 0x3286d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 16));
label_3286d8:
    // 0x3286d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3286d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3286dc:
    // 0x3286dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3286dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3286e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3286e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3286e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3286e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3286e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3286e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3286ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3286ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3286F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286ECu;
        // 0x3286f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3286ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3286F4u;
    // 0x3286f4: 0x0  nop
    ctx->pc = 0x3286f4u;
    // NOP
    // 0x3286f8: 0x0  nop
    ctx->pc = 0x3286f8u;
    // NOP
    // 0x3286fc: 0x0  nop
    ctx->pc = 0x3286fcu;
    // NOP
    // 0x328700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32870c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32870cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328710: 0xc0ca090  jal         func_328240
    ctx->pc = 0x328710u;
    SET_GPR_U32(ctx, 31, 0x328718u);
    ctx->pc = 0x328714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328710u;
    // 0x328714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    goto label_328240;
    ctx->pc = 0x328718u;
label_328718:
    // 0x328718: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x328718u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x32871c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32871cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328720: 0x3063f87f  andi        $v1, $v1, 0xF87F
    ctx->pc = 0x328720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63615);
    // 0x328724: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x328724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x328728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32872c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328730: 0x3e00008  jr          $ra
    ctx->pc = 0x328730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328730u;
        // 0x328734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328738u;
    // 0x328738: 0x0  nop
    ctx->pc = 0x328738u;
    // NOP
    // 0x32873c: 0x0  nop
    ctx->pc = 0x32873cu;
    // NOP
    // 0x328740: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x328740u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328748: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x328748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x32874c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32874cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x328750: 0x3e00008  jr          $ra
    ctx->pc = 0x328750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328750u;
        // 0x328754: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328758u;
    // 0x328758: 0x0  nop
    ctx->pc = 0x328758u;
    // NOP
    // 0x32875c: 0x0  nop
    ctx->pc = 0x32875cu;
    // NOP
    // 0x328760: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x328760u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328768: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x328768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x32876c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x328770: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x328770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x328774: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x328774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x328778: 0x84a3000e  lh          $v1, 0xE($a1)
    ctx->pc = 0x328778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x32877c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328780: 0x3e00008  jr          $ra
    ctx->pc = 0x328780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328780u;
        // 0x328784: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328788u;
    // 0x328788: 0x0  nop
    ctx->pc = 0x328788u;
    // NOP
    // 0x32878c: 0x0  nop
    ctx->pc = 0x32878cu;
    // NOP
    // 0x328790: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x328790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328794: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x328794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x328798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32879c: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x32879cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287a0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3287a4: 0x84a2000e  lh          $v0, 0xE($a1)
    ctx->pc = 0x3287a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x3287a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3287a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3287ac: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x3287acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287b0: 0x94a200d6  lhu         $v0, 0xD6($a1)
    ctx->pc = 0x3287b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 214)));
    // 0x3287b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3287b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3287b8: 0xa4a200d6  sh          $v0, 0xD6($a1)
    ctx->pc = 0x3287b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 214), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287bc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3287bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3287c0: 0x94a300d6  lhu         $v1, 0xD6($a1)
    ctx->pc = 0x3287c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 214)));
    // 0x3287c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3287c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3287c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3287C8u;
    {
        const bool branch_taken_0x3287c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3287c8) {
            ctx->pc = 0x3287CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3287C8u;
            // 0x3287cc: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3287D8u;
            goto label_3287d8;
        }
    }
    ctx->pc = 0x3287D0u;
    // 0x3287d0: 0xa4a000d6  sh          $zero, 0xD6($a1)
    ctx->pc = 0x3287d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 214), (uint16_t)GPR_U32(ctx, 0));
    // 0x3287d4: 0x24020403  addiu       $v0, $zero, 0x403
    ctx->pc = 0x3287d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
label_3287d8:
    // 0x3287d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3287D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3287D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3287E0u;
    // 0x3287e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3287e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3287e4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3287E4u;
    {
        const bool branch_taken_0x3287e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3287e4) {
            ctx->pc = 0x3287E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3287E4u;
            // 0x3287e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3287F8u;
            goto label_3287f8;
        }
    }
    ctx->pc = 0x3287ECu;
    // 0x3287ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3287ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3287f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3287F0u;
    {
        const bool branch_taken_0x3287f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287F0u;
        // 0x3287f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287f0) {
            ctx->pc = 0x328810u;
            goto label_328810;
        }
    }
    ctx->pc = 0x3287F8u;
label_3287f8:
    // 0x3287f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3287f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3287fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3287fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328804: 0x0  nop
    ctx->pc = 0x328804u;
    // NOP
    // 0x328808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32880c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32880cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_328810:
    // 0x328810: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x328810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x328814: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x328814u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x328818: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328818u;
    {
        const bool branch_taken_0x328818 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328818) {
            ctx->pc = 0x32881Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328818u;
            // 0x32881c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32882Cu;
            goto label_32882c;
        }
    }
    ctx->pc = 0x328820u;
    // 0x328820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x328824u;
    {
        const bool branch_taken_0x328824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328824u;
        // 0x328828: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328824) {
            ctx->pc = 0x328844u;
            goto label_328844;
        }
    }
    ctx->pc = 0x32882Cu;
label_32882c:
    // 0x32882c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328838: 0x0  nop
    ctx->pc = 0x328838u;
    // NOP
    // 0x32883c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32883cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328840: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x328840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_328844:
    // 0x328844: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x328844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x328848: 0x3e00008  jr          $ra
    ctx->pc = 0x328848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328848u;
        // 0x32884c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328850u;
    // 0x328850: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x328850u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328858: 0x3e00008  jr          $ra
    ctx->pc = 0x328858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328858u;
        // 0x32885c: 0xa4a30028  sh          $v1, 0x28($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328860u;
    // 0x328860: 0x94a300d4  lhu         $v1, 0xD4($a1)
    ctx->pc = 0x328860u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328868: 0x3063fffc  andi        $v1, $v1, 0xFFFC
    ctx->pc = 0x328868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
    // 0x32886c: 0xa4a300d4  sh          $v1, 0xD4($a1)
    ctx->pc = 0x32886cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x328870: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x328870u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328874: 0x94a300d4  lhu         $v1, 0xD4($a1)
    ctx->pc = 0x328874u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328878: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x328878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x32887c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x328880: 0x3e00008  jr          $ra
    ctx->pc = 0x328880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328880u;
        // 0x328884: 0xa4a300d4  sh          $v1, 0xD4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328888u;
    // 0x328888: 0x0  nop
    ctx->pc = 0x328888u;
    // NOP
    // 0x32888c: 0x0  nop
    ctx->pc = 0x32888cu;
    // NOP
    // 0x328890: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x328890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328898: 0x3e00008  jr          $ra
    ctx->pc = 0x328898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328898u;
        // 0x32889c: 0xa0a3001c  sb          $v1, 0x1C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3288A0u;
    // 0x3288a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3288a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3288a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3288a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3288a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3288a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3288ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3288acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3288b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3288b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3288b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3288b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3288b8: 0xc0ca090  jal         func_328240
    ctx->pc = 0x3288B8u;
    SET_GPR_U32(ctx, 31, 0x3288C0u);
    ctx->pc = 0x3288BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288B8u;
    // 0x3288bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    goto label_328240;
    ctx->pc = 0x3288C0u;
label_3288c0:
    // 0x3288c0: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x3288c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3288c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3288c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3288c8: 0x3063f87f  andi        $v1, $v1, 0xF87F
    ctx->pc = 0x3288c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63615);
    // 0x3288cc: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x3288ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288d0: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x3288d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3288d4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3288d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3288d8: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x3288d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288dc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3288dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3288e0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3288e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288e4: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x3288e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3288e8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x3288e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3288ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3288f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3288f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3288f4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3288f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3288f8: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x3288f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3288fc: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x3288fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x328900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32890c: 0x3e00008  jr          $ra
    ctx->pc = 0x32890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32890Cu;
        // 0x328910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328914u;
    // 0x328914: 0x0  nop
    ctx->pc = 0x328914u;
    // NOP
    // 0x328918: 0x0  nop
    ctx->pc = 0x328918u;
    // NOP
    // 0x32891c: 0x0  nop
    ctx->pc = 0x32891cu;
    // NOP
    // 0x328920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x328928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32892c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x328930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x328934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328938: 0xc0ca090  jal         func_328240
    ctx->pc = 0x328938u;
    SET_GPR_U32(ctx, 31, 0x328940u);
    ctx->pc = 0x32893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328938u;
    // 0x32893c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    goto label_328240;
    ctx->pc = 0x328940u;
label_328940:
    // 0x328940: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x328940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x328944: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x328944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x328948: 0x3063f87f  andi        $v1, $v1, 0xF87F
    ctx->pc = 0x328948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63615);
    // 0x32894c: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x32894cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x328950: 0x960300d4  lhu         $v1, 0xD4($s0)
    ctx->pc = 0x328950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x328954: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x328954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x328958: 0xa60300d4  sh          $v1, 0xD4($s0)
    ctx->pc = 0x328958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 3));
    // 0x32895c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x32895cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x328960: 0xa60300ea  sh          $v1, 0xEA($s0)
    ctx->pc = 0x328960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 3));
    // 0x328964: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x328964u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x328968: 0xa60300ec  sh          $v1, 0xEC($s0)
    ctx->pc = 0x328968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 236), (uint16_t)GPR_U32(ctx, 3));
    // 0x32896c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x32896cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x328970: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x328970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x328974: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x328974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x328978: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x328978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32897c: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x32897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x328980: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x328980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x328984: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x328984u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x328988: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x328988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x32898c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x32898cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x328990: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x328990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x328994: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x328994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x328998: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x328998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x32899c: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x32899cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3289a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3289a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289a4: 0x0  nop
    ctx->pc = 0x3289a4u;
    // NOP
    // 0x3289a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3289a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3289ac: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x3289acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x3289b0: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x3289b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3289b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3289b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289b8: 0x0  nop
    ctx->pc = 0x3289b8u;
    // NOP
    // 0x3289bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3289bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3289c0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x3289c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x3289c4: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x3289c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3289c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3289c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289cc: 0x0  nop
    ctx->pc = 0x3289ccu;
    // NOP
    // 0x3289d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3289d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3289d4: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x3289d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x3289d8: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x3289d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3289dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3289dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289e0: 0x0  nop
    ctx->pc = 0x3289e0u;
    // NOP
    // 0x3289e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3289e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3289e8: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x3289e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x3289ec: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x3289ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3289f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3289f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289f4: 0x0  nop
    ctx->pc = 0x3289f4u;
    // NOP
    // 0x3289f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3289f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3289fc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3289fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x328a00: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x328a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328a08: 0x0  nop
    ctx->pc = 0x328a08u;
    // NOP
    // 0x328a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328a10: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x328a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x328a14: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x328a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x328a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328a1c: 0x0  nop
    ctx->pc = 0x328a1cu;
    // NOP
    // 0x328a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328a24: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x328a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x328a28: 0x8623001a  lh          $v1, 0x1A($s1)
    ctx->pc = 0x328a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x328a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328a30: 0x0  nop
    ctx->pc = 0x328a30u;
    // NOP
    // 0x328a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328a38: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x328a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x328a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328a48: 0x3e00008  jr          $ra
    ctx->pc = 0x328A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A48u;
        // 0x328a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328A50u;
    // 0x328a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328a5c: 0x84a200dc  lh          $v0, 0xDC($a1)
    ctx->pc = 0x328a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x328a60: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x328a60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328a64: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x328A64u;
    {
        const bool branch_taken_0x328a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x328A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A64u;
        // 0x328a68: 0x94840002  lhu         $a0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a64) {
            ctx->pc = 0x328A74u;
            goto label_328a74;
        }
    }
    ctx->pc = 0x328A6Cu;
    // 0x328a6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x328A6Cu;
    {
        const bool branch_taken_0x328a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A6Cu;
        // 0x328a70: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a6c) {
            ctx->pc = 0x328AB8u;
            goto label_328ab8;
        }
    }
    ctx->pc = 0x328A74u;
label_328a74:
    // 0x328a74: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x328a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x328a78: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x328A78u;
    {
        const bool branch_taken_0x328a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x328a78) {
            ctx->pc = 0x328A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328A78u;
            // 0x328a7c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x328AA4u;
            goto label_328aa4;
        }
    }
    ctx->pc = 0x328A80u;
    // 0x328a80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328A80u;
    {
        const bool branch_taken_0x328a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a80) {
            ctx->pc = 0x328A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328A80u;
            // 0x328a84: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x328A90u;
            goto label_328a90;
        }
    }
    ctx->pc = 0x328A88u;
    // 0x328a88: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x328A88u;
    {
        const bool branch_taken_0x328a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A88u;
        // 0x328a8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a88) {
            ctx->pc = 0x328AF4u;
            goto label_328af4;
        }
    }
    ctx->pc = 0x328A90u;
label_328a90:
    // 0x328a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a94: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x328A94u;
    SET_GPR_U32(ctx, 31, 0x328A9Cu);
    ctx->pc = 0x328A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A94u;
    // 0x328a98: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x328A94u, 0x328A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A9Cu;
label_328a9c:
    // 0x328a9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x328A9Cu;
    {
        const bool branch_taken_0x328a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a9c) {
            ctx->pc = 0x328AF0u;
            goto label_328af0;
        }
    }
    ctx->pc = 0x328AA4u;
label_328aa4:
    // 0x328aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328aa8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x328AA8u;
    SET_GPR_U32(ctx, 31, 0x328AB0u);
    ctx->pc = 0x328AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AA8u;
    // 0x328aac: 0x34440600  ori         $a0, $v0, 0x600 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x328AA8u, 0x328AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AB0u;
label_328ab0:
    // 0x328ab0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x328AB0u;
    {
        const bool branch_taken_0x328ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ab0) {
            ctx->pc = 0x328AF0u;
            goto label_328af0;
        }
    }
    ctx->pc = 0x328AB8u;
label_328ab8:
    // 0x328ab8: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x328AB8u;
    {
        const bool branch_taken_0x328ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x328ab8) {
            ctx->pc = 0x328ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328AB8u;
            // 0x328abc: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x328AE4u;
            goto label_328ae4;
        }
    }
    ctx->pc = 0x328AC0u;
    // 0x328ac0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x328AC0u;
    {
        const bool branch_taken_0x328ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ac0) {
            ctx->pc = 0x328AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328AC0u;
            // 0x328ac4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x328AD0u;
            goto label_328ad0;
        }
    }
    ctx->pc = 0x328AC8u;
    // 0x328ac8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x328AC8u;
    {
        const bool branch_taken_0x328ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ac8) {
            ctx->pc = 0x328AF0u;
            goto label_328af0;
        }
    }
    ctx->pc = 0x328AD0u;
label_328ad0:
    // 0x328ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ad4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x328AD4u;
    SET_GPR_U32(ctx, 31, 0x328ADCu);
    ctx->pc = 0x328AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AD4u;
    // 0x328ad8: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x328AD4u, 0x328ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ADCu;
label_328adc:
    // 0x328adc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328ADCu;
    {
        const bool branch_taken_0x328adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328adc) {
            ctx->pc = 0x328AF0u;
            goto label_328af0;
        }
    }
    ctx->pc = 0x328AE4u;
label_328ae4:
    // 0x328ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ae8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x328AE8u;
    SET_GPR_U32(ctx, 31, 0x328AF0u);
    ctx->pc = 0x328AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AE8u;
    // 0x328aec: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x328AE8u, 0x328AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AF0u;
label_328af0:
    // 0x328af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328af4:
    // 0x328af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328af8: 0x3e00008  jr          $ra
    ctx->pc = 0x328AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AF8u;
        // 0x328afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B00u;
    // 0x328b00: 0x3e00008  jr          $ra
    ctx->pc = 0x328B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B00u;
        // 0x328b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B08u;
    // 0x328b08: 0x0  nop
    ctx->pc = 0x328b08u;
    // NOP
    // 0x328b0c: 0x0  nop
    ctx->pc = 0x328b0cu;
    // NOP
    // 0x328b10: 0x94a300d4  lhu         $v1, 0xD4($a1)
    ctx->pc = 0x328b10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328b14: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x328b18: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x328b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x328B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B1Cu;
        // 0x328b20: 0xa4a300d4  sh          $v1, 0xD4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B24u;
    // 0x328b24: 0x0  nop
    ctx->pc = 0x328b24u;
    // NOP
    // 0x328b28: 0x0  nop
    ctx->pc = 0x328b28u;
    // NOP
    // 0x328b2c: 0x0  nop
    ctx->pc = 0x328b2cu;
    // NOP
    // 0x328b30: 0x94a300d4  lhu         $v1, 0xD4($a1)
    ctx->pc = 0x328b30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328b34: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x328b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x328b38: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x328b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x328B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B3Cu;
        // 0x328b40: 0xa4a300d4  sh          $v1, 0xD4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B44u;
    // 0x328b44: 0x0  nop
    ctx->pc = 0x328b44u;
    // NOP
    // 0x328b48: 0x0  nop
    ctx->pc = 0x328b48u;
    // NOP
    // 0x328b4c: 0x0  nop
    ctx->pc = 0x328b4cu;
    // NOP
    // 0x328b50: 0x94a300d4  lhu         $v1, 0xD4($a1)
    ctx->pc = 0x328b50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328b54: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x328b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x328b58: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x328b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x328b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x328B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B5Cu;
        // 0x328b60: 0xa4a300d4  sh          $v1, 0xD4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B64u;
    // 0x328b64: 0x0  nop
    ctx->pc = 0x328b64u;
    // NOP
    // 0x328b68: 0x0  nop
    ctx->pc = 0x328b68u;
    // NOP
    // 0x328b6c: 0x0  nop
    ctx->pc = 0x328b6cu;
    // NOP
    // 0x328b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x328b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x328b74: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x328b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x328b78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x328b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x328b7c: 0x2407063c  addiu       $a3, $zero, 0x63C
    ctx->pc = 0x328b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1596));
    // 0x328b80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x328b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x328b84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x328b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x328b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x328b8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x328b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328b9c: 0x94a200d4  lhu         $v0, 0xD4($a1)
    ctx->pc = 0x328b9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x328ba0: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x328ba0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328ba4: 0x84920002  lh          $s2, 0x2($a0)
    ctx->pc = 0x328ba4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x328ba8: 0x84910004  lh          $s1, 0x4($a0)
    ctx->pc = 0x328ba8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x328bac: 0x3042fe7f  andi        $v0, $v0, 0xFE7F
    ctx->pc = 0x328bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65151);
    // 0x328bb0: 0xa4a200d4  sh          $v0, 0xD4($a1)
    ctx->pc = 0x328bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x328bb4: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x328bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x328bb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x328bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x328bbc: 0x2484adf0  addiu       $a0, $a0, -0x5210
    ctx->pc = 0x328bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946288));
    // 0x328bc0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x328BC0u;
    SET_GPR_U32(ctx, 31, 0x328BC8u);
    ctx->pc = 0x328BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BC0u;
    // 0x328bc4: 0x24a543b0  addiu       $a1, $a1, 0x43B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x328BC0u, 0x328BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BC8u;
label_328bc8:
    // 0x328bc8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x328bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x328bcc: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x328bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x328bd0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x328bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x328bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x328BD4u;
    {
        const bool branch_taken_0x328bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BD4u;
        // 0x328bd8: 0xa6110002  sh          $s1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bd4) {
            ctx->pc = 0x328BE4u;
            goto label_328be4;
        }
    }
    ctx->pc = 0x328BDCu;
    // 0x328bdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x328BDCu;
    {
        const bool branch_taken_0x328bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BDCu;
        // 0x328be0: 0x968400da  lhu         $a0, 0xDA($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 218)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bdc) {
            ctx->pc = 0x328C10u;
            goto label_328c10;
        }
    }
    ctx->pc = 0x328BE4u;
label_328be4:
    // 0x328be4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x328be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x328be8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x328be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x328bec: 0x8c644154  lw          $a0, 0x4154($v1)
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16724)));
    // 0x328bf0: 0x90454172  lbu         $a1, 0x4172($v0)
    ctx->pc = 0x328bf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16754)));
    // 0x328bf4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x328bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x328bf8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x328bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x328bfc: 0x90474171  lbu         $a3, 0x4171($v0)
    ctx->pc = 0x328bfcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16753)));
    // 0x328c00: 0xc057aa8  jal         func_15EAA0
    ctx->pc = 0x328C00u;
    SET_GPR_U32(ctx, 31, 0x328C08u);
    ctx->pc = 0x328C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C00u;
    // 0x328c04: 0x90664175  lbu         $a2, 0x4175($v1) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16757)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EAA0u, 0x328C00u, 0x328C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C08u;
label_328c08:
    // 0x328c08: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x328c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x328c0c: 0x968400da  lhu         $a0, 0xDA($s4)
    ctx->pc = 0x328c0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 218)));
label_328c10:
    // 0x328c10: 0xc0c8d3c  jal         func_3234F0
    ctx->pc = 0x328C10u;
    SET_GPR_U32(ctx, 31, 0x328C18u);
    ctx->pc = 0x328C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C10u;
    // 0x328c14: 0x968500de  lhu         $a1, 0xDE($s4) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 222)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234F0u, 0x328C10u, 0x328C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C18u;
label_328c18:
    // 0x328c18: 0xc067134  jal         func_19C4D0
    ctx->pc = 0x328C18u;
    SET_GPR_U32(ctx, 31, 0x328C20u);
    ctx->pc = 0x328C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C18u;
    // 0x328c1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C4D0u, 0x328C18u, 0x328C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C20u;
label_328c20:
    // 0x328c20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x328c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328c24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x328c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328c28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x328c28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328c2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328c30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x328C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C3Cu;
        // 0x328c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C44u;
    // 0x328c44: 0x0  nop
    ctx->pc = 0x328c44u;
    // NOP
    // 0x328c48: 0x0  nop
    ctx->pc = 0x328c48u;
    // NOP
    // 0x328c4c: 0x0  nop
    ctx->pc = 0x328c4cu;
    // NOP
    // 0x328c50: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x328c50u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x328c54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328c58: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x328c58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x328c5c: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x328c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x328c60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x328c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x328c64: 0x3e00008  jr          $ra
    ctx->pc = 0x328C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C64u;
        // 0x328c68: 0xaca30138  sw          $v1, 0x138($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C6Cu;
    // 0x328c6c: 0x0  nop
    ctx->pc = 0x328c6cu;
    // NOP
    // 0x328c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328c7c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x328C7Cu;
    SET_GPR_U32(ctx, 31, 0x328C84u);
    ctx->pc = 0x328C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C7Cu;
    // 0x328c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x328C7Cu, 0x328C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C84u;
label_328c84:
    // 0x328c84: 0xc055684  jal         func_155A10
    ctx->pc = 0x328C84u;
    SET_GPR_U32(ctx, 31, 0x328C8Cu);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x328C84u, 0x328C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C8Cu;
label_328c8c:
    // 0x328c8c: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x328C8Cu;
    SET_GPR_U32(ctx, 31, 0x328C94u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x328C8Cu, 0x328C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C94u;
label_328c94:
    // 0x328c94: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x328C94u;
    SET_GPR_U32(ctx, 31, 0x328C9Cu);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x328C94u, 0x328C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C9Cu;
label_328c9c:
    // 0x328c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x328c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ca4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x328CA4u;
    SET_GPR_U32(ctx, 31, 0x328CACu);
    ctx->pc = 0x328CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CA4u;
    // 0x328ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x328CA4u, 0x328CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CACu;
label_328cac:
    // 0x328cac: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x328CACu;
    SET_GPR_U32(ctx, 31, 0x328CB4u);
    ctx->pc = 0x328CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CACu;
    // 0x328cb0: 0x24040307  addiu       $a0, $zero, 0x307 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x328CACu, 0x328CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CB4u;
label_328cb4:
    // 0x328cb4: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x328CB4u;
    SET_GPR_U32(ctx, 31, 0x328CBCu);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x328CB4u, 0x328CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CBCu;
label_328cbc:
    // 0x328cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cc0: 0xc05da28  jal         func_1768A0
    ctx->pc = 0x328CC0u;
    SET_GPR_U32(ctx, 31, 0x328CC8u);
    ctx->pc = 0x328CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CC0u;
    // 0x328cc4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768A0u, 0x328CC0u, 0x328CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CC8u;
label_328cc8:
    // 0x328cc8: 0xc05e114  jal         func_178450
    ctx->pc = 0x328CC8u;
    SET_GPR_U32(ctx, 31, 0x328CD0u);
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x328CC8u, 0x328CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CD0u;
label_328cd0:
    // 0x328cd0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x328cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x328cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cd8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x328CD8u;
    SET_GPR_U32(ctx, 31, 0x328CE0u);
    ctx->pc = 0x328CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CD8u;
    // 0x328cdc: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x328CD8u, 0x328CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CE0u;
label_328ce0:
    // 0x328ce0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x328ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x328ce4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x328ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x328ce8: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x328ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x328cec: 0xac60a228  sw          $zero, -0x5DD8($v1)
    ctx->pc = 0x328cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 0));
    // 0x328cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x328CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CF8u;
        // 0x328cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D00u;
    // 0x328d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328d04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x328d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x328d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328d10: 0x8c63a228  lw          $v1, -0x5DD8($v1)
    ctx->pc = 0x328d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943272)));
    // 0x328d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d18: 0x2c6100c9  sltiu       $at, $v1, 0xC9
    ctx->pc = 0x328d18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x328d1c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x328D1Cu;
    {
        const bool branch_taken_0x328d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x328D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D1Cu;
        // 0x328d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d1c) {
            ctx->pc = 0x328D30u;
            goto label_328d30;
        }
    }
    ctx->pc = 0x328D24u;
    // 0x328d24: 0xc05da4c  jal         func_176930
    ctx->pc = 0x328D24u;
    SET_GPR_U32(ctx, 31, 0x328D2Cu);
    ctx->pc = 0x176930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176930u, 0x328D24u, 0x328D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D2Cu;
label_328d2c:
    // 0x328d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x328d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328d30:
    // 0x328d30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x328d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x328d34: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x328d34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
    // 0x328d38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x328D38u;
    {
        const bool branch_taken_0x328d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328d38) {
            ctx->pc = 0x328D48u;
            goto label_328d48;
        }
    }
    ctx->pc = 0x328D40u;
    // 0x328d40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x328D40u;
    {
        const bool branch_taken_0x328d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d40) {
            ctx->pc = 0x328D60u;
            goto label_328d60;
        }
    }
    ctx->pc = 0x328D48u;
label_328d48:
    // 0x328d48: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x328d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x328d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d50: 0xc055768  jal         func_155DA0
    ctx->pc = 0x328D50u;
    SET_GPR_U32(ctx, 31, 0x328D58u);
    ctx->pc = 0x328D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D50u;
    // 0x328d54: 0x24848da0  addiu       $a0, $a0, -0x7260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x328D50u, 0x328D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D58u;
label_328d58:
    // 0x328d58: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x328D58u;
    SET_GPR_U32(ctx, 31, 0x328D60u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x328D58u, 0x328D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D60u;
label_328d60:
    // 0x328d60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x328d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x328d64: 0x8063b578  lb          $v1, -0x4A88($v1)
    ctx->pc = 0x328d64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948216)));
    // 0x328d68: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x328D68u;
    {
        const bool branch_taken_0x328d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328d68) {
            ctx->pc = 0x328D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328D68u;
            // 0x328d6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328D88u;
            goto label_328d88;
        }
    }
    ctx->pc = 0x328D70u;
    // 0x328d70: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x328d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x328d74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x328d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x328d78: 0x8c84a228  lw          $a0, -0x5DD8($a0)
    ctx->pc = 0x328d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943272)));
    // 0x328d7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x328d80: 0xac64a228  sw          $a0, -0x5DD8($v1)
    ctx->pc = 0x328d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943272), GPR_U32(ctx, 4));
    // 0x328d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328d88:
    // 0x328d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x328D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D8Cu;
        // 0x328d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D94u;
    // 0x328d94: 0x0  nop
    ctx->pc = 0x328d94u;
    // NOP
    // 0x328d98: 0x0  nop
    ctx->pc = 0x328d98u;
    // NOP
    // 0x328d9c: 0x0  nop
    ctx->pc = 0x328d9cu;
    // NOP
    // 0x328da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328dac: 0xc05e118  jal         func_178460
    ctx->pc = 0x328DACu;
    SET_GPR_U32(ctx, 31, 0x328DB4u);
    ctx->pc = 0x328DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DACu;
    // 0x328db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x328DACu, 0x328DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DB4u;
label_328db4:
    // 0x328db4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x328db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x328db8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x328db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x328dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x328DBCu;
    {
        const bool branch_taken_0x328dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328dbc) {
            ctx->pc = 0x328DCCu;
            goto label_328dcc;
        }
    }
    ctx->pc = 0x328DC4u;
    // 0x328dc4: 0xc05e974  jal         func_17A5D0
    ctx->pc = 0x328DC4u;
    SET_GPR_U32(ctx, 31, 0x328DCCu);
    ctx->pc = 0x17A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D0u, 0x328DC4u, 0x328DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DCCu;
label_328dcc:
    // 0x328dcc: 0xc05e118  jal         func_178460
    ctx->pc = 0x328DCCu;
    SET_GPR_U32(ctx, 31, 0x328DD4u);
    ctx->pc = 0x178460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178460u, 0x328DCCu, 0x328DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DD4u;
label_328dd4:
    // 0x328dd4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x328dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x328dd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x328dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x328ddc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x328ddcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x328de0: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x328DE0u;
    {
        const bool branch_taken_0x328de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x328de0) {
            ctx->pc = 0x328DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328DE0u;
            // 0x328de4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E04u;
            goto label_328e04;
        }
    }
    ctx->pc = 0x328DE8u;
    // 0x328de8: 0xc055684  jal         func_155A10
    ctx->pc = 0x328DE8u;
    SET_GPR_U32(ctx, 31, 0x328DF0u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x328DE8u, 0x328DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DF0u;
label_328df0:
    // 0x328df0: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x328df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x328df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328df8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x328DF8u;
    SET_GPR_U32(ctx, 31, 0x328E00u);
    ctx->pc = 0x328DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DF8u;
    // 0x328dfc: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x328DF8u, 0x328E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E00u;
label_328e00:
    // 0x328e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328e04:
    // 0x328e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328e08: 0x3e00008  jr          $ra
    ctx->pc = 0x328E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E08u;
        // 0x328e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328E10u;
    // 0x328e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e28: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x328E28u;
    SET_GPR_U32(ctx, 31, 0x328E30u);
    ctx->pc = 0x328E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E28u;
    // 0x328e2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x328E28u, 0x328E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E30u;
label_328e30:
    // 0x328e30: 0xc055630  jal         func_1558C0
    ctx->pc = 0x328E30u;
    SET_GPR_U32(ctx, 31, 0x328E38u);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x328E30u, 0x328E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E38u;
label_328e38:
    // 0x328e38: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x328E38u;
    SET_GPR_U32(ctx, 31, 0x328E40u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x328E38u, 0x328E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E40u;
label_328e40:
    // 0x328e40: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x328E40u;
    SET_GPR_U32(ctx, 31, 0x328E48u);
    ctx->pc = 0x328E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E40u;
    // 0x328e44: 0x24040306  addiu       $a0, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x328E40u, 0x328E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E48u;
label_328e48:
    // 0x328e48: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x328e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x328e4c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x328e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x328e50: 0x24848f50  addiu       $a0, $a0, -0x70B0
    ctx->pc = 0x328e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938448));
    // 0x328e54: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x328e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
    // 0x328e58: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x328e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x328e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e60: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x328E60u;
    SET_GPR_U32(ctx, 31, 0x328E68u);
    ctx->pc = 0x328E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E60u;
    // 0x328e64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x328E60u, 0x328E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E68u;
label_328e68:
    // 0x328e68: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328e6c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x328e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x328e70: 0xac60f058  sw          $zero, -0xFA8($v1)
    ctx->pc = 0x328e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 0));
    // 0x328e74: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x328E74u;
    SET_GPR_U32(ctx, 31, 0x328E7Cu);
    ctx->pc = 0x328E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E74u;
    // 0x328e78: 0xa040f060  sb          $zero, -0xFA0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294963296), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x328E74u, 0x328E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E7Cu;
label_328e7c:
    // 0x328e7c: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x328e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x328e80: 0xc0558d0  jal         func_156340
    ctx->pc = 0x328E80u;
    SET_GPR_U32(ctx, 31, 0x328E88u);
    ctx->pc = 0x328E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E80u;
    // 0x328e84: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x328E80u, 0x328E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E88u;
label_328e88:
    // 0x328e88: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x328e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x328e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e90: 0xc055768  jal         func_155DA0
    ctx->pc = 0x328E90u;
    SET_GPR_U32(ctx, 31, 0x328E98u);
    ctx->pc = 0x328E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E90u;
    // 0x328e94: 0x24848eb0  addiu       $a0, $a0, -0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x328E90u, 0x328E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E98u;
label_328e98:
    // 0x328e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x328EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EA0u;
        // 0x328ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328EA8u;
    // 0x328ea8: 0x0  nop
    ctx->pc = 0x328ea8u;
    // NOP
    // 0x328eac: 0x0  nop
    ctx->pc = 0x328eacu;
    // NOP
    // 0x328eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328eb4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328ec0: 0x9063f060  lbu         $v1, -0xFA0($v1)
    ctx->pc = 0x328ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963296)));
    // 0x328ec4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328EC4u;
    {
        const bool branch_taken_0x328ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EC4u;
        // 0x328ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ec4) {
            ctx->pc = 0x328EE4u;
            goto label_328ee4;
        }
    }
    ctx->pc = 0x328ECCu;
    // 0x328ecc: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x328ECCu;
    SET_GPR_U32(ctx, 31, 0x328ED4u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x328ECCu, 0x328ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ED4u;
label_328ed4:
    // 0x328ed4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x328ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x328ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328edc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x328EDCu;
    SET_GPR_U32(ctx, 31, 0x328EE4u);
    ctx->pc = 0x328EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EDCu;
    // 0x328ee0: 0x24848f10  addiu       $a0, $a0, -0x70F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x328EDCu, 0x328EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EE4u;
label_328ee4:
    // 0x328ee4: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x328ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x328ee8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328eec: 0x8484f068  lh          $a0, -0xF98($a0)
    ctx->pc = 0x328eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963304)));
    // 0x328ef0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x328ef4: 0xa464f068  sh          $a0, -0xF98($v1)
    ctx->pc = 0x328ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963304), (uint16_t)GPR_U32(ctx, 4));
    // 0x328ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328f00: 0x3e00008  jr          $ra
    ctx->pc = 0x328F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F00u;
        // 0x328f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328F08u;
    // 0x328f08: 0x0  nop
    ctx->pc = 0x328f08u;
    // NOP
    // 0x328f0c: 0x0  nop
    ctx->pc = 0x328f0cu;
    // NOP
    // 0x328f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328f14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x328f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x328f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328f1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x328f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x328f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f28: 0xc055650  jal         func_155940
    ctx->pc = 0x328F28u;
    SET_GPR_U32(ctx, 31, 0x328F30u);
    ctx->pc = 0x328F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F28u;
    // 0x328f2c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x328F28u, 0x328F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F30u;
label_328f30:
    // 0x328f30: 0xc0ca468  jal         func_3291A0
    ctx->pc = 0x328F30u;
    SET_GPR_U32(ctx, 31, 0x328F38u);
    ctx->pc = 0x3291A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291A0u, 0x328F30u, 0x328F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F38u;
label_328f38:
    // 0x328f38: 0xc055770  jal         func_155DC0
    ctx->pc = 0x328F38u;
    SET_GPR_U32(ctx, 31, 0x328F40u);
    ctx->pc = 0x328F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F38u;
    // 0x328f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x328F38u, 0x328F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F40u;
label_328f40:
    // 0x328f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328f48: 0x3e00008  jr          $ra
    ctx->pc = 0x328F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F48u;
        // 0x328f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328F50u;
    // 0x328f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328f54: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x328f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x328f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328f60: 0xc4601620  lwc1        $f0, 0x1620($v1)
    ctx->pc = 0x328f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f68: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x328f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x328f6c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328f70: 0x8c66f058  lw          $a2, -0xFA8($v1)
    ctx->pc = 0x328f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963288)));
    // 0x328f74: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x328f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x328f78: 0x10c30040  beq         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x328F78u;
    {
        const bool branch_taken_0x328f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x328F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F78u;
        // 0x328f7c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f78) {
            ctx->pc = 0x32907Cu;
            goto label_32907c;
        }
    }
    ctx->pc = 0x328F80u;
    // 0x328f80: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x328f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x328f84: 0x10c30035  beq         $a2, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x328F84u;
    {
        const bool branch_taken_0x328f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x328f84) {
            ctx->pc = 0x32905Cu;
            goto label_32905c;
        }
    }
    ctx->pc = 0x328F8Cu;
    // 0x328f8c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x328f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x328f90: 0x10c50027  beq         $a2, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x328F90u;
    {
        const bool branch_taken_0x328f90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x328f90) {
            ctx->pc = 0x329030u;
            goto label_329030;
        }
    }
    ctx->pc = 0x328F98u;
    // 0x328f98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x328f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x328f9c: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x328F9Cu;
    {
        const bool branch_taken_0x328f9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x328f9c) {
            ctx->pc = 0x329018u;
            goto label_329018;
        }
    }
    ctx->pc = 0x328FA4u;
    // 0x328fa4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x328fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x328fa8: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x328FA8u;
    {
        const bool branch_taken_0x328fa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x328fa8) {
            ctx->pc = 0x328FE0u;
            goto label_328fe0;
        }
    }
    ctx->pc = 0x328FB0u;
    // 0x328fb0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x328FB0u;
    {
        const bool branch_taken_0x328fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x328fb0) {
            ctx->pc = 0x328FC0u;
            goto label_328fc0;
        }
    }
    ctx->pc = 0x328FB8u;
    // 0x328fb8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x328FB8u;
    {
        const bool branch_taken_0x328fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FB8u;
        // 0x328fbc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fb8) {
            ctx->pc = 0x3290E4u;
            goto label_3290e4;
        }
    }
    ctx->pc = 0x328FC0u;
label_328fc0:
    // 0x328fc0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328fc4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x328fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x328fc8: 0xac60f080  sw          $zero, -0xF80($v1)
    ctx->pc = 0x328fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963328), GPR_U32(ctx, 0));
    // 0x328fcc: 0xc0c880c  jal         func_322030
    ctx->pc = 0x328FCCu;
    SET_GPR_U32(ctx, 31, 0x328FD4u);
    ctx->pc = 0x328FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FCCu;
    // 0x328fd0: 0xac40f084  sw          $zero, -0xF7C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963332), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x328FCCu, 0x328FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FD4u;
label_328fd4:
    // 0x328fd4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x328fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x328fd8: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x328fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x328fdc: 0xac43f058  sw          $v1, -0xFA8($v0)
    ctx->pc = 0x328fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963288), GPR_U32(ctx, 3));
label_328fe0:
    // 0x328fe0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x328fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x328fe4: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x328FE4u;
    SET_GPR_U32(ctx, 31, 0x328FECu);
    ctx->pc = 0x328FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FE4u;
    // 0x328fe8: 0x8c441610  lw          $a0, 0x1610($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x328FE4u, 0x328FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FECu;
label_328fec:
    // 0x328fec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x328fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x328ff0: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x328FF0u;
    SET_GPR_U32(ctx, 31, 0x328FF8u);
    ctx->pc = 0x328FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FF0u;
    // 0x328ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x328FF0u, 0x328FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FF8u;
label_328ff8:
    // 0x328ff8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x328ffc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x328ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x329000: 0xc063d08  jal         func_18F420
    ctx->pc = 0x329000u;
    SET_GPR_U32(ctx, 31, 0x329008u);
    ctx->pc = 0x329004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329000u;
    // 0x329004: 0xac62f080  sw          $v0, -0xF80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x329000u, 0x329008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329008u;
label_329008:
    // 0x329008: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x329008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32900c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329010: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x329010u;
    {
        const bool branch_taken_0x329010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329010u;
        // 0x329014: 0xac64f058  sw          $a0, -0xFA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329010) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x329018u;
label_329018:
    // 0x329018: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32901c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32901cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329020: 0x8c44f080  lw          $a0, -0xF80($v0)
    ctx->pc = 0x329020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963328)));
    // 0x329024: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x329024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x329028: 0xac64f078  sw          $a0, -0xF88($v1)
    ctx->pc = 0x329028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963320), GPR_U32(ctx, 4));
    // 0x32902c: 0xac45f058  sw          $a1, -0xFA8($v0)
    ctx->pc = 0x32902cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963288), GPR_U32(ctx, 5));
label_329030:
    // 0x329030: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x329030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x329034: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x329034u;
    SET_GPR_U32(ctx, 31, 0x32903Cu);
    ctx->pc = 0x329038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329034u;
    // 0x329038: 0x24841618  addiu       $a0, $a0, 0x1618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x329034u, 0x32903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32903Cu;
label_32903c:
    // 0x32903c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32903Cu;
    SET_GPR_U32(ctx, 31, 0x329044u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32903Cu, 0x329044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329044u;
label_329044:
    // 0x329044: 0xc063d18  jal         func_18F460
    ctx->pc = 0x329044u;
    SET_GPR_U32(ctx, 31, 0x32904Cu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x329044u, 0x32904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32904Cu;
label_32904c:
    // 0x32904c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x32904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x329050: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329054: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x329054u;
    {
        const bool branch_taken_0x329054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329054u;
        // 0x329058: 0xac64f058  sw          $a0, -0xFA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329054) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x32905Cu;
label_32905c:
    // 0x32905c: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x32905Cu;
    SET_GPR_U32(ctx, 31, 0x329064u);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x32905Cu, 0x329064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329064u;
label_329064:
    // 0x329064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x329064u;
    {
        const bool branch_taken_0x329064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329064) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x32906Cu;
    // 0x32906c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x32906cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329070: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329074: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x329074u;
    {
        const bool branch_taken_0x329074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329074u;
        // 0x329078: 0xac64f058  sw          $a0, -0xFA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329074) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x32907Cu;
label_32907c:
    // 0x32907c: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x32907Cu;
    SET_GPR_U32(ctx, 31, 0x329084u);
    ctx->pc = 0x329080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32907Cu;
    // 0x329080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4B0u, 0x32907Cu, 0x329084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329084u;
label_329084:
    // 0x329084: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x329084u;
    {
        const bool branch_taken_0x329084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329084) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x32908Cu;
    // 0x32908c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x329090: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x329094: 0x8c44bb70  lw          $a0, -0x4490($v0)
    ctx->pc = 0x329094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949744)));
    // 0x329098: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x329098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x32909c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x32909cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3290a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3290a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290a4: 0x24c61618  addiu       $a2, $a2, 0x1618
    ctx->pc = 0x3290a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5656));
    // 0x3290a8: 0x24e70e00  addiu       $a3, $a3, 0xE00
    ctx->pc = 0x3290a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3584));
    // 0x3290ac: 0x25080e10  addiu       $t0, $t0, 0xE10
    ctx->pc = 0x3290acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3600));
    // 0x3290b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3290b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290b4: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x3290B4u;
    SET_GPR_U32(ctx, 31, 0x3290BCu);
    ctx->pc = 0x3290B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290B4u;
    // 0x3290b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x3290B4u, 0x3290BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290BCu;
label_3290bc:
    // 0x3290bc: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x3290bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x3290c0: 0xc063d18  jal         func_18F460
    ctx->pc = 0x3290C0u;
    SET_GPR_U32(ctx, 31, 0x3290C8u);
    ctx->pc = 0x3290C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290C0u;
    // 0x3290c4: 0xac40f058  sw          $zero, -0xFA8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x3290C0u, 0x3290C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290C8u;
label_3290c8:
    // 0x3290c8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3290c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3290cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3290ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290d0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3290D0u;
    SET_GPR_U32(ctx, 31, 0x3290D8u);
    ctx->pc = 0x3290D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290D0u;
    // 0x3290d4: 0x248490f0  addiu       $a0, $a0, -0x6F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x3290D0u, 0x3290D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290D8u;
label_3290d8:
    // 0x3290d8: 0xc052f0c  jal         func_14BC30
    ctx->pc = 0x3290D8u;
    SET_GPR_U32(ctx, 31, 0x3290E0u);
    ctx->pc = 0x3290DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290D8u;
    // 0x3290dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC30u, 0x3290D8u, 0x3290E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290E0u;
label_3290e0:
    // 0x3290e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3290e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3290e4:
    // 0x3290e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3290e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3290e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3290E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3290ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290E8u;
        // 0x3290ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3290E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3290F0u;
    // 0x3290f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3290f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3290f4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3290f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3290f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3290fc: 0x8c64f058  lw          $a0, -0xFA8($v1)
    ctx->pc = 0x3290fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963288)));
    // 0x329100: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329104: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x329104u;
    {
        const bool branch_taken_0x329104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329104) {
            ctx->pc = 0x329108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329104u;
            // 0x329108: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329180u;
            goto label_329180;
        }
    }
    ctx->pc = 0x32910Cu;
    // 0x32910c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329110: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x329110u;
    {
        const bool branch_taken_0x329110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329110) {
            ctx->pc = 0x329114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329110u;
            // 0x329114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329160u;
            goto label_329160;
        }
    }
    ctx->pc = 0x329118u;
    // 0x329118: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x329118u;
    {
        const bool branch_taken_0x329118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329118) {
            ctx->pc = 0x32911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329118u;
            // 0x32911c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329128u;
            goto label_329128;
        }
    }
    ctx->pc = 0x329120u;
    // 0x329120: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x329120u;
    {
        const bool branch_taken_0x329120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329120u;
        // 0x329124: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329120) {
            ctx->pc = 0x32918Cu;
            goto label_32918c;
        }
    }
    ctx->pc = 0x329128u;
label_329128:
    // 0x329128: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x329128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32912c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32912cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329130: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x329130u;
    SET_GPR_U32(ctx, 31, 0x329138u);
    ctx->pc = 0x329134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329130u;
    // 0x329134: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x329130u, 0x329138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329138u;
label_329138:
    // 0x329138: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x329138u;
    SET_GPR_U32(ctx, 31, 0x329140u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x329138u, 0x329140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329140u;
label_329140:
    // 0x329140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329148: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x329148u;
    SET_GPR_U32(ctx, 31, 0x329150u);
    ctx->pc = 0x32914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329148u;
    // 0x32914c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x329148u, 0x329150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329150u;
label_329150:
    // 0x329150: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329154: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x329158u;
    {
        const bool branch_taken_0x329158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329158u;
        // 0x32915c: 0xac64f058  sw          $a0, -0xFA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329158) {
            ctx->pc = 0x329188u;
            goto label_329188;
        }
    }
    ctx->pc = 0x329160u;
label_329160:
    // 0x329160: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x329160u;
    SET_GPR_U32(ctx, 31, 0x329168u);
    ctx->pc = 0x329164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329160u;
    // 0x329164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x329160u, 0x329168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329168u;
label_329168:
    // 0x329168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x329168u;
    {
        const bool branch_taken_0x329168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329168) {
            ctx->pc = 0x329188u;
            goto label_329188;
        }
    }
    ctx->pc = 0x329170u;
    // 0x329170: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329174: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329178u;
    {
        const bool branch_taken_0x329178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329178u;
        // 0x32917c: 0xac64f058  sw          $a0, -0xFA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329178) {
            ctx->pc = 0x329188u;
            goto label_329188;
        }
    }
    ctx->pc = 0x329180u;
label_329180:
    // 0x329180: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x329184: 0xa064f060  sb          $a0, -0xFA0($v1)
    ctx->pc = 0x329184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963296), (uint8_t)GPR_U32(ctx, 4));
label_329188:
    // 0x329188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32918c:
    // 0x32918c: 0x3e00008  jr          $ra
    ctx->pc = 0x32918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32918Cu;
        // 0x329190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329194u;
    // 0x329194: 0x0  nop
    ctx->pc = 0x329194u;
    // NOP
    // 0x329198: 0x0  nop
    ctx->pc = 0x329198u;
    // NOP
    // 0x32919c: 0x0  nop
    ctx->pc = 0x32919cu;
    // NOP
    if (ctx->pc == 0x32919cu) { ctx->pc = 0x3291a0u; }
}
