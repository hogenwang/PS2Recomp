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

// Function: sub_00222110
// Address: 0x222110 - 0x222910
void sub_00222110_0x222110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222110_0x222110");
#endif

    switch (ctx->pc) {
        case 0x222124u: goto label_222124;
        case 0x222140u: goto label_222140;
        case 0x222170u: goto label_222170;
        case 0x222180u: goto label_222180;
        case 0x222190u: goto label_222190;
        case 0x222198u: goto label_222198;
        case 0x2221a8u: goto label_2221a8;
        case 0x2221b0u: goto label_2221b0;
        case 0x2221ccu: goto label_2221cc;
        case 0x2221d8u: goto label_2221d8;
        case 0x2221dcu: goto label_2221dc;
        case 0x222200u: goto label_222200;
        case 0x222210u: goto label_222210;
        case 0x222218u: goto label_222218;
        case 0x222228u: goto label_222228;
        case 0x222230u: goto label_222230;
        case 0x222264u: goto label_222264;
        case 0x222274u: goto label_222274;
        case 0x222288u: goto label_222288;
        case 0x222298u: goto label_222298;
        case 0x2222a0u: goto label_2222a0;
        case 0x2222b0u: goto label_2222b0;
        case 0x2222b8u: goto label_2222b8;
        case 0x2222e0u: goto label_2222e0;
        case 0x2222f8u: goto label_2222f8;
        case 0x222304u: goto label_222304;
        case 0x22230cu: goto label_22230c;
        case 0x222330u: goto label_222330;
        case 0x222374u: goto label_222374;
        case 0x222384u: goto label_222384;
        case 0x22238cu: goto label_22238c;
        case 0x2223a4u: goto label_2223a4;
        case 0x2223a8u: goto label_2223a8;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223d4u: goto label_2223d4;
        case 0x2223dcu: goto label_2223dc;
        case 0x2223ecu: goto label_2223ec;
        case 0x2223f4u: goto label_2223f4;
        case 0x22241cu: goto label_22241c;
        case 0x222420u: goto label_222420;
        case 0x222444u: goto label_222444;
        case 0x222454u: goto label_222454;
        case 0x22245cu: goto label_22245c;
        case 0x22246cu: goto label_22246c;
        case 0x222474u: goto label_222474;
        case 0x222498u: goto label_222498;
        case 0x2224a8u: goto label_2224a8;
        case 0x2224c0u: goto label_2224c0;
        case 0x2224ccu: goto label_2224cc;
        case 0x2224f8u: goto label_2224f8;
        case 0x222508u: goto label_222508;
        case 0x222510u: goto label_222510;
        case 0x222520u: goto label_222520;
        case 0x222528u: goto label_222528;
        case 0x222530u: goto label_222530;
        case 0x22255cu: goto label_22255c;
        case 0x22257cu: goto label_22257c;
        case 0x2225c0u: goto label_2225c0;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225e8u: goto label_2225e8;
        case 0x222604u: goto label_222604;
        case 0x22260cu: goto label_22260c;
        case 0x222630u: goto label_222630;
        case 0x222638u: goto label_222638;
        case 0x222660u: goto label_222660;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226bcu: goto label_2226bc;
        case 0x2226f8u: goto label_2226f8;
        case 0x22270cu: goto label_22270c;
        case 0x222720u: goto label_222720;
        case 0x222784u: goto label_222784;
        case 0x222788u: goto label_222788;
        case 0x2227acu: goto label_2227ac;
        case 0x2227e8u: goto label_2227e8;
        case 0x222800u: goto label_222800;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x22287cu: goto label_22287c;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228f0u: goto label_2228f0;
        case 0x222904u: goto label_222904;
        default: break;
    }

    ctx->pc = 0x222110u;

label_222110:
    // 0x222110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x222118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22211c: 0xc088790  jal         func_221E40
    ctx->pc = 0x22211Cu;
    SET_GPR_U32(ctx, 31, 0x222124u);
    ctx->pc = 0x222120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22211Cu;
    // 0x222120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E40u, 0x22211Cu, 0x222124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222124u;
label_222124:
    // 0x222124: 0x8e0f0838  lw          $t7, 0x838($s0)
    ctx->pc = 0x222124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
    // 0x222128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22212c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222130: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x222130u;
    {
        const bool branch_taken_0x222130 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x222134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222130u;
        // 0x222134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222130) {
            ctx->pc = 0x222140u;
            goto label_222140;
        }
    }
    ctx->pc = 0x222138u;
    // 0x222138: 0xc089144  jal         func_224510
    ctx->pc = 0x222138u;
    SET_GPR_U32(ctx, 31, 0x222140u);
    ctx->pc = 0x22213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222138u;
    // 0x22213c: 0xae001048  sw          $zero, 0x1048($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222138u, 0x222140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222140u;
label_222140:
    // 0x222140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222144: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x222144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222148: 0x3e00008  jr          $ra
    ctx->pc = 0x222148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222148u;
        // 0x22214c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222150u;
    // 0x222150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22215c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222164: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x222164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x222168: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x222168u;
    SET_GPR_U32(ctx, 31, 0x222170u);
    ctx->pc = 0x22216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222168u;
    // 0x22216c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x222168u, 0x222170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222170u;
label_222170:
    // 0x222170: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x222174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222178: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x222178u;
    SET_GPR_U32(ctx, 31, 0x222180u);
    ctx->pc = 0x22217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222178u;
    // 0x22217c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x222178u, 0x222180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x222180u;
    {
        const bool branch_taken_0x222180 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222180u;
        // 0x222184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222180) {
            ctx->pc = 0x2221F4u;
            goto label_2221f4;
        }
    }
    ctx->pc = 0x222188u;
    // 0x222188: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222188u;
    SET_GPR_U32(ctx, 31, 0x222190u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222188u, 0x222190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222190u;
label_222190:
    // 0x222190: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222190u;
    SET_GPR_U32(ctx, 31, 0x222198u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222190u, 0x222198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222198u;
label_222198:
    // 0x222198: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22219c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221a0: 0xc089144  jal         func_224510
    ctx->pc = 0x2221A0u;
    SET_GPR_U32(ctx, 31, 0x2221A8u);
    ctx->pc = 0x2221A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221A0u;
    // 0x2221a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2221A0u, 0x2221A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221A8u;
label_2221a8:
    // 0x2221a8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2221A8u;
    SET_GPR_U32(ctx, 31, 0x2221B0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2221A8u, 0x2221B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221B0u;
label_2221b0:
    // 0x2221b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2221b4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2221b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2221b8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2221b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2221bc: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x2221c0: 0x25082d80  addiu       $t0, $t0, 0x2D80
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11648));
    // 0x2221c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2221c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221c8: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_2221cc:
    // 0x2221cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2221ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2221d0: 0xc089794  jal         func_225E50
    ctx->pc = 0x2221D0u;
    SET_GPR_U32(ctx, 31, 0x2221D8u);
    ctx->pc = 0x2221D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221D0u;
    // 0x2221d4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x2221D0u, 0x2221D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221D8u;
label_2221d8:
    // 0x2221d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2221d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2221dc:
    // 0x2221dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2221dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2221e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2221e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2221e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2221e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2221e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2221e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2221ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2221ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221ECu;
        // 0x2221f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2221ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2221F4u;
label_2221f4:
    // 0x2221f4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2221f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2221f8: 0xc0886fa  jal         func_221BE8
    ctx->pc = 0x2221F8u;
    SET_GPR_U32(ctx, 31, 0x222200u);
    ctx->pc = 0x2221FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221F8u;
    // 0x2221fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BE8u, 0x2221F8u, 0x222200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222200u;
label_222200:
    // 0x222200: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x222200u;
    {
        const bool branch_taken_0x222200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222200u;
        // 0x222204: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222200) {
            ctx->pc = 0x222250u;
            goto label_222250;
        }
    }
    ctx->pc = 0x222208u;
    // 0x222208: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222208u;
    SET_GPR_U32(ctx, 31, 0x222210u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222208u, 0x222210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222210u;
label_222210:
    // 0x222210: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222210u;
    SET_GPR_U32(ctx, 31, 0x222218u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222210u, 0x222218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222218u;
label_222218:
    // 0x222218: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22221c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222220: 0xc089144  jal         func_224510
    ctx->pc = 0x222220u;
    SET_GPR_U32(ctx, 31, 0x222228u);
    ctx->pc = 0x222224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222220u;
    // 0x222224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222220u, 0x222228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222228u;
label_222228:
    // 0x222228: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222228u;
    SET_GPR_U32(ctx, 31, 0x222230u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222228u, 0x222230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222230u;
label_222230:
    // 0x222230: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222234: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222238: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222238u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22223c: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x222240: 0x25082d98  addiu       $t0, $t0, 0x2D98
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11672));
    // 0x222244: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222248: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x222248u;
    {
        const bool branch_taken_0x222248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222248u;
        // 0x22224c: 0x24050171  addiu       $a1, $zero, 0x171 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222248) {
            ctx->pc = 0x2221CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2221cc;
        }
    }
    ctx->pc = 0x222250u;
label_222250:
    // 0x222250: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x222254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222258: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22225c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22225Cu;
    SET_GPR_U32(ctx, 31, 0x222264u);
    ctx->pc = 0x222260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22225Cu;
    // 0x222260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x22225Cu, 0x222264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222264u;
label_222264:
    // 0x222264: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x222264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222268: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x222268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x22226c: 0xc08a262  jal         func_228988
    ctx->pc = 0x22226Cu;
    SET_GPR_U32(ctx, 31, 0x222274u);
    ctx->pc = 0x222270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22226Cu;
    // 0x222270: 0xa22f0015  sb          $t7, 0x15($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x22226Cu, 0x222274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222274u;
label_222274:
    // 0x222274: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x222274u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x222278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22227c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x22227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x222280: 0xc0973ee  jal         func_25CFB8
    ctx->pc = 0x222280u;
    SET_GPR_U32(ctx, 31, 0x222288u);
    ctx->pc = 0x222284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222280u;
    // 0x222284: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB8u, 0x222280u, 0x222288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222288u;
label_222288:
    // 0x222288: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x222288u;
    {
        const bool branch_taken_0x222288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222288u;
        // 0x22228c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222288) {
            ctx->pc = 0x2222D8u;
            goto label_2222d8;
        }
    }
    ctx->pc = 0x222290u;
    // 0x222290: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222290u;
    SET_GPR_U32(ctx, 31, 0x222298u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222290u, 0x222298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222298u;
label_222298:
    // 0x222298: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222298u;
    SET_GPR_U32(ctx, 31, 0x2222A0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222298u, 0x2222A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222A0u;
label_2222a0:
    // 0x2222a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2222a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222a8: 0xc089144  jal         func_224510
    ctx->pc = 0x2222A8u;
    SET_GPR_U32(ctx, 31, 0x2222B0u);
    ctx->pc = 0x2222ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222A8u;
    // 0x2222ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2222A8u, 0x2222B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222B0u;
label_2222b0:
    // 0x2222b0: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2222B0u;
    SET_GPR_U32(ctx, 31, 0x2222B8u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2222B0u, 0x2222B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222B8u;
label_2222b8:
    // 0x2222b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2222b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2222bc: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2222bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2222c0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2222c4: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x2222c8: 0x25082db0  addiu       $t0, $t0, 0x2DB0
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11696));
    // 0x2222cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2222ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222d0: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x2222D0u;
    {
        const bool branch_taken_0x2222d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222D0u;
        // 0x2222d4: 0x24050182  addiu       $a1, $zero, 0x182 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222d0) {
            ctx->pc = 0x2221CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2221cc;
        }
    }
    ctx->pc = 0x2222D8u;
label_2222d8:
    // 0x2222d8: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2222D8u;
    SET_GPR_U32(ctx, 31, 0x2222E0u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x2222D8u, 0x2222E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222E0u;
label_2222e0:
    // 0x2222e0: 0xae200838  sw          $zero, 0x838($s1)
    ctx->pc = 0x2222e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 0));
    // 0x2222e4: 0x8e2f104c  lw          $t7, 0x104C($s1)
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4172)));
    // 0x2222e8: 0x55e00013  bnel        $t7, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2222E8u;
    {
        const bool branch_taken_0x2222e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2222e8) {
            ctx->pc = 0x2222ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2222E8u;
            // 0x2222ec: 0x8e2f1048  lw          $t7, 0x1048($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222338u;
            goto label_222338;
        }
    }
    ctx->pc = 0x2222F0u;
    // 0x2222f0: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x2222f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x2222f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2222f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2222f8:
    // 0x2222f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2222f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222fc: 0xc089144  jal         func_224510
    ctx->pc = 0x2222FCu;
    SET_GPR_U32(ctx, 31, 0x222304u);
    ctx->pc = 0x222300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222FCu;
    // 0x222300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2222FCu, 0x222304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222304u;
label_222304:
    // 0x222304: 0xc0990d8  jal         func_264360
    ctx->pc = 0x222304u;
    SET_GPR_U32(ctx, 31, 0x22230Cu);
    ctx->pc = 0x222308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222304u;
    // 0x222308: 0x9e240018  lwu         $a0, 0x18($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x222304u, 0x22230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22230Cu;
label_22230c:
    // 0x22230c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222310: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x222310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222314: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x222314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222318: 0x24842d70  addiu       $a0, $a0, 0x2D70
    ctx->pc = 0x222318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11632));
    // 0x22231c: 0x24e72dc8  addiu       $a3, $a3, 0x2DC8
    ctx->pc = 0x22231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11720));
    // 0x222320: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222324: 0x24050198  addiu       $a1, $zero, 0x198
    ctx->pc = 0x222324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x222328: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x222328u;
    SET_GPR_U32(ctx, 31, 0x222330u);
    ctx->pc = 0x22232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222328u;
    // 0x22232c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x222328u, 0x222330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222330u;
label_222330:
    // 0x222330: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2221DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2221dc;
        }
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0x15e0ffef  bnez        $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x222338u;
    {
        const bool branch_taken_0x222338 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222338) {
            ctx->pc = 0x2222F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2222f8;
        }
    }
    ctx->pc = 0x222340u;
    // 0x222340: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222344: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x222344u;
    {
        const bool branch_taken_0x222344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222344u;
        // 0x222348: 0xae2f1048  sw          $t7, 0x1048($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222344) {
            ctx->pc = 0x2222F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2222f8;
        }
    }
    ctx->pc = 0x22234Cu;
    // 0x22234c: 0x0  nop
    ctx->pc = 0x22234cu;
    // NOP
    // 0x222350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22235c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222364: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x222364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x222368: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x222368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22236c: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x22236Cu;
    SET_GPR_U32(ctx, 31, 0x222374u);
    ctx->pc = 0x222370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22236Cu;
    // 0x222370: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x22236Cu, 0x222374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222374u;
label_222374:
    // 0x222374: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x222378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22237c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x22237Cu;
    SET_GPR_U32(ctx, 31, 0x222384u);
    ctx->pc = 0x222380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22237Cu;
    // 0x222380: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x22237Cu, 0x222384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222384u;
label_222384:
    // 0x222384: 0xc09921a  jal         func_264868
    ctx->pc = 0x222384u;
    SET_GPR_U32(ctx, 31, 0x22238Cu);
    ctx->pc = 0x222388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222384u;
    // 0x222388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x222384u, 0x22238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22238Cu;
label_22238c:
    // 0x22238c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222390: 0x104f0055  beq         $v0, $t7, . + 4 + (0x55 << 2)
    ctx->pc = 0x222390u;
    {
        const bool branch_taken_0x222390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x222394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222390u;
        // 0x222394: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222390) {
            ctx->pc = 0x2224E8u;
            goto label_2224e8;
        }
    }
    ctx->pc = 0x222398u;
    // 0x222398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22239c: 0xc09921a  jal         func_264868
    ctx->pc = 0x22239Cu;
    SET_GPR_U32(ctx, 31, 0x2223A4u);
    ctx->pc = 0x2223A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22239Cu;
    // 0x2223a0: 0xa20f0015  sb          $t7, 0x15($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264868u, 0x22239Cu, 0x2223A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223A4u;
label_2223a4:
    // 0x2223a4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2223a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2223a8:
    // 0x2223a8: 0xc08a262  jal         func_228988
    ctx->pc = 0x2223A8u;
    SET_GPR_U32(ctx, 31, 0x2223B0u);
    ctx->pc = 0x2223ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A8u;
    // 0x2223ac: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2223A8u, 0x2223B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223B0u;
label_2223b0:
    // 0x2223b0: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2223b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2223b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2223b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2223bc: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x2223BCu;
    SET_GPR_U32(ctx, 31, 0x2223C4u);
    ctx->pc = 0x2223C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223BCu;
    // 0x2223c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x2223BCu, 0x2223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2223C4u;
    {
        const bool branch_taken_0x2223c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223C4u;
        // 0x2223c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223c4) {
            ctx->pc = 0x222438u;
            goto label_222438;
        }
    }
    ctx->pc = 0x2223CCu;
    // 0x2223cc: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2223CCu;
    SET_GPR_U32(ctx, 31, 0x2223D4u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x2223CCu, 0x2223D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D4u;
label_2223d4:
    // 0x2223d4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2223D4u;
    SET_GPR_U32(ctx, 31, 0x2223DCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2223D4u, 0x2223DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223DCu;
label_2223dc:
    // 0x2223dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2223e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2223e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223e4: 0xc089144  jal         func_224510
    ctx->pc = 0x2223E4u;
    SET_GPR_U32(ctx, 31, 0x2223ECu);
    ctx->pc = 0x2223E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223E4u;
    // 0x2223e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2223E4u, 0x2223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ECu;
label_2223ec:
    // 0x2223ec: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2223ECu;
    SET_GPR_U32(ctx, 31, 0x2223F4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2223ECu, 0x2223F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F4u;
label_2223f4:
    // 0x2223f4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2223f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2223f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2223fc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2223fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222400: 0x24842df0  addiu       $a0, $a0, 0x2DF0
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
    // 0x222404: 0x25082d80  addiu       $t0, $t0, 0x2D80
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11648));
    // 0x222408: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x222408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22240c: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    // 0x222410: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222414: 0xc089794  jal         func_225E50
    ctx->pc = 0x222414u;
    SET_GPR_U32(ctx, 31, 0x22241Cu);
    ctx->pc = 0x222418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222414u;
    // 0x222418: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x222414u, 0x22241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22241Cu;
label_22241c:
    // 0x22241c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222420:
    // 0x222420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22242c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222430: 0x3e00008  jr          $ra
    ctx->pc = 0x222430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222430u;
        // 0x222434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222438u;
label_222438:
    // 0x222438: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x222438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x22243c: 0xc0886fa  jal         func_221BE8
    ctx->pc = 0x22243Cu;
    SET_GPR_U32(ctx, 31, 0x222444u);
    ctx->pc = 0x222440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22243Cu;
    // 0x222440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BE8u, 0x22243Cu, 0x222444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222444u;
label_222444:
    // 0x222444: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222444) {
            ctx->pc = 0x2224A0u;
            goto label_2224a0;
        }
    }
    ctx->pc = 0x22244Cu;
    // 0x22244c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x22244Cu;
    SET_GPR_U32(ctx, 31, 0x222454u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x22244Cu, 0x222454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222454u;
label_222454:
    // 0x222454: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222454u;
    SET_GPR_U32(ctx, 31, 0x22245Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222454u, 0x22245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22245Cu;
label_22245c:
    // 0x22245c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22245cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222464: 0xc089144  jal         func_224510
    ctx->pc = 0x222464u;
    SET_GPR_U32(ctx, 31, 0x22246Cu);
    ctx->pc = 0x222468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222464u;
    // 0x222468: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222464u, 0x22246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22246Cu;
label_22246c:
    // 0x22246c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x22246Cu;
    SET_GPR_U32(ctx, 31, 0x222474u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x22246Cu, 0x222474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222474u;
label_222474:
    // 0x222474: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222478: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22247c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222480: 0x24842df0  addiu       $a0, $a0, 0x2DF0
    ctx->pc = 0x222480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
    // 0x222484: 0x24e72d98  addiu       $a3, $a3, 0x2D98
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11672));
    // 0x222488: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x222488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22248c: 0x240501d2  addiu       $a1, $zero, 0x1D2
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    // 0x222490: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x222490u;
    SET_GPR_U32(ctx, 31, 0x222498u);
    ctx->pc = 0x222494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222490u;
    // 0x222494: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x222490u, 0x222498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222498u;
label_222498:
    // 0x222498: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x222498u;
    {
        const bool branch_taken_0x222498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222498u;
        // 0x22249c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222498) {
            ctx->pc = 0x222420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222420;
        }
    }
    ctx->pc = 0x2224A0u;
label_2224a0:
    // 0x2224a0: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2224A0u;
    SET_GPR_U32(ctx, 31, 0x2224A8u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x2224A0u, 0x2224A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224A8u;
label_2224a8:
    // 0x2224a8: 0xae000838  sw          $zero, 0x838($s0)
    ctx->pc = 0x2224a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
    // 0x2224ac: 0x8e0f104c  lw          $t7, 0x104C($s0)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4172)));
    // 0x2224b0: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2224B0u;
    {
        const bool branch_taken_0x2224b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2224b0) {
            ctx->pc = 0x2224B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2224B0u;
            // 0x2224b4: 0x8e0f1048  lw          $t7, 0x1048($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2224D4u;
            goto label_2224d4;
        }
    }
    ctx->pc = 0x2224B8u;
    // 0x2224b8: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x2224b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    // 0x2224bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2224bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2224c0:
    // 0x2224c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2224c4: 0xc089144  jal         func_224510
    ctx->pc = 0x2224C4u;
    SET_GPR_U32(ctx, 31, 0x2224CCu);
    ctx->pc = 0x2224C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224C4u;
    // 0x2224c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2224C4u, 0x2224CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224CCu;
label_2224cc:
    // 0x2224cc: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x2224CCu;
    {
        const bool branch_taken_0x2224cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224CCu;
        // 0x2224d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224cc) {
            ctx->pc = 0x222420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222420;
        }
    }
    ctx->pc = 0x2224D4u;
label_2224d4:
    // 0x2224d4: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2224D4u;
    {
        const bool branch_taken_0x2224d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D4u;
        // 0x2224d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d4) {
            ctx->pc = 0x2224C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2224c0;
        }
    }
    ctx->pc = 0x2224DCu;
    // 0x2224dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2224dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224e0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x2224E0u;
    {
        const bool branch_taken_0x2224e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E0u;
        // 0x2224e4: 0xae0f1048  sw          $t7, 0x1048($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e0) {
            ctx->pc = 0x2224C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2224c0;
        }
    }
    ctx->pc = 0x2224E8u;
label_2224e8:
    // 0x2224e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2224e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224f0: 0xc098daa  jal         func_2636A8
    ctx->pc = 0x2224F0u;
    SET_GPR_U32(ctx, 31, 0x2224F8u);
    ctx->pc = 0x2224F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224F0u;
    // 0x2224f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2636A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2636A8u, 0x2224F0u, 0x2224F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2224F8u;
label_2224f8:
    // 0x2224f8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2224F8u;
    {
        const bool branch_taken_0x2224f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2224f8) {
            ctx->pc = 0x2224FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2224F8u;
            // 0x2224fc: 0x904e0008  lbu         $t6, 0x8($v0) (Delay Slot)
            SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222564u;
            goto label_222564;
        }
    }
    ctx->pc = 0x222500u;
    // 0x222500: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222500u;
    SET_GPR_U32(ctx, 31, 0x222508u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222500u, 0x222508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222508u;
label_222508:
    // 0x222508: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222508u;
    SET_GPR_U32(ctx, 31, 0x222510u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222508u, 0x222510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222510u;
label_222510:
    // 0x222510: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222518: 0xc089144  jal         func_224510
    ctx->pc = 0x222518u;
    SET_GPR_U32(ctx, 31, 0x222520u);
    ctx->pc = 0x22251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222518u;
    // 0x22251c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222518u, 0x222520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222520u;
label_222520:
    // 0x222520: 0xc097308  jal         func_25CC20
    ctx->pc = 0x222520u;
    SET_GPR_U32(ctx, 31, 0x222528u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x222520u, 0x222528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222528u;
    SET_GPR_U32(ctx, 31, 0x222530u);
    ctx->pc = 0x22252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222528u;
    // 0x22252c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222528u, 0x222530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222530u;
label_222530:
    // 0x222530: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222534: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222538: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22253c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222540: 0x24842df0  addiu       $a0, $a0, 0x2DF0
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
    // 0x222544: 0x25082e00  addiu       $t0, $t0, 0x2E00
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11776));
    // 0x222548: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x222548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22254c: 0x240501b8  addiu       $a1, $zero, 0x1B8
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x222550: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222554: 0xc089794  jal         func_225E50
    ctx->pc = 0x222554u;
    SET_GPR_U32(ctx, 31, 0x22255Cu);
    ctx->pc = 0x222558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222554u;
    // 0x222558: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x222554u, 0x22255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22255Cu;
label_22255c:
    // 0x22255c: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x22255Cu;
    {
        const bool branch_taken_0x22255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22255Cu;
        // 0x222560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22255c) {
            ctx->pc = 0x222420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222420;
        }
    }
    ctx->pc = 0x222564u;
label_222564:
    // 0x222564: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x222568: 0xa20e0015  sb          $t6, 0x15($s0)
    ctx->pc = 0x222568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 14));
    // 0x22256c: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x222570: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x222574: 0xc049c48  jal         func_127120
    ctx->pc = 0x222574u;
    SET_GPR_U32(ctx, 31, 0x22257Cu);
    ctx->pc = 0x222578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222574u;
    // 0x222578: 0x8de50000  lw          $a1, 0x0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x222574u, 0x22257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22257Cu;
label_22257c:
    // 0x22257c: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x22257Cu;
    {
        const bool branch_taken_0x22257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22257c) {
            ctx->pc = 0x2223A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2223a8;
        }
    }
    ctx->pc = 0x222584u;
    // 0x222584: 0x0  nop
    ctx->pc = 0x222584u;
    // NOP
    // 0x222588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22258c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x222590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222594: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x222594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22259c: 0x240501ea  addiu       $a1, $zero, 0x1EA
    ctx->pc = 0x22259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x2225a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2225a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2225a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2225a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225a8: 0x25f22e28  addiu       $s2, $t7, 0x2E28
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 11816));
    // 0x2225ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2225acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2225b0: 0x24e72e38  addiu       $a3, $a3, 0x2E38
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11832));
    // 0x2225b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2225b8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2225B8u;
    SET_GPR_U32(ctx, 31, 0x2225C0u);
    ctx->pc = 0x2225BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225B8u;
    // 0x2225bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2225B8u, 0x2225C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225C0u;
label_2225c0:
    // 0x2225c0: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x2225C0u;
    SET_GPR_U32(ctx, 31, 0x2225C8u);
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x2225C0u, 0x2225C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225C8u;
label_2225c8:
    // 0x2225c8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2225cc: 0x25effffd  addiu       $t7, $t7, -0x3
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967293));
    // 0x2225d0: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x2225d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2225d4: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2225D4u;
    {
        const bool branch_taken_0x2225d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2225d4) {
            ctx->pc = 0x222630u;
            goto label_222630;
        }
    }
    ctx->pc = 0x2225DCu;
    // 0x2225dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2225dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2225e0: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x2225E0u;
    SET_GPR_U32(ctx, 31, 0x2225E8u);
    ctx->pc = 0x2225E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225E0u;
    // 0x2225e4: 0xae001048  sw          $zero, 0x1048($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x2225E0u, 0x2225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225E8u;
label_2225e8:
    // 0x2225e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2225e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2225ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2225f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2225f4: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2225F4u;
    {
        const bool branch_taken_0x2225f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2225F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225F4u;
        // 0x2225f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225f4) {
            ctx->pc = 0x222654u;
            goto label_222654;
        }
    }
    ctx->pc = 0x2225FCu;
    // 0x2225fc: 0xc089144  jal         func_224510
    ctx->pc = 0x2225FCu;
    SET_GPR_U32(ctx, 31, 0x222604u);
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2225FCu, 0x222604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222604u;
label_222604:
    // 0x222604: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222604u;
    SET_GPR_U32(ctx, 31, 0x22260Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222604u, 0x22260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22260Cu;
label_22260c:
    // 0x22260c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222610: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222618: 0x25082e40  addiu       $t0, $t0, 0x2E40
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11840));
    // 0x22261c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x22261cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222620: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x222624: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222628: 0xc089794  jal         func_225E50
    ctx->pc = 0x222628u;
    SET_GPR_U32(ctx, 31, 0x222630u);
    ctx->pc = 0x22262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222628u;
    // 0x22262c: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x222628u, 0x222630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222630u;
label_222630:
    // 0x222630: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222630u;
    SET_GPR_U32(ctx, 31, 0x222638u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222630u, 0x222638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222638u;
label_222638:
    // 0x222638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22263c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x222648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22264c: 0x3e00008  jr          $ra
    ctx->pc = 0x22264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22264Cu;
        // 0x222650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222654u;
label_222654:
    // 0x222654: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x222654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222658: 0xc089144  jal         func_224510
    ctx->pc = 0x222658u;
    SET_GPR_U32(ctx, 31, 0x222660u);
    ctx->pc = 0x22265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222658u;
    // 0x22265c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222658u, 0x222660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222660u;
label_222660:
    // 0x222660: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x222660u;
    {
        const bool branch_taken_0x222660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222660) {
            ctx->pc = 0x222630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222630;
        }
    }
    ctx->pc = 0x222668u;
    // 0x222668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22266c: 0x240f0800  addiu       $t7, $zero, 0x800
    ctx->pc = 0x22266cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x222670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22267c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22267cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222684: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222688: 0x8c8d1044  lw          $t5, 0x1044($a0)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x22268c: 0x1ed7823  subu        $t7, $t7, $t5
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x222690: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x222690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222694: 0x20f702a  slt         $t6, $s0, $t7
    ctx->pc = 0x222694u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x222698: 0x1de0000d  bgtz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x222698u;
    {
        const bool branch_taken_0x222698 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x22269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222698u;
        // 0x22269c: 0x1ee800a  movz        $s0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222698) {
            ctx->pc = 0x2226D0u;
            goto label_2226d0;
        }
    }
    ctx->pc = 0x2226A0u;
    // 0x2226a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2226a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2226a4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2226a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2226a8: 0x24842e58  addiu       $a0, $a0, 0x2E58
    ctx->pc = 0x2226a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11864));
    // 0x2226ac: 0x24e72e68  addiu       $a3, $a3, 0x2E68
    ctx->pc = 0x2226acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11880));
    // 0x2226b0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2226B0u;
    SET_GPR_U32(ctx, 31, 0x2226B8u);
    ctx->pc = 0x2226B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226B0u;
    // 0x2226b4: 0x24050214  addiu       $a1, $zero, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2226B0u, 0x2226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226B8u;
label_2226b8:
    // 0x2226b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2226bc:
    // 0x2226bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2226c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2226c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2226c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2226c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2226c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2226C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2226CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226C8u;
        // 0x2226cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2226C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2226D0u;
label_2226d0:
    // 0x2226d0: 0x601000b  bgez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2226D0u;
    {
        const bool branch_taken_0x2226d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2226D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226D0u;
        // 0x2226d4: 0x8d2021  addu        $a0, $a0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226d0) {
            ctx->pc = 0x222700u;
            goto label_222700;
        }
    }
    ctx->pc = 0x2226D8u;
    // 0x2226d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2226dc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2226dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2226e0: 0x24842e58  addiu       $a0, $a0, 0x2E58
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11864));
    // 0x2226e4: 0x24e72e88  addiu       $a3, $a3, 0x2E88
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11912));
    // 0x2226e8: 0x24050219  addiu       $a1, $zero, 0x219
    ctx->pc = 0x2226e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    // 0x2226ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2226ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2226f0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2226F0u;
    SET_GPR_U32(ctx, 31, 0x2226F8u);
    ctx->pc = 0x2226F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2226F0u;
    // 0x2226f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2226F0u, 0x2226F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226F8u;
label_2226f8:
    // 0x2226f8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2226F8u;
    {
        const bool branch_taken_0x2226f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2226FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226F8u;
        // 0x2226fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226f8) {
            ctx->pc = 0x2226BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2226bc;
        }
    }
    ctx->pc = 0x222700u;
label_222700:
    // 0x222700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x222700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222704: 0xc049c48  jal         func_127120
    ctx->pc = 0x222704u;
    SET_GPR_U32(ctx, 31, 0x22270Cu);
    ctx->pc = 0x222708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222704u;
    // 0x222708: 0x2484083c  addiu       $a0, $a0, 0x83C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x222704u, 0x22270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22270Cu;
label_22270c:
    // 0x22270c: 0x8e2f1044  lw          $t7, 0x1044($s1)
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4164)));
    // 0x222710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222714: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x222718: 0xc0887ec  jal         func_221FB0
    ctx->pc = 0x222718u;
    SET_GPR_U32(ctx, 31, 0x222720u);
    ctx->pc = 0x22271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222718u;
    // 0x22271c: 0xae2f1044  sw          $t7, 0x1044($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4164), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FB0u, 0x222718u, 0x222720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222720u;
label_222720:
    // 0x222720: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x222720u;
    {
        const bool branch_taken_0x222720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222720u;
        // 0x222724: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222720) {
            ctx->pc = 0x2226BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2226bc;
        }
    }
    ctx->pc = 0x222728u;
    // 0x222728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22272c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x222734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22273c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x222740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222744: 0x8c8f0838  lw          $t7, 0x838($a0)
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2104)));
    // 0x222748: 0x19e0000e  blez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x222748u;
    {
        const bool branch_taken_0x222748 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x22274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222748u;
        // 0x22274c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222748) {
            ctx->pc = 0x222784u;
            goto label_222784;
        }
    }
    ctx->pc = 0x222750u;
    // 0x222750: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x222750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222754: 0xcf782a  slt         $t7, $a2, $t7
    ctx->pc = 0x222754u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x222758: 0xcf800b  movn        $s0, $a2, $t7
    ctx->pc = 0x222758u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x22275c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222760: 0x601000f  bgez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x222760u;
    {
        const bool branch_taken_0x222760 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x222764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222760u;
        // 0x222764: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222760) {
            ctx->pc = 0x2227A0u;
            goto label_2227a0;
        }
    }
    ctx->pc = 0x222768u;
    // 0x222768: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22276c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22276cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222770: 0x24842e98  addiu       $a0, $a0, 0x2E98
    ctx->pc = 0x222770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11928));
    // 0x222774: 0x24e72e88  addiu       $a3, $a3, 0x2E88
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11912));
    // 0x222778: 0x24050232  addiu       $a1, $zero, 0x232
    ctx->pc = 0x222778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 562));
    // 0x22277c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22277Cu;
    SET_GPR_U32(ctx, 31, 0x222784u);
    ctx->pc = 0x222780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22277Cu;
    // 0x222780: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22277Cu, 0x222784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222784u;
label_222784:
    // 0x222784: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222788:
    // 0x222788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22278c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22278cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x222794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222798: 0x3e00008  jr          $ra
    ctx->pc = 0x222798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222798u;
        // 0x22279c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2227A0u;
label_2227a0:
    // 0x2227a0: 0x26320034  addiu       $s2, $s1, 0x34
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2227a4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2227A4u;
    SET_GPR_U32(ctx, 31, 0x2227ACu);
    ctx->pc = 0x2227A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227A4u;
    // 0x2227a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2227A4u, 0x2227ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227ACu;
label_2227ac:
    // 0x2227ac: 0x8e2f0838  lw          $t7, 0x838($s1)
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x2227b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2227b4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2227b8: 0x24842e98  addiu       $a0, $a0, 0x2E98
    ctx->pc = 0x2227b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11928));
    // 0x2227bc: 0x1f07023  subu        $t6, $t7, $s0
    ctx->pc = 0x2227bcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2227c0: 0x24e72ea8  addiu       $a3, $a3, 0x2EA8
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11944));
    // 0x2227c4: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2227c8: 0xae2e0838  sw          $t6, 0x838($s1)
    ctx->pc = 0x2227c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 14));
    // 0x2227cc: 0x2405023a  addiu       $a1, $zero, 0x23A
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x2227d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2227d4: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x2227d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227d8: 0x5c10005  bgez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2227D8u;
    {
        const bool branch_taken_0x2227d8 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x2227DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227D8u;
        // 0x2227dc: 0x25ef0034  addiu       $t7, $t7, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227d8) {
            ctx->pc = 0x2227F0u;
            goto label_2227f0;
        }
    }
    ctx->pc = 0x2227E0u;
    // 0x2227e0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2227E0u;
    SET_GPR_U32(ctx, 31, 0x2227E8u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2227E0u, 0x2227E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2227E8u;
    {
        const bool branch_taken_0x2227e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227E8u;
        // 0x2227ec: 0x8e220838  lw          $v0, 0x838($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227e8) {
            ctx->pc = 0x222788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222788;
        }
    }
    ctx->pc = 0x2227F0u;
label_2227f0:
    // 0x2227f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2227f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227f4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x2227f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227f8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2227F8u;
    SET_GPR_U32(ctx, 31, 0x222800u);
    ctx->pc = 0x2227FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227F8u;
    // 0x2227fc: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2227F8u, 0x222800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222800u;
label_222800:
    // 0x222800: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x222800u;
    {
        const bool branch_taken_0x222800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222800u;
        // 0x222804: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222800) {
            ctx->pc = 0x222788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222788;
        }
    }
    ctx->pc = 0x222808u;
    // 0x222808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22280c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x222810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x222814: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x222814u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222818: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x22281c: 0x2dee0007  sltiu       $t6, $t7, 0x7
    ctx->pc = 0x22281cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x222820: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x222820u;
    {
        const bool branch_taken_0x222820 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x222824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222820u;
        // 0x222824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222820) {
            ctx->pc = 0x22284Cu;
            goto label_22284c;
        }
    }
    ctx->pc = 0x222828u;
    // 0x222828: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x22282c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x222830: 0x25ce2ed0  addiu       $t6, $t6, 0x2ED0
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11984));
    // 0x222834: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x222838: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x22283c: 0x1a00008  jr          $t5
    ctx->pc = 0x22283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222844u: goto label_222844;
            case 0x22284Cu: goto label_22284c;
            case 0x2228B8u: goto label_2228b8;
            case 0x2228C8u: goto label_2228c8;
            case 0x2228D8u: goto label_2228d8;
            case 0x2228E8u: goto label_2228e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22283Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222844u;
label_222844:
    // 0x222844: 0xc08883a  jal         func_2220E8
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 31, 0x22284Cu);
    ctx->pc = 0x2220E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2220E8u, 0x222844u, 0x22284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22284Cu;
label_22284c:
    // 0x22284c: 0x8e0e1048  lw          $t6, 0x1048($s0)
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
label_222850:
    // 0x222850: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x222850u;
    {
        const bool branch_taken_0x222850 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x222854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222850u;
        // 0x222854: 0x25cf0001  addiu       $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222850) {
            ctx->pc = 0x222860u;
            goto label_222860;
        }
    }
    ctx->pc = 0x222858u;
    // 0x222858: 0xae0f1048  sw          $t7, 0x1048($s0)
    ctx->pc = 0x222858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 15));
    // 0x22285c: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x22285cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_222860:
    // 0x222860: 0x8e0f104c  lw          $t7, 0x104C($s0)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4172)));
    // 0x222864: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x222864u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x222868: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x222868u;
    {
        const bool branch_taken_0x222868 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x22286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222868u;
        // 0x22286c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222868) {
            ctx->pc = 0x2228B0u;
            goto label_2228b0;
        }
    }
    ctx->pc = 0x222870u;
    // 0x222870: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222874: 0xc089144  jal         func_224510
    ctx->pc = 0x222874u;
    SET_GPR_U32(ctx, 31, 0x22287Cu);
    ctx->pc = 0x222878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222874u;
    // 0x222878: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222874u, 0x22287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22287Cu;
label_22287c:
    // 0x22287c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222880: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222884: 0x24842eb8  addiu       $a0, $a0, 0x2EB8
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11960));
    // 0x222888: 0x25082ec8  addiu       $t0, $t0, 0x2EC8
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11976));
    // 0x22288c: 0x24050262  addiu       $a1, $zero, 0x262
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    // 0x222890: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222894: 0xc089794  jal         func_225E50
    ctx->pc = 0x222894u;
    SET_GPR_U32(ctx, 31, 0x22289Cu);
    ctx->pc = 0x222898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222894u;
    // 0x222898: 0x2407d8ec  addiu       $a3, $zero, -0x2714 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x222894u, 0x22289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22289Cu;
label_22289c:
    // 0x22289c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22289cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2228a0:
    // 0x2228a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2228a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2228a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2228a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2228A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2228ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228A8u;
        // 0x2228ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2228A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2228B0u;
label_2228b0:
    // 0x2228b0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2228B0u;
    {
        const bool branch_taken_0x2228b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228B0u;
        // 0x2228b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228b0) {
            ctx->pc = 0x2228A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2228a0;
        }
    }
    ctx->pc = 0x2228B8u;
label_2228b8:
    // 0x2228b8: 0xc08877e  jal         func_221DF8
    ctx->pc = 0x2228B8u;
    SET_GPR_U32(ctx, 31, 0x2228C0u);
    ctx->pc = 0x221DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DF8u, 0x2228B8u, 0x2228C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228C0u;
label_2228c0:
    // 0x2228c0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x2228C0u;
    {
        const bool branch_taken_0x2228c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228C0u;
        // 0x2228c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228c0) {
            ctx->pc = 0x2228A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2228a0;
        }
    }
    ctx->pc = 0x2228C8u;
label_2228c8:
    // 0x2228c8: 0xc08877e  jal         func_221DF8
    ctx->pc = 0x2228C8u;
    SET_GPR_U32(ctx, 31, 0x2228D0u);
    ctx->pc = 0x221DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DF8u, 0x2228C8u, 0x2228D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228D0u;
label_2228d0:
    // 0x2228d0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2228D0u;
    {
        const bool branch_taken_0x2228d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228D0u;
        // 0x2228d4: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228d0) {
            ctx->pc = 0x222850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222850;
        }
    }
    ctx->pc = 0x2228D8u;
label_2228d8:
    // 0x2228d8: 0xc088844  jal         func_222110
    ctx->pc = 0x2228D8u;
    SET_GPR_U32(ctx, 31, 0x2228E0u);
    ctx->pc = 0x222110u;
    goto label_222110;
    ctx->pc = 0x2228E0u;
label_2228e0:
    // 0x2228e0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x2228E0u;
    {
        const bool branch_taken_0x2228e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E0u;
        // 0x2228e4: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e0) {
            ctx->pc = 0x222850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222850;
        }
    }
    ctx->pc = 0x2228E8u;
label_2228e8:
    // 0x2228e8: 0xc088790  jal         func_221E40
    ctx->pc = 0x2228E8u;
    SET_GPR_U32(ctx, 31, 0x2228F0u);
    ctx->pc = 0x221E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E40u, 0x2228E8u, 0x2228F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228F0u;
label_2228f0:
    // 0x2228f0: 0x8e0f1044  lw          $t7, 0x1044($s0)
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4164)));
    // 0x2228f4: 0x59e0ffd6  blezl       $t7, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2228F4u;
    {
        const bool branch_taken_0x2228f4 = (GPR_S32(ctx, 15) <= 0);
        if (branch_taken_0x2228f4) {
            ctx->pc = 0x2228F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228F4u;
            // 0x2228f8: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222850;
        }
    }
    ctx->pc = 0x2228FCu;
    // 0x2228fc: 0xc0887ec  jal         func_221FB0
    ctx->pc = 0x2228FCu;
    SET_GPR_U32(ctx, 31, 0x222904u);
    ctx->pc = 0x222900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228FCu;
    // 0x222900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FB0u, 0x2228FCu, 0x222904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222904u;
label_222904:
    // 0x222904: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x222904u;
    {
        const bool branch_taken_0x222904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222904u;
        // 0x222908: 0x8e0e1048  lw          $t6, 0x1048($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222904) {
            ctx->pc = 0x222850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222850;
        }
    }
    ctx->pc = 0x22290Cu;
    // 0x22290c: 0x0  nop
    ctx->pc = 0x22290cu;
    // NOP
}
