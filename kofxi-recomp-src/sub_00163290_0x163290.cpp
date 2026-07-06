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

// Function: sub_00163290
// Address: 0x163290 - 0x163500
void sub_00163290_0x163290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163290_0x163290");
#endif

    switch (ctx->pc) {
        case 0x1632e8u: goto label_1632e8;
        case 0x16330cu: goto label_16330c;
        case 0x163374u: goto label_163374;
        case 0x1633acu: goto label_1633ac;
        case 0x1633c8u: goto label_1633c8;
        case 0x163438u: goto label_163438;
        case 0x16344cu: goto label_16344c;
        case 0x163488u: goto label_163488;
        default: break;
    }

    ctx->pc = 0x163290u;

    // 0x163290: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x163294: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x163294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x163298: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x163298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16329c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1632a0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1632a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1632a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1632a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1632a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1632ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1632acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1632b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1632b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1632b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1632b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1632bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1632bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1632c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1632c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1632c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1632c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1632c8: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1632cc: 0xa7a600ae  sh          $a2, 0xAE($sp)
    ctx->pc = 0x1632ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 6));
    // 0x1632d0: 0xa7a700ac  sh          $a3, 0xAC($sp)
    ctx->pc = 0x1632d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 7));
    // 0x1632d4: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x1632d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1632d8: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x1632d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1632dc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1632e0: 0xc058bfc  jal         func_162FF0
    ctx->pc = 0x1632E0u;
    SET_GPR_U32(ctx, 31, 0x1632E8u);
    ctx->pc = 0x1632E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632E0u;
    // 0x1632e4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FF0u, 0x1632E0u, 0x1632E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632E8u;
label_1632e8:
    // 0x1632e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1632e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1632ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1632ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1632f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x1632F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1632F0u;
            // 0x1632f4: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163300u;
            goto label_163300;
        }
    }
    ctx->pc = 0x1632F8u;
    // 0x1632f8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1632F8u;
    {
        const bool branch_taken_0x1632f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632F8u;
        // 0x1632fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632f8) {
            ctx->pc = 0x1634C4u;
            goto label_1634c4;
        }
    }
    ctx->pc = 0x163300u;
label_163300:
    // 0x163300: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x163300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x163304: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x163304u;
    SET_GPR_U32(ctx, 31, 0x16330Cu);
    ctx->pc = 0x163308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163304u;
    // 0x163308: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x163304u, 0x16330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16330Cu;
label_16330c:
    // 0x16330c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16330Cu;
    {
        const bool branch_taken_0x16330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16330c) {
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x163314u;
    // 0x163314: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x163314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163318: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16331c: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x16331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x163320: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x163320u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x163324: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x163324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163328: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x163328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16332c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16332Cu;
    {
        const bool branch_taken_0x16332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16332c) {
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x163334u;
    // 0x163334: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x163334u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_163338:
    // 0x163338: 0x52c00010  beql        $s6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x163338u;
    {
        const bool branch_taken_0x163338 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x163338) {
            ctx->pc = 0x16333Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163338u;
            // 0x16333c: 0x321200ff  andi        $s2, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16337Cu;
            goto label_16337c;
        }
    }
    ctx->pc = 0x163340u;
    // 0x163340: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x163344: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x163348: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x163348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x16334c: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x16334cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x163350: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x163350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x163354: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163358: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16335c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x163360: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x163364: 0x24a5d428  addiu       $a1, $a1, -0x2BD8
    ctx->pc = 0x163364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956072));
    // 0x163368: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x163368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x16336c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x16336Cu;
    SET_GPR_U32(ctx, 31, 0x163374u);
    ctx->pc = 0x163370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16336Cu;
    // 0x163370: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x16336Cu, 0x163374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163374u;
label_163374:
    // 0x163374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163374u;
    {
        const bool branch_taken_0x163374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163374u;
        // 0x163378: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163374) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x16337Cu;
label_16337c:
    // 0x16337c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x163380: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x163384: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x163384u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x163388: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x163388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16338c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x16338cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163390: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163394: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x163394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x163398: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x16339c: 0x24a5d428  addiu       $a1, $a1, -0x2BD8
    ctx->pc = 0x16339cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956072));
    // 0x1633a0: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x1633a4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1633A4u;
    SET_GPR_U32(ctx, 31, 0x1633ACu);
    ctx->pc = 0x1633A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633A4u;
    // 0x1633a8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1633A4u, 0x1633ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633ACu;
label_1633ac:
    // 0x1633ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1633acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1633b0:
    // 0x1633b0: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1633C0u;
            goto label_1633c0;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1633B8u;
    {
        const bool branch_taken_0x1633b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B8u;
        // 0x1633bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b8) {
            ctx->pc = 0x1634C4u;
            goto label_1634c4;
        }
    }
    ctx->pc = 0x1633C0u;
label_1633c0:
    // 0x1633c0: 0xc058c20  jal         func_163080
    ctx->pc = 0x1633C0u;
    SET_GPR_U32(ctx, 31, 0x1633C8u);
    ctx->pc = 0x163080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163080u, 0x1633C0u, 0x1633C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633C8u;
label_1633c8:
    // 0x1633c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1633c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1633ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1633d0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1633d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1633d4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1633d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1633d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1633dc: 0x2463dbe0  addiu       $v1, $v1, -0x2420
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958048));
    // 0x1633e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1633e4: 0x10b880  sll         $s7, $s0, 2
    ctx->pc = 0x1633e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1633e8: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1633e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1633ec: 0x24a5d438  addiu       $a1, $a1, -0x2BC8
    ctx->pc = 0x1633ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
    // 0x1633f0: 0x490c0  sll         $s2, $a0, 3
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1633f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1633f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1633fc: 0x24421f00  addiu       $v0, $v0, 0x1F00
    ctx->pc = 0x1633fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x163400: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x163404: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x163408: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x163408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x16340c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x163410: 0x922300dc  lbu         $v1, 0xDC($s1)
    ctx->pc = 0x163410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163414: 0x24841cf0  addiu       $a0, $a0, 0x1CF0
    ctx->pc = 0x163414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7408));
    // 0x163418: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x16341c: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x16341cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x163420: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x163420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x163424: 0xacc300dc  sw          $v1, 0xDC($a2)
    ctx->pc = 0x163424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 3));
    // 0x163428: 0xa0d005f1  sb          $s0, 0x5F1($a2)
    ctx->pc = 0x163428u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1521), (uint8_t)GPR_U32(ctx, 16));
    // 0x16342c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163430: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x163430u;
    SET_GPR_U32(ctx, 31, 0x163438u);
    ctx->pc = 0x163434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163430u;
    // 0x163434: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x163430u, 0x163438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163438u;
label_163438:
    // 0x163438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16343c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16343Cu;
    {
        const bool branch_taken_0x16343c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16343c) {
            ctx->pc = 0x163454u;
            goto label_163454;
        }
    }
    ctx->pc = 0x163444u;
    // 0x163444: 0xc055728  jal         func_155CA0
    ctx->pc = 0x163444u;
    SET_GPR_U32(ctx, 31, 0x16344Cu);
    ctx->pc = 0x163448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163444u;
    // 0x163448: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x163444u, 0x16344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16344Cu;
label_16344c:
    // 0x16344c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16344Cu;
    {
        const bool branch_taken_0x16344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16344Cu;
        // 0x163450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16344c) {
            ctx->pc = 0x1634C4u;
            goto label_1634c4;
        }
    }
    ctx->pc = 0x163454u;
label_163454:
    // 0x163454: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x163454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x163458: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x163458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x16345c: 0x2463dbf8  addiu       $v1, $v1, -0x2408
    ctx->pc = 0x16345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958072));
    // 0x163460: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x163460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163464: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x163464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x163468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16346c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x163470: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x163470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x163474: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x163474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x163478: 0xae5105dc  sw          $s1, 0x5DC($s2)
    ctx->pc = 0x163478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1500), GPR_U32(ctx, 17));
    // 0x16347c: 0xa64200ea  sh          $v0, 0xEA($s2)
    ctx->pc = 0x16347cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x163480: 0xc058d40  jal         func_163500
    ctx->pc = 0x163480u;
    SET_GPR_U32(ctx, 31, 0x163488u);
    ctx->pc = 0x163484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163480u;
    // 0x163484: 0xa25005f1  sb          $s0, 0x5F1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1521), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163500u, 0x163480u, 0x163488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163488u;
label_163488:
    // 0x163488: 0x52c00003  beql        $s6, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163488u;
    {
        const bool branch_taken_0x163488 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x163488) {
            ctx->pc = 0x16348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163488u;
            // 0x16348c: 0xa64000f2  sh          $zero, 0xF2($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163498u;
            goto label_163498;
        }
    }
    ctx->pc = 0x163490u;
    // 0x163490: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x163490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x163494: 0xa64200f2  sh          $v0, 0xF2($s2)
    ctx->pc = 0x163494u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 2));
label_163498:
    // 0x163498: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x163498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x16349c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1634a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1634a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1634a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1634a8: 0x87a200ac  lh          $v0, 0xAC($sp)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1634ac: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x1634acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1634b0: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1634b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1634b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1634b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1634c0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1634c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_1634c4:
    // 0x1634c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1634c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1634c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1634c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1634cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1634ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1634d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1634d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1634d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1634d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1634d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1634d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1634dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1634dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1634e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1634e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1634e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1634e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1634e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1634e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1634ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1634ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1634F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634ECu;
        // 0x1634f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1634ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1634F4u;
    // 0x1634f4: 0x0  nop
    ctx->pc = 0x1634f4u;
    // NOP
    // 0x1634f8: 0x0  nop
    ctx->pc = 0x1634f8u;
    // NOP
    // 0x1634fc: 0x0  nop
    ctx->pc = 0x1634fcu;
    // NOP
    if (ctx->pc == 0x1634fcu) { ctx->pc = 0x163500u; }
}
