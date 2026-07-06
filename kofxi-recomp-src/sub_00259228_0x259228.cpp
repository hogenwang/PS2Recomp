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

// Function: sub_00259228
// Address: 0x259228 - 0x259850
void sub_00259228_0x259228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259228_0x259228");
#endif

    switch (ctx->pc) {
        case 0x2592fcu: goto label_2592fc;
        case 0x259328u: goto label_259328;
        case 0x259334u: goto label_259334;
        case 0x259340u: goto label_259340;
        case 0x259350u: goto label_259350;
        case 0x259368u: goto label_259368;
        case 0x259374u: goto label_259374;
        case 0x259384u: goto label_259384;
        case 0x25938cu: goto label_25938c;
        case 0x259398u: goto label_259398;
        case 0x2593e0u: goto label_2593e0;
        case 0x259414u: goto label_259414;
        case 0x25944cu: goto label_25944c;
        case 0x259470u: goto label_259470;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594dcu: goto label_2594dc;
        case 0x259508u: goto label_259508;
        case 0x259514u: goto label_259514;
        case 0x259520u: goto label_259520;
        case 0x259530u: goto label_259530;
        case 0x259560u: goto label_259560;
        case 0x25956cu: goto label_25956c;
        case 0x25957cu: goto label_25957c;
        case 0x259584u: goto label_259584;
        case 0x259590u: goto label_259590;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595ecu: goto label_2595ec;
        case 0x25961cu: goto label_25961c;
        case 0x259630u: goto label_259630;
        case 0x259638u: goto label_259638;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596e4u: goto label_2596e4;
        case 0x259738u: goto label_259738;
        case 0x259788u: goto label_259788;
        case 0x259790u: goto label_259790;
        case 0x2597b0u: goto label_2597b0;
        case 0x259818u: goto label_259818;
        default: break;
    }

    ctx->pc = 0x259228u;

    // 0x259228: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x259228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25922c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x25922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x259230: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x259230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x259234: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x259234u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259238: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x259238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25923c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x25923cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259240: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x259240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x259244: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x259244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259248: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x259248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x25924c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25924cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259250: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x259250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x259254: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x259254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259258: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x259258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x25925c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x25925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x259260: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x259260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x259264: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x259264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x259268: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x259268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x25926c: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x25926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x259270: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x259270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x259274: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x259274u;
    {
        const bool branch_taken_0x259274 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x259278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259274u;
        // 0x259278: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259274) {
            ctx->pc = 0x2592CCu;
            goto label_2592cc;
        }
    }
    ctx->pc = 0x25927Cu;
    // 0x25927c: 0x31420004  andi        $v0, $t2, 0x4
    ctx->pc = 0x25927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
    // 0x259280: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x259280u;
    {
        const bool branch_taken_0x259280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259280) {
            ctx->pc = 0x2592CCu;
            goto label_2592cc;
        }
    }
    ctx->pc = 0x259288u;
    // 0x259288: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x25928c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25928Cu;
    {
        const bool branch_taken_0x25928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25928c) {
            ctx->pc = 0x2592CCu;
            goto label_2592cc;
        }
    }
    ctx->pc = 0x259294u;
    // 0x259294: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x259294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x259298: 0xdc460058  ld          $a2, 0x58($v0)
    ctx->pc = 0x259298u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x25929c: 0xdc440050  ld          $a0, 0x50($v0)
    ctx->pc = 0x25929cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2592a0: 0xdc450048  ld          $a1, 0x48($v0)
    ctx->pc = 0x2592a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2592a4: 0xdc430060  ld          $v1, 0x60($v0)
    ctx->pc = 0x2592a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2592a8: 0x85202f  dsubu       $a0, $a0, $a1
    ctx->pc = 0x2592a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
    // 0x2592ac: 0x66182f  dsubu       $v1, $v1, $a2
    ctx->pc = 0x2592acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
    // 0x2592b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2592b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2592b4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2592b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2592b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2592b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2592bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2592bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2592c0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2592c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2592c4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2592c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2592c8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2592c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_2592cc:
    // 0x2592cc: 0x16400059  bnez        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x2592CCu;
    {
        const bool branch_taken_0x2592cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2592D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592CCu;
        // 0x2592d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592cc) {
            ctx->pc = 0x259434u;
            goto label_259434;
        }
    }
    ctx->pc = 0x2592D4u;
    // 0x2592d4: 0x12200152  beqz        $s1, . + 4 + (0x152 << 2)
    ctx->pc = 0x2592D4u;
    {
        const bool branch_taken_0x2592d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592D4u;
        // 0x2592d8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592d4) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x2592DCu;
    // 0x2592dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2592dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2592e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2592e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2592e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2592e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2592e8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2592e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2592ec: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2592ECu;
    {
        const bool branch_taken_0x2592ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2592F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592ECu;
        // 0x2592f0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592ec) {
            ctx->pc = 0x259320u;
            goto label_259320;
        }
    }
    ctx->pc = 0x2592F4u;
    // 0x2592f4: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x2592F4u;
    {
        const bool branch_taken_0x2592f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592F4u;
        // 0x2592f8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592f4) {
            ctx->pc = 0x259824u;
            goto label_259824;
        }
    }
    ctx->pc = 0x2592FCu;
label_2592fc:
    // 0x2592fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2592fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259300: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x259300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x259304: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x259304u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x259308: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x259308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x25930c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25930cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x259310: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x259310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x259314: 0xa6430012  sh          $v1, 0x12($s2)
    ctx->pc = 0x259314u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x259318: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x259318u;
    {
        const bool branch_taken_0x259318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259318u;
        // 0x25931c: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259318) {
            ctx->pc = 0x259358u;
            goto label_259358;
        }
    }
    ctx->pc = 0x259320u;
label_259320:
    // 0x259320: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259320u;
    SET_GPR_U32(ctx, 31, 0x259328u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x259320u, 0x259328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259328u;
label_259328:
    // 0x259328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25932c: 0xc098552  jal         func_261548
    ctx->pc = 0x25932Cu;
    SET_GPR_U32(ctx, 31, 0x259334u);
    ctx->pc = 0x259330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25932Cu;
    // 0x259330: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25932Cu, 0x259334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259334u;
label_259334:
    // 0x259334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x259334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259338: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259338u;
    SET_GPR_U32(ctx, 31, 0x259340u);
    ctx->pc = 0x25933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259338u;
    // 0x25933c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259338u, 0x259340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259340u;
label_259340:
    // 0x259340: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x259340u;
    {
        const bool branch_taken_0x259340 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x259344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259340u;
        // 0x259344: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259340) {
            ctx->pc = 0x2592FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2592fc;
        }
    }
    ctx->pc = 0x259348u;
    // 0x259348: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x259348u;
    SET_GPR_U32(ctx, 31, 0x259350u);
    ctx->pc = 0x25934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259348u;
    // 0x25934c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x259348u, 0x259350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259350u;
label_259350:
    // 0x259350: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x259350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259354: 0x0  nop
    ctx->pc = 0x259354u;
    // NOP
label_259358:
    // 0x259358: 0x12400131  beqz        $s2, . + 4 + (0x131 << 2)
    ctx->pc = 0x259358u;
    {
        const bool branch_taken_0x259358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259358u;
        // 0x25935c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259358) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x259360u;
    // 0x259360: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259360u;
    SET_GPR_U32(ctx, 31, 0x259368u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x259360u, 0x259368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259368u;
label_259368:
    // 0x259368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25936c: 0xc098552  jal         func_261548
    ctx->pc = 0x25936Cu;
    SET_GPR_U32(ctx, 31, 0x259374u);
    ctx->pc = 0x259370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25936Cu;
    // 0x259370: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25936Cu, 0x259374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259374u;
label_259374:
    // 0x259374: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259374u;
    {
        const bool branch_taken_0x259374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259374u;
        // 0x259378: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259374) {
            ctx->pc = 0x259390u;
            goto label_259390;
        }
    }
    ctx->pc = 0x25937Cu;
    // 0x25937c: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x25937Cu;
    SET_GPR_U32(ctx, 31, 0x259384u);
    ctx->pc = 0x259380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25937Cu;
    // 0x259380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x25937Cu, 0x259384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259384u;
label_259384:
    // 0x259384: 0xc098552  jal         func_261548
    ctx->pc = 0x259384u;
    SET_GPR_U32(ctx, 31, 0x25938Cu);
    ctx->pc = 0x259388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259384u;
    // 0x259388: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x259384u, 0x25938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25938Cu;
label_25938c:
    // 0x25938c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x25938cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_259390:
    // 0x259390: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259390u;
    SET_GPR_U32(ctx, 31, 0x259398u);
    ctx->pc = 0x259394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259390u;
    // 0x259394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259390u, 0x259398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259398u;
label_259398:
    // 0x259398: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x259398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x25939c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x25939Cu;
    {
        const bool branch_taken_0x25939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25939Cu;
        // 0x2593a0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25939c) {
            ctx->pc = 0x2593C8u;
            goto label_2593c8;
        }
    }
    ctx->pc = 0x2593A4u;
    // 0x2593a4: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x2593a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2593a8: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x2593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x2593ac: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2593acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2593b0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2593b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x2593b4: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x2593b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2593b8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2593b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2593bc: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2593bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x2593c0: 0xae520038  sw          $s2, 0x38($s2)
    ctx->pc = 0x2593c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 18));
    // 0x2593c4: 0xae520034  sw          $s2, 0x34($s2)
    ctx->pc = 0x2593c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 18));
label_2593c8:
    // 0x2593c8: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x2593c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2593cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2593ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2593d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2593D0u;
    {
        const bool branch_taken_0x2593d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2593d0) {
            ctx->pc = 0x2593E4u;
            goto label_2593e4;
        }
    }
    ctx->pc = 0x2593D8u;
    // 0x2593d8: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2593D8u;
    SET_GPR_U32(ctx, 31, 0x2593E0u);
    ctx->pc = 0x2593DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2593D8u;
    // 0x2593dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x2593D8u, 0x2593E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2593E0u;
label_2593e0:
    // 0x2593e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2593e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2593e4:
    // 0x2593e4: 0x12400081  beqz        $s2, . + 4 + (0x81 << 2)
    ctx->pc = 0x2593E4u;
    {
        const bool branch_taken_0x2593e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593E4u;
        // 0x2593e8: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593e4) {
            ctx->pc = 0x2595ECu;
            goto label_2595ec;
        }
    }
    ctx->pc = 0x2593ECu;
    // 0x2593ec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2593ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2593f0: 0x8c64f9e8  lw          $a0, -0x618($v1)
    ctx->pc = 0x2593f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
    // 0x2593f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2593f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2593f8: 0x8c4312d0  lw          $v1, 0x12D0($v0)
    ctx->pc = 0x2593f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4816)));
    // 0x2593fc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x259400: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x259400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x259404: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x259404u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259408: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x259408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25940c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25940Cu;
    SET_GPR_U32(ctx, 31, 0x259414u);
    ctx->pc = 0x259410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25940Cu;
    // 0x259410: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25940Cu, 0x259414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259414u;
label_259414:
    // 0x259414: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x259414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259418: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259418u;
    {
        const bool branch_taken_0x259418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259418u;
        // 0x25941c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259418) {
            ctx->pc = 0x259428u;
            goto label_259428;
        }
    }
    ctx->pc = 0x259420u;
    // 0x259420: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x259420u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x259424: 0x26b40014  addiu       $s4, $s5, 0x14
    ctx->pc = 0x259424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_259428:
    // 0x259428: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x259428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x25942c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x25942Cu;
    {
        const bool branch_taken_0x25942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25942Cu;
        // 0x259430: 0xafa50018  sw          $a1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25942c) {
            ctx->pc = 0x2596CCu;
            goto label_2596cc;
        }
    }
    ctx->pc = 0x259434u;
label_259434:
    // 0x259434: 0x96450012  lhu         $a1, 0x12($s2)
    ctx->pc = 0x259434u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x259438: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x259438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x25943c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25943Cu;
    {
        const bool branch_taken_0x25943c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25943c) {
            ctx->pc = 0x259440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25943Cu;
            // 0x259440: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259454u;
            goto label_259454;
        }
    }
    ctx->pc = 0x259444u;
    // 0x259444: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x259444u;
    SET_GPR_U32(ctx, 31, 0x25944Cu);
    ctx->pc = 0x259448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259444u;
    // 0x259448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x259444u, 0x25944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25944Cu;
label_25944c:
    // 0x25944c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x25944Cu;
    {
        const bool branch_taken_0x25944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25944Cu;
        // 0x259450: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25944c) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x259454u;
label_259454:
    // 0x259454: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x259454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259458: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x259458u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25945c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x25945cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x259460: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259460u;
    {
        const bool branch_taken_0x259460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x259464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259460u;
        // 0x259464: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259460) {
            ctx->pc = 0x259478u;
            goto label_259478;
        }
    }
    ctx->pc = 0x259468u;
    // 0x259468: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x259468u;
    SET_GPR_U32(ctx, 31, 0x259470u);
    ctx->pc = 0x25946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259468u;
    // 0x25946c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x259468u, 0x259470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259470u;
label_259470:
    // 0x259470: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x259470u;
    {
        const bool branch_taken_0x259470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259470u;
        // 0x259474: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259470) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x259478u;
label_259478:
    // 0x259478: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x259478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25947c: 0x30c60002  andi        $a2, $a2, 0x2
    ctx->pc = 0x25947cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x259480: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x259480u;
    {
        const bool branch_taken_0x259480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x259484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259480u;
        // 0x259484: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259480) {
            ctx->pc = 0x2594A0u;
            goto label_2594a0;
        }
    }
    ctx->pc = 0x259488u;
    // 0x259488: 0x93c2000c  lbu         $v0, 0xC($fp)
    ctx->pc = 0x259488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x25948c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x25948cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x259490: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259494: 0x2cc30014  sltiu       $v1, $a2, 0x14
    ctx->pc = 0x259494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x259498: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259498u;
    {
        const bool branch_taken_0x259498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259498u;
        // 0x25949c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259498) {
            ctx->pc = 0x2594A4u;
            goto label_2594a4;
        }
    }
    ctx->pc = 0x2594A0u;
label_2594a0:
    // 0x2594a0: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x2594a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2594a4:
    // 0x2594a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2594a8: 0x26760014  addiu       $s6, $s3, 0x14
    ctx->pc = 0x2594a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2594ac: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2594acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2594b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2594B0u;
    {
        const bool branch_taken_0x2594b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B0u;
        // 0x2594b4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594b0) {
            ctx->pc = 0x259500u;
            goto label_259500;
        }
    }
    ctx->pc = 0x2594B8u;
    // 0x2594b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2594B8u;
    {
        const bool branch_taken_0x2594b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2594BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B8u;
        // 0x2594bc: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594b8) {
            ctx->pc = 0x259500u;
            goto label_259500;
        }
    }
    ctx->pc = 0x2594C0u;
    // 0x2594c0: 0x145e000f  bne         $v0, $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x2594C0u;
    {
        const bool branch_taken_0x2594c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2594c0) {
            ctx->pc = 0x259500u;
            goto label_259500;
        }
    }
    ctx->pc = 0x2594C8u;
    // 0x2594c8: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x2594c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
    // 0x2594cc: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2594CCu;
    SET_GPR_U32(ctx, 31, 0x2594D4u);
    ctx->pc = 0x2594D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594CCu;
    // 0x2594d0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2594CCu, 0x2594D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594D4u;
label_2594d4:
    // 0x2594d4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2594D4u;
    {
        const bool branch_taken_0x2594d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D4u;
        // 0x2594d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594d4) {
            ctx->pc = 0x25963Cu;
            goto label_25963c;
        }
    }
    ctx->pc = 0x2594DCu;
label_2594dc:
    // 0x2594dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2594dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2594e0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2594e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2594e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2594e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2594e8: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2594e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2594ec: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x2594ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2594f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2594f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2594f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2594f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2594f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2594F8u;
    {
        const bool branch_taken_0x2594f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594F8u;
        // 0x2594fc: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594f8) {
            ctx->pc = 0x259538u;
            goto label_259538;
        }
    }
    ctx->pc = 0x259500u;
label_259500:
    // 0x259500: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259500u;
    SET_GPR_U32(ctx, 31, 0x259508u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x259500u, 0x259508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259508u;
label_259508:
    // 0x259508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25950c: 0xc098552  jal         func_261548
    ctx->pc = 0x25950Cu;
    SET_GPR_U32(ctx, 31, 0x259514u);
    ctx->pc = 0x259510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25950Cu;
    // 0x259510: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25950Cu, 0x259514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259514u;
label_259514:
    // 0x259514: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259518: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259518u;
    SET_GPR_U32(ctx, 31, 0x259520u);
    ctx->pc = 0x25951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259518u;
    // 0x25951c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259518u, 0x259520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259520u;
label_259520:
    // 0x259520: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x259520u;
    {
        const bool branch_taken_0x259520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x259524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259520u;
        // 0x259524: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259520) {
            ctx->pc = 0x2594DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2594dc;
        }
    }
    ctx->pc = 0x259528u;
    // 0x259528: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x259528u;
    SET_GPR_U32(ctx, 31, 0x259530u);
    ctx->pc = 0x25952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259528u;
    // 0x25952c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x259528u, 0x259530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259530u;
label_259530:
    // 0x259530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259534: 0x0  nop
    ctx->pc = 0x259534u;
    // NOP
label_259538:
    // 0x259538: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x259538u;
    {
        const bool branch_taken_0x259538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259538u;
        // 0x25953c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259538) {
            ctx->pc = 0x2595E4u;
            goto label_2595e4;
        }
    }
    ctx->pc = 0x259540u;
    // 0x259540: 0x8c62f9e8  lw          $v0, -0x618($v1)
    ctx->pc = 0x259540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965736)));
    // 0x259544: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x259544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x259548: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x259548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25954c: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x25954cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
    // 0x259550: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x259550u;
    {
        const bool branch_taken_0x259550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259550) {
            ctx->pc = 0x2595DCu;
            goto label_2595dc;
        }
    }
    ctx->pc = 0x259558u;
    // 0x259558: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259558u;
    SET_GPR_U32(ctx, 31, 0x259560u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x259558u, 0x259560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259560u;
label_259560:
    // 0x259560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259564: 0xc098552  jal         func_261548
    ctx->pc = 0x259564u;
    SET_GPR_U32(ctx, 31, 0x25956Cu);
    ctx->pc = 0x259568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259564u;
    // 0x259568: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x259564u, 0x25956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25956Cu;
label_25956c:
    // 0x25956c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25956Cu;
    {
        const bool branch_taken_0x25956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25956Cu;
        // 0x259570: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25956c) {
            ctx->pc = 0x259588u;
            goto label_259588;
        }
    }
    ctx->pc = 0x259574u;
    // 0x259574: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x259574u;
    SET_GPR_U32(ctx, 31, 0x25957Cu);
    ctx->pc = 0x259578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259574u;
    // 0x259578: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x259574u, 0x25957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25957Cu;
label_25957c:
    // 0x25957c: 0xc098552  jal         func_261548
    ctx->pc = 0x25957Cu;
    SET_GPR_U32(ctx, 31, 0x259584u);
    ctx->pc = 0x259580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25957Cu;
    // 0x259580: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25957Cu, 0x259584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259584u;
label_259584:
    // 0x259584: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x259584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_259588:
    // 0x259588: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259588u;
    SET_GPR_U32(ctx, 31, 0x259590u);
    ctx->pc = 0x25958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259588u;
    // 0x25958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259588u, 0x259590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259590u;
label_259590:
    // 0x259590: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x259590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x259594: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x259594u;
    {
        const bool branch_taken_0x259594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259594u;
        // 0x259598: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259594) {
            ctx->pc = 0x2595C0u;
            goto label_2595c0;
        }
    }
    ctx->pc = 0x25959Cu;
    // 0x25959c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x25959cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2595a0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2595a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2595a4: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2595a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2595a8: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2595a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2595ac: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2595acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2595b0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2595b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2595b4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2595b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x2595b8: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2595b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x2595bc: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2595bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2595c0:
    // 0x2595c0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2595c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2595c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2595c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2595c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2595C8u;
    {
        const bool branch_taken_0x2595c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2595c8) {
            ctx->pc = 0x2595DCu;
            goto label_2595dc;
        }
    }
    ctx->pc = 0x2595D0u;
    // 0x2595d0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2595D0u;
    SET_GPR_U32(ctx, 31, 0x2595D8u);
    ctx->pc = 0x2595D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595D0u;
    // 0x2595d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2595D0u, 0x2595D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595D8u;
label_2595d8:
    // 0x2595d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2595d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2595dc:
    // 0x2595dc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2595DCu;
    {
        const bool branch_taken_0x2595dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2595E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595DCu;
        // 0x2595e0: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595dc) {
            ctx->pc = 0x2595F4u;
            goto label_2595f4;
        }
    }
    ctx->pc = 0x2595E4u;
label_2595e4:
    // 0x2595e4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2595E4u;
    SET_GPR_U32(ctx, 31, 0x2595ECu);
    ctx->pc = 0x2595E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595E4u;
    // 0x2595e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2595E4u, 0x2595ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595ECu;
label_2595ec:
    // 0x2595ec: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2595ECu;
    {
        const bool branch_taken_0x2595ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595ECu;
        // 0x2595f0: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595ec) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x2595F4u;
label_2595f4:
    // 0x2595f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2595f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2595f8: 0x8c83f9e8  lw          $v1, -0x618($a0)
    ctx->pc = 0x2595f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965736)));
    // 0x2595fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2595fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259600: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x259600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
    // 0x259604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25960c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x25960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x259610: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x259610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x259614: 0xc08aee0  jal         func_22BB80
    ctx->pc = 0x259614u;
    SET_GPR_U32(ctx, 31, 0x25961Cu);
    ctx->pc = 0x259618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259614u;
    // 0x259618: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB80u, 0x259614u, 0x25961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25961Cu;
label_25961c:
    // 0x25961c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25961cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259620: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x259620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259628: 0xc08aee0  jal         func_22BB80
    ctx->pc = 0x259628u;
    SET_GPR_U32(ctx, 31, 0x259630u);
    ctx->pc = 0x25962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259628u;
    // 0x25962c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB80u, 0x259628u, 0x259630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x259630u;
    SET_GPR_U32(ctx, 31, 0x259638u);
    ctx->pc = 0x259634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259630u;
    // 0x259634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x259630u, 0x259638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259638u;
label_259638:
    // 0x259638: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x259638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25963c:
    // 0x25963c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259640: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x259640u;
    {
        const bool branch_taken_0x259640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x259644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259640u;
        // 0x259644: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259640) {
            ctx->pc = 0x259688u;
            goto label_259688;
        }
    }
    ctx->pc = 0x259648u;
    // 0x259648: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x259648u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25964c: 0xa2a20009  sb          $v0, 0x9($s5)
    ctx->pc = 0x25964cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x259650: 0x26b40014  addiu       $s4, $s5, 0x14
    ctx->pc = 0x259650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x259654: 0x8aa60013  lwl         $a2, 0x13($s5)
    ctx->pc = 0x259654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x259658: 0x9aa60010  lwr         $a2, 0x10($s5)
    ctx->pc = 0x259658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x25965c: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x25965cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259660: 0xbba60000  swr         $a2, 0x0($sp)
    ctx->pc = 0x259660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259664: 0x8aa6000f  lwl         $a2, 0xF($s5)
    ctx->pc = 0x259664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x259668: 0x9aa6000c  lwr         $a2, 0xC($s5)
    ctx->pc = 0x259668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x25966c: 0xaaa60013  swl         $a2, 0x13($s5)
    ctx->pc = 0x25966cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259670: 0xbaa60010  swr         $a2, 0x10($s5)
    ctx->pc = 0x259670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259674: 0x8ba60003  lwl         $a2, 0x3($sp)
    ctx->pc = 0x259674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x259678: 0x9ba60000  lwr         $a2, 0x0($sp)
    ctx->pc = 0x259678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x25967c: 0xaaa6000f  swl         $a2, 0xF($s5)
    ctx->pc = 0x25967cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259680: 0xbaa6000c  swr         $a2, 0xC($s5)
    ctx->pc = 0x259680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259684: 0xa2a20009  sb          $v0, 0x9($s5)
    ctx->pc = 0x259684u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 9), (uint8_t)GPR_U32(ctx, 2));
label_259688:
    // 0x259688: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x259688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x25968c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25968cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259690: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x259690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x259694: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x259694u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x259698: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x259698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x25969c: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x25969cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2596a0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2596a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2596a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2596a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2596a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2596a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2596ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2596acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2596b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2596b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2596b4: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x2596b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
    // 0x2596b8: 0x22a3a  dsrl        $a1, $v0, 8
    ctx->pc = 0x2596b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 8);
    // 0x2596bc: 0xa2840001  sb          $a0, 0x1($s4)
    ctx->pc = 0x2596bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2596c0: 0xa2850003  sb          $a1, 0x3($s4)
    ctx->pc = 0x2596c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2596c4: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x2596c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2596c8: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2596c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_2596cc:
    // 0x2596cc: 0xc08a254  jal         func_228950
    ctx->pc = 0x2596CCu;
    SET_GPR_U32(ctx, 31, 0x2596D4u);
    ctx->pc = 0x2596D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596CCu;
    // 0x2596d0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2596CCu, 0x2596D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596D4u;
label_2596d4:
    // 0x2596d4: 0xaa820007  swl         $v0, 0x7($s4)
    ctx->pc = 0x2596d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2596d8: 0xba820004  swr         $v0, 0x4($s4)
    ctx->pc = 0x2596d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2596dc: 0xc08a254  jal         func_228950
    ctx->pc = 0x2596DCu;
    SET_GPR_U32(ctx, 31, 0x2596E4u);
    ctx->pc = 0x2596E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596DCu;
    // 0x2596e0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2596DCu, 0x2596E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596E4u;
label_2596e4:
    // 0x2596e4: 0xaa82000b  swl         $v0, 0xB($s4)
    ctx->pc = 0x2596e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2596e8: 0xba820008  swr         $v0, 0x8($s4)
    ctx->pc = 0x2596e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2596ec: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x2596ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2596f0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2596f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2596f4: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x2596f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2596f8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2596fc: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2596FCu;
    {
        const bool branch_taken_0x2596fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x259700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596FCu;
        // 0x259700: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596fc) {
            ctx->pc = 0x259750u;
            goto label_259750;
        }
    }
    ctx->pc = 0x259704u;
    // 0x259704: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x259704u;
    {
        const bool branch_taken_0x259704 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x259708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259704u;
        // 0x259708: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259704) {
            ctx->pc = 0x259718u;
            goto label_259718;
        }
    }
    ctx->pc = 0x25970Cu;
    // 0x25970c: 0x92e200b5  lbu         $v0, 0xB5($s7)
    ctx->pc = 0x25970cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 181)));
    // 0x259710: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x259710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x259714: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x259714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_259718:
    // 0x259718: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x259718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x25971c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x259720: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x259720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x259724: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x259724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x259728: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x259728u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x25972c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x25972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x259730: 0xc08a262  jal         func_228988
    ctx->pc = 0x259730u;
    SET_GPR_U32(ctx, 31, 0x259738u);
    ctx->pc = 0x259734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259730u;
    // 0x259734: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x259730u, 0x259738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259738u;
label_259738:
    // 0x259738: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x259738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25973c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x25973cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x259740: 0xa283000c  sb          $v1, 0xC($s4)
    ctx->pc = 0x259740u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x259744: 0xa284000f  sb          $a0, 0xF($s4)
    ctx->pc = 0x259744u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x259748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259748u;
    {
        const bool branch_taken_0x259748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259748u;
        // 0x25974c: 0xa282000e  sb          $v0, 0xE($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259748) {
            ctx->pc = 0x259754u;
            goto label_259754;
        }
    }
    ctx->pc = 0x259750u;
label_259750:
    // 0x259750: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x259750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_259754:
    // 0x259754: 0x26700014  addiu       $s0, $s3, 0x14
    ctx->pc = 0x259754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x259758: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x259758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x25975c: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x25975cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x259760: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x259760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259764: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x259764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x259768: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x259768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25976c: 0xa2800012  sb          $zero, 0x12($s4)
    ctx->pc = 0x25976cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x259770: 0xa285000d  sb          $a1, 0xD($s4)
    ctx->pc = 0x259770u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x259774: 0x16310017  bne         $s1, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x259774u;
    {
        const bool branch_taken_0x259774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 17));
        ctx->pc = 0x259778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259774u;
        // 0x259778: 0xa2800013  sb          $zero, 0x13($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259774) {
            ctx->pc = 0x2597D4u;
            goto label_2597d4;
        }
    }
    ctx->pc = 0x25977Cu;
    // 0x25977c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259780: 0xc048c96  jal         func_123258
    ctx->pc = 0x259780u;
    SET_GPR_U32(ctx, 31, 0x259788u);
    ctx->pc = 0x259784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259780u;
    // 0x259784: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x259780u, 0x259788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259788u;
label_259788:
    // 0x259788: 0xc08a262  jal         func_228988
    ctx->pc = 0x259788u;
    SET_GPR_U32(ctx, 31, 0x259790u);
    ctx->pc = 0x25978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259788u;
    // 0x25978c: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x259788u, 0x259790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259790u;
label_259790:
    // 0x259790: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x259790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x259794: 0xa2a2000a  sb          $v0, 0xA($s5)
    ctx->pc = 0x259794u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x259798: 0xa2a3000b  sb          $v1, 0xB($s5)
    ctx->pc = 0x259798u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x25979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597a0: 0xa2800010  sb          $zero, 0x10($s4)
    ctx->pc = 0x2597a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2597a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2597a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597a8: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x2597A8u;
    SET_GPR_U32(ctx, 31, 0x2597B0u);
    ctx->pc = 0x2597ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597A8u;
    // 0x2597ac: 0xa2800011  sb          $zero, 0x11($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x2597A8u, 0x2597B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597B0u;
label_2597b0:
    // 0x2597b0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2597b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2597b4: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x2597b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2597b8: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x2597b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2597bc: 0x102a3a  dsrl        $a1, $s0, 8
    ctx->pc = 0x2597bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) >> 8);
    // 0x2597c0: 0xa2a50003  sb          $a1, 0x3($s5)
    ctx->pc = 0x2597c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2597c4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2597c8: 0xa2b00002  sb          $s0, 0x2($s5)
    ctx->pc = 0x2597c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2597cc: 0x90821010  lbu         $v0, 0x1010($a0)
    ctx->pc = 0x2597ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4112)));
    // 0x2597d0: 0xa2a20008  sb          $v0, 0x8($s5)
    ctx->pc = 0x2597d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 2));
label_2597d4:
    // 0x2597d4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2597D4u;
    {
        const bool branch_taken_0x2597d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597D4u;
        // 0x2597d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597d4) {
            ctx->pc = 0x2597E8u;
            goto label_2597e8;
        }
    }
    ctx->pc = 0x2597DCu;
    // 0x2597dc: 0x8ee30030  lw          $v1, 0x30($s7)
    ctx->pc = 0x2597dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x2597e0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2597e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2597e4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2597e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_2597e8:
    // 0x2597e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2597e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2597ec: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2597ECu;
    {
        const bool branch_taken_0x2597ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ECu;
        // 0x2597f0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597ec) {
            ctx->pc = 0x259820u;
            goto label_259820;
        }
    }
    ctx->pc = 0x2597F4u;
    // 0x2597f4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2597F4u;
    {
        const bool branch_taken_0x2597f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F4u;
        // 0x2597f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597f4) {
            ctx->pc = 0x259808u;
            goto label_259808;
        }
    }
    ctx->pc = 0x2597FCu;
    // 0x2597fc: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x2597fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x259800: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x259804: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x259804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_259808:
    // 0x259808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25980c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259810: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x259810u;
    SET_GPR_U32(ctx, 31, 0x259818u);
    ctx->pc = 0x259814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259810u;
    // 0x259814: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B50u, 0x259810u, 0x259818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259818u;
label_259818:
    // 0x259818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259818u;
    {
        const bool branch_taken_0x259818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259818u;
        // 0x25981c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259818) {
            ctx->pc = 0x259824u;
            goto label_259824;
        }
    }
    ctx->pc = 0x259820u;
label_259820:
    // 0x259820: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x259820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_259824:
    // 0x259824: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x259824u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259828: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x259828u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25982c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x25982cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259830: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x259830u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259834: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x259834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259838: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x259838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25983c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25983cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259840: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x259840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259844: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x259844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259848: 0x3e00008  jr          $ra
    ctx->pc = 0x259848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259848u;
        // 0x25984c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259850u;
}
