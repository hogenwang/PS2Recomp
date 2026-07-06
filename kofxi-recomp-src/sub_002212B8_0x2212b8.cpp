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

// Function: sub_002212B8
// Address: 0x2212b8 - 0x2215d8
void sub_002212B8_0x2212b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002212B8_0x2212b8");
#endif

    switch (ctx->pc) {
        case 0x221318u: goto label_221318;
        case 0x22132cu: goto label_22132c;
        case 0x22133cu: goto label_22133c;
        case 0x22139cu: goto label_22139c;
        case 0x2213b8u: goto label_2213b8;
        case 0x2213d0u: goto label_2213d0;
        case 0x2213e4u: goto label_2213e4;
        case 0x221428u: goto label_221428;
        case 0x221450u: goto label_221450;
        case 0x221468u: goto label_221468;
        case 0x221494u: goto label_221494;
        case 0x2214a4u: goto label_2214a4;
        case 0x2214bcu: goto label_2214bc;
        case 0x2214e0u: goto label_2214e0;
        case 0x2214f8u: goto label_2214f8;
        case 0x221518u: goto label_221518;
        case 0x221520u: goto label_221520;
        case 0x221528u: goto label_221528;
        case 0x221530u: goto label_221530;
        case 0x22158cu: goto label_22158c;
        case 0x2215a4u: goto label_2215a4;
        default: break;
    }

    ctx->pc = 0x2212b8u;

    // 0x2212b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2212b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2212bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2212bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212c0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2212c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2212c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2212c8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2212c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2212cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2212ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2212d0: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x2212d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x2212d4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2212d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2212d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2212d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2212dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2212e0: 0x2664a530  addiu       $a0, $s3, -0x5AD0
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944048));
    // 0x2212e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2212e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2212e8: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x2212e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x2212ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2212ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2212f0: 0x2610a540  addiu       $s0, $s0, -0x5AC0
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944064));
    // 0x2212f4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2212f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2212f8: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x2212f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x2212fc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2212fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x221300: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x221300u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x221304: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x221304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x221308: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x22130c: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x221310: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x221310u;
    SET_GPR_U32(ctx, 31, 0x221318u);
    ctx->pc = 0x221314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221310u;
    // 0x221314: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x221310u, 0x221318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221318u;
label_221318:
    // 0x221318: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x221318u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x22131c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221324: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x221324u;
    SET_GPR_U32(ctx, 31, 0x22132Cu);
    ctx->pc = 0x221328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221324u;
    // 0x221328: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x221324u, 0x22132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22132Cu;
label_22132c:
    // 0x22132c: 0x2624a5c8  addiu       $a0, $s1, -0x5A38
    ctx->pc = 0x22132cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944200));
    // 0x221330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221334: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x221334u;
    SET_GPR_U32(ctx, 31, 0x22133Cu);
    ctx->pc = 0x221338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221334u;
    // 0x221338: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x221334u, 0x22133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22133Cu;
label_22133c:
    // 0x22133c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221340: 0x8e8bc9f0  lw          $t3, -0x3610($s4)
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953456)));
    // 0x221344: 0x8dedca0c  lw          $t5, -0x35F4($t7)
    ctx->pc = 0x221344u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953484)));
    // 0x221348: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22134c: 0xae2ea5c8  sw          $t6, -0x5A38($s1)
    ctx->pc = 0x22134cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944200), GPR_U32(ctx, 14));
    // 0x221350: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221354: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x221354u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221358: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x221358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
    // 0x22135c: 0xae6ea530  sw          $t6, -0x5AD0($s3)
    ctx->pc = 0x22135cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294944048), GPR_U32(ctx, 14));
    // 0x221360: 0x24e728c8  addiu       $a3, $a3, 0x28C8
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10440));
    // 0x221364: 0x8decc9ec  lw          $t4, -0x3614($t7)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953452)));
    // 0x221368: 0x240503b0  addiu       $a1, $zero, 0x3B0
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    // 0x22136c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x22136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x221370: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221374: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x221374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x221378: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x22137c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x22137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x221380: 0x25f12960  addiu       $s1, $t7, 0x2960
    ctx->pc = 0x221380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 10592));
    // 0x221384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221388: 0x8e48c9f8  lw          $t0, -0x3608($s2)
    ctx->pc = 0x221388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953464)));
    // 0x22138c: 0x8fc9c9fc  lw          $t1, -0x3604($fp)
    ctx->pc = 0x22138cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953468)));
    // 0x221390: 0x8eeaca00  lw          $t2, -0x3600($s7)
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953472)));
    // 0x221394: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221394u;
    SET_GPR_U32(ctx, 31, 0x22139Cu);
    ctx->pc = 0x221398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221394u;
    // 0x221398: 0x8eabca04  lw          $t3, -0x35FC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x221394u, 0x22139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22139Cu;
label_22139c:
    // 0x22139c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22139cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2213a0: 0x8e85c9f0  lw          $a1, -0x3610($s4)
    ctx->pc = 0x2213a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953456)));
    // 0x2213a4: 0x8de4c9ec  lw          $a0, -0x3614($t7)
    ctx->pc = 0x2213a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953452)));
    // 0x2213a8: 0x8e46c9f8  lw          $a2, -0x3608($s2)
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953464)));
    // 0x2213ac: 0x8ee7ca00  lw          $a3, -0x3600($s7)
    ctx->pc = 0x2213acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953472)));
    // 0x2213b0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2213B0u;
    SET_GPR_U32(ctx, 31, 0x2213B8u);
    ctx->pc = 0x2213B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2213B0u;
    // 0x2213b4: 0x8fc8c9fc  lw          $t0, -0x3604($fp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F8D0u, 0x2213B0u, 0x2213B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213B8u;
label_2213b8:
    // 0x2213b8: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2213B8u;
    {
        const bool branch_taken_0x2213b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2213BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213B8u;
        // 0x2213bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213b8) {
            ctx->pc = 0x22141Cu;
            goto label_22141c;
        }
    }
    ctx->pc = 0x2213C0u;
    // 0x2213c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2213c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2213c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2213c8: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x2213C8u;
    SET_GPR_U32(ctx, 31, 0x2213D0u);
    ctx->pc = 0x2213CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2213C8u;
    // 0x2213cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x2213C8u, 0x2213D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213D0u;
label_2213d0:
    // 0x2213d0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2213d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2213d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213d8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2213d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213dc: 0x25082970  addiu       $t0, $t0, 0x2970
    ctx->pc = 0x2213dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10608));
    // 0x2213e0: 0x240503c1  addiu       $a1, $zero, 0x3C1
    ctx->pc = 0x2213e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
label_2213e4:
    // 0x2213e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2213e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2213e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2213ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2213f0: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    // 0x2213f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2213f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2213f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2213f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2213fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2213fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221400: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x221400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x221404: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x221404u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221408: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x221408u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22140c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x22140cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221410: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x221414: 0x8089794  j           func_225E50
    ctx->pc = 0x221414u;
    ctx->pc = 0x221418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221414u;
    // 0x221418: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x22141Cu;
label_22141c:
    // 0x22141c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22141cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221420: 0xc09814c  jal         func_260530
    ctx->pc = 0x221420u;
    SET_GPR_U32(ctx, 31, 0x221428u);
    ctx->pc = 0x221424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221420u;
    // 0x221424: 0x8de4ca0c  lw          $a0, -0x35F4($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260530u, 0x221420u, 0x221428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221428u;
label_221428:
    // 0x221428: 0x8ee4ca00  lw          $a0, -0x3600($s7)
    ctx->pc = 0x221428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953472)));
    // 0x22142c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22142cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221430: 0x8fc5c9fc  lw          $a1, -0x3604($fp)
    ctx->pc = 0x221430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953468)));
    // 0x221434: 0x8eaaca04  lw          $t2, -0x35FC($s5)
    ctx->pc = 0x221434u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953476)));
    // 0x221438: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x221438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22143c: 0x8debca08  lw          $t3, -0x35F8($t7)
    ctx->pc = 0x22143cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953480)));
    // 0x221440: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x221440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221444: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x221444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221448: 0xc0b95ce  jal         func_2E5738
    ctx->pc = 0x221448u;
    SET_GPR_U32(ctx, 31, 0x221450u);
    ctx->pc = 0x22144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221448u;
    // 0x22144c: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5738u, 0x221448u, 0x221450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221450u;
label_221450:
    // 0x221450: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x221450u;
    {
        const bool branch_taken_0x221450 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x221454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221450u;
        // 0x221454: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221450) {
            ctx->pc = 0x221480u;
            goto label_221480;
        }
    }
    ctx->pc = 0x221458u;
    // 0x221458: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22145c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221460: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x221460u;
    SET_GPR_U32(ctx, 31, 0x221468u);
    ctx->pc = 0x221464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221460u;
    // 0x221464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x221460u, 0x221468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221468u;
label_221468:
    // 0x221468: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22146c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221470: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221474: 0x25082988  addiu       $t0, $t0, 0x2988
    ctx->pc = 0x221474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10632));
    // 0x221478: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x221478u;
    {
        const bool branch_taken_0x221478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221478u;
        // 0x22147c: 0x240503f0  addiu       $a1, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221478) {
            ctx->pc = 0x2213E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2213e4;
        }
    }
    ctx->pc = 0x221480u;
label_221480:
    // 0x221480: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221484: 0x24051400  addiu       $a1, $zero, 0x1400
    ctx->pc = 0x221484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x221488: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x221488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22148c: 0xc089e36  jal         func_2278D8
    ctx->pc = 0x22148Cu;
    SET_GPR_U32(ctx, 31, 0x221494u);
    ctx->pc = 0x221490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22148Cu;
    // 0x221490: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278D8u, 0x22148Cu, 0x221494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221494u;
label_221494:
    // 0x221494: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x221498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22149c: 0xc0bad36  jal         func_2EB4D8
    ctx->pc = 0x22149Cu;
    SET_GPR_U32(ctx, 31, 0x2214A4u);
    ctx->pc = 0x2214A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22149Cu;
    // 0x2214a0: 0xade2ca10  sw          $v0, -0x35F0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294953488), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB4D8u, 0x22149Cu, 0x2214A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214A4u;
label_2214a4:
    // 0x2214a4: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2214A4u;
    {
        const bool branch_taken_0x2214a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2214A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214A4u;
        // 0x2214a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214a4) {
            ctx->pc = 0x2214D4u;
            goto label_2214d4;
        }
    }
    ctx->pc = 0x2214ACu;
    // 0x2214ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2214acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2214b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2214b4: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x2214B4u;
    SET_GPR_U32(ctx, 31, 0x2214BCu);
    ctx->pc = 0x2214B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214B4u;
    // 0x2214b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x2214B4u, 0x2214BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214BCu;
label_2214bc:
    // 0x2214bc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2214c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2214c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2214c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c8: 0x250829a0  addiu       $t0, $t0, 0x29A0
    ctx->pc = 0x2214c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10656));
    // 0x2214cc: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x2214CCu;
    {
        const bool branch_taken_0x2214cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214CCu;
        // 0x2214d0: 0x240503f8  addiu       $a1, $zero, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214cc) {
            ctx->pc = 0x2213E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2213e4;
        }
    }
    ctx->pc = 0x2214D4u;
label_2214d4:
    // 0x2214d4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2214d8: 0xc0b9fb0  jal         func_2E7EC0
    ctx->pc = 0x2214D8u;
    SET_GPR_U32(ctx, 31, 0x2214E0u);
    ctx->pc = 0x2214DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214D8u;
    // 0x2214dc: 0x248404c8  addiu       $a0, $a0, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7EC0u, 0x2214D8u, 0x2214E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214E0u;
label_2214e0:
    // 0x2214e0: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2214E0u;
    {
        const bool branch_taken_0x2214e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2214E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214E0u;
        // 0x2214e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214e0) {
            ctx->pc = 0x221510u;
            goto label_221510;
        }
    }
    ctx->pc = 0x2214E8u;
    // 0x2214e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2214e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2214ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2214f0: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x2214F0u;
    SET_GPR_U32(ctx, 31, 0x2214F8u);
    ctx->pc = 0x2214F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F0u;
    // 0x2214f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x2214F0u, 0x2214F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214F8u;
label_2214f8:
    // 0x2214f8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2214f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2214fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2214fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221500: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221504: 0x250829b8  addiu       $t0, $t0, 0x29B8
    ctx->pc = 0x221504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10680));
    // 0x221508: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x221508u;
    {
        const bool branch_taken_0x221508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221508u;
        // 0x22150c: 0x240503ff  addiu       $a1, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221508) {
            ctx->pc = 0x2213E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2213e4;
        }
    }
    ctx->pc = 0x221510u;
label_221510:
    // 0x221510: 0xc087f70  jal         func_21FDC0
    ctx->pc = 0x221510u;
    SET_GPR_U32(ctx, 31, 0x221518u);
    ctx->pc = 0x21FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FDC0u, 0x221510u, 0x221518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221518u;
label_221518:
    // 0x221518: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x221518u;
    SET_GPR_U32(ctx, 31, 0x221520u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x221518u, 0x221520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221520u;
label_221520:
    // 0x221520: 0xc087fb8  jal         func_21FEE0
    ctx->pc = 0x221520u;
    SET_GPR_U32(ctx, 31, 0x221528u);
    ctx->pc = 0x21FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEE0u, 0x221520u, 0x221528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221528u;
label_221528:
    // 0x221528: 0xc087ff6  jal         func_21FFD8
    ctx->pc = 0x221528u;
    SET_GPR_U32(ctx, 31, 0x221530u);
    ctx->pc = 0x21FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFD8u, 0x221528u, 0x221530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221530u;
label_221530:
    // 0x221530: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x221530u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x221534: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x221534u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
    // 0x221538: 0x25ef0870  addiu       $t7, $t7, 0x870
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2160));
    // 0x22153c: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x22153cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
    // 0x221540: 0xaecf003c  sw          $t7, 0x3C($s6)
    ctx->pc = 0x221540u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 15));
    // 0x221544: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x221544u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x221548: 0xadd6c9e8  sw          $s6, -0x3618($t6)
    ctx->pc = 0x221548u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294953448), GPR_U32(ctx, 22));
    // 0x22154c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221550: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x221554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x221554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221558: 0x25ef0958  addiu       $t7, $t7, 0x958
    ctx->pc = 0x221558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2392));
    // 0x22155c: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x22155cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x221560: 0xaecf0034  sw          $t7, 0x34($s6)
    ctx->pc = 0x221560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 15));
    // 0x221564: 0x25ce1190  addiu       $t6, $t6, 0x1190
    ctx->pc = 0x221564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4496));
    // 0x221568: 0xaece0030  sw          $t6, 0x30($s6)
    ctx->pc = 0x221568u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 14));
    // 0x22156c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22156cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221570: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x221570u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x221574: 0x25ef0b40  addiu       $t7, $t7, 0xB40
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2880));
    // 0x221578: 0xaecf0038  sw          $t7, 0x38($s6)
    ctx->pc = 0x221578u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 15));
    // 0x22157c: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x22157cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x221580: 0x25ef0c80  addiu       $t7, $t7, 0xC80
    ctx->pc = 0x221580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3200));
    // 0x221584: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x221584u;
    SET_GPR_U32(ctx, 31, 0x22158Cu);
    ctx->pc = 0x221588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221584u;
    // 0x221588: 0xaecf0040  sw          $t7, 0x40($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x221584u, 0x22158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22158Cu;
label_22158c:
    // 0x22158c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221594: 0x24050416  addiu       $a1, $zero, 0x416
    ctx->pc = 0x221594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x221598: 0x24e729e0  addiu       $a3, $a3, 0x29E0
    ctx->pc = 0x221598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10720));
    // 0x22159c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22159Cu;
    SET_GPR_U32(ctx, 31, 0x2215A4u);
    ctx->pc = 0x2215A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22159Cu;
    // 0x2215a0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22159Cu, 0x2215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215A4u;
label_2215a4:
    // 0x2215a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2215a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2215a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2215ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2215acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2215b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2215b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2215b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2215b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2215b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2215b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2215bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2215bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2215c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2215c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2215c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2215c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2215c8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2215c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2215cc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2215ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2215d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2215D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215D0u;
        // 0x2215d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2215D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2215D8u;
}
