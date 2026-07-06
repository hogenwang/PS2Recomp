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

// Function: sub_00153640
// Address: 0x153640 - 0x1537d0
void sub_00153640_0x153640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153640_0x153640");
#endif

    switch (ctx->pc) {
        case 0x153670u: goto label_153670;
        case 0x153678u: goto label_153678;
        case 0x153690u: goto label_153690;
        case 0x1536a0u: goto label_1536a0;
        case 0x1536acu: goto label_1536ac;
        case 0x1536c0u: goto label_1536c0;
        case 0x1536e4u: goto label_1536e4;
        case 0x153710u: goto label_153710;
        case 0x1537a0u: goto label_1537a0;
        default: break;
    }

    ctx->pc = 0x153640u;

    // 0x153640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x153644: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x153644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x153648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x153648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15364c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153650: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153654: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x153654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15365c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153664: 0x8046f340  lb          $a2, -0xCC0($v0)
    ctx->pc = 0x153664u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x153668: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x153668u;
    SET_GPR_U32(ctx, 31, 0x153670u);
    ctx->pc = 0x15366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153668u;
    // 0x15366c: 0x24a5d118  addiu       $a1, $a1, -0x2EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x153668u, 0x153670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153670u;
label_153670:
    // 0x153670: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x153670u;
    SET_GPR_U32(ctx, 31, 0x153678u);
    ctx->pc = 0x153674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153670u;
    // 0x153674: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x153670u, 0x153678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153678u;
label_153678:
    // 0x153678: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15367c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153680: 0xac62ef58  sw          $v0, -0x10A8($v1)
    ctx->pc = 0x153680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963032), GPR_U32(ctx, 2));
    // 0x153684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153688: 0xc069034  jal         func_1A40D0
    ctx->pc = 0x153688u;
    SET_GPR_U32(ctx, 31, 0x153690u);
    ctx->pc = 0x15368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153688u;
    // 0x15368c: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40D0u, 0x153688u, 0x153690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153690u;
label_153690:
    // 0x153690: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153694: 0x8c45ef58  lw          $a1, -0x10A8($v0)
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963032)));
    // 0x153698: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x153698u;
    SET_GPR_U32(ctx, 31, 0x1536A0u);
    ctx->pc = 0x15369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153698u;
    // 0x15369c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x153698u, 0x1536A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536A0u;
label_1536a0:
    // 0x1536a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1536a4: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1536A4u;
    SET_GPR_U32(ctx, 31, 0x1536ACu);
    ctx->pc = 0x1536A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536A4u;
    // 0x1536a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1536A4u, 0x1536ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536ACu;
label_1536ac:
    // 0x1536ac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1536acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1536b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1536b4: 0xac62ef70  sw          $v0, -0x1090($v1)
    ctx->pc = 0x1536b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963056), GPR_U32(ctx, 2));
    // 0x1536b8: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1536B8u;
    SET_GPR_U32(ctx, 31, 0x1536C0u);
    ctx->pc = 0x1536BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536B8u;
    // 0x1536bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1536B8u, 0x1536C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536C0u;
label_1536c0:
    // 0x1536c0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1536c4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1536c8: 0xac82ef68  sw          $v0, -0x1098($a0)
    ctx->pc = 0x1536c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963048), GPR_U32(ctx, 2));
    // 0x1536cc: 0x8062f340  lb          $v0, -0xCC0($v1)
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x1536d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1536d4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1536D4u;
    {
        const bool branch_taken_0x1536d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1536d4) {
            ctx->pc = 0x1536F0u;
            goto label_1536f0;
        }
    }
    ctx->pc = 0x1536DCu;
    // 0x1536dc: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1536DCu;
    SET_GPR_U32(ctx, 31, 0x1536E4u);
    ctx->pc = 0x1536E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536DCu;
    // 0x1536e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1536DCu, 0x1536E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536E4u;
label_1536e4:
    // 0x1536e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1536e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1536e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1536E8u;
    {
        const bool branch_taken_0x1536e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536E8u;
        // 0x1536ec: 0xac62ef60  sw          $v0, -0x10A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e8) {
            ctx->pc = 0x1536F8u;
            goto label_1536f8;
        }
    }
    ctx->pc = 0x1536F0u;
label_1536f0:
    // 0x1536f0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1536f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1536f4: 0xac40ef60  sw          $zero, -0x10A0($v0)
    ctx->pc = 0x1536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963040), GPR_U32(ctx, 0));
label_1536f8:
    // 0x1536f8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1536fc: 0x8c52ef70  lw          $s2, -0x1090($v0)
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963056)));
    // 0x153700: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x153704: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x153704u;
    {
        const bool branch_taken_0x153704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x153708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153704u;
        // 0x153708: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153704) {
            ctx->pc = 0x1537B0u;
            goto label_1537b0;
        }
    }
    ctx->pc = 0x15370Cu;
    // 0x15370c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15370cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153710:
    // 0x153710: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x153710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x153714: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x153714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153718: 0x2223c  dsll32      $a0, $v0, 8
    ctx->pc = 0x153718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 8));
    // 0x15371c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x153720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x153720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x153724: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x153724u;
    {
        const bool branch_taken_0x153724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x153728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153724u;
        // 0x153728: 0x4223e  dsrl32      $a0, $a0, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153724) {
            ctx->pc = 0x153788u;
            goto label_153788;
        }
    }
    ctx->pc = 0x15372Cu;
    // 0x15372c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153730: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x153730u;
    {
        const bool branch_taken_0x153730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x153730) {
            ctx->pc = 0x153778u;
            goto label_153778;
        }
    }
    ctx->pc = 0x153738u;
    // 0x153738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15373c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15373Cu;
    {
        const bool branch_taken_0x15373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15373c) {
            ctx->pc = 0x153768u;
            goto label_153768;
        }
    }
    ctx->pc = 0x153744u;
    // 0x153744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153744u;
    {
        const bool branch_taken_0x153744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153744) {
            ctx->pc = 0x153758u;
            goto label_153758;
        }
    }
    ctx->pc = 0x15374Cu;
    // 0x15374c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15374Cu;
    {
        const bool branch_taken_0x15374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15374c) {
            ctx->pc = 0x1537A0u;
            goto label_1537a0;
        }
    }
    ctx->pc = 0x153754u;
    // 0x153754: 0x0  nop
    ctx->pc = 0x153754u;
    // NOP
label_153758:
    // 0x153758: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x153758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x15375c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153760: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x153760u;
    {
        const bool branch_taken_0x153760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153760u;
        // 0x153764: 0xac43ef88  sw          $v1, -0x1078($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963080), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153760) {
            ctx->pc = 0x1537A0u;
            goto label_1537a0;
        }
    }
    ctx->pc = 0x153768u;
label_153768:
    // 0x153768: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x153768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x15376c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153770: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x153770u;
    {
        const bool branch_taken_0x153770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153770u;
        // 0x153774: 0xac43ef80  sw          $v1, -0x1080($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153770) {
            ctx->pc = 0x1537A0u;
            goto label_1537a0;
        }
    }
    ctx->pc = 0x153778u;
label_153778:
    // 0x153778: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x153778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x15377c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153780: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153780u;
    {
        const bool branch_taken_0x153780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153780u;
        // 0x153784: 0xac43ef78  sw          $v1, -0x1088($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153780) {
            ctx->pc = 0x1537A0u;
            goto label_1537a0;
        }
    }
    ctx->pc = 0x153788u;
label_153788:
    // 0x153788: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x153788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x15378c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153790: 0x24c6e7b8  addiu       $a2, $a2, -0x1848
    ctx->pc = 0x153790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961080));
    // 0x153794: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x153794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153798: 0xc0c8978  jal         func_3225E0
    ctx->pc = 0x153798u;
    SET_GPR_U32(ctx, 31, 0x1537A0u);
    ctx->pc = 0x15379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153798u;
    // 0x15379c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225E0u, 0x153798u, 0x1537A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537A0u;
label_1537a0:
    // 0x1537a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1537a4: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x1537a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1537a8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1537A8u;
    {
        const bool branch_taken_0x1537a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1537ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537A8u;
        // 0x1537ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537a8) {
            ctx->pc = 0x153710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153710;
        }
    }
    ctx->pc = 0x1537B0u;
label_1537b0:
    // 0x1537b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1537b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1537b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1537b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1537b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1537bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1537bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1537c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1537c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1537c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1537c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1537c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1537C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1537CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537C8u;
        // 0x1537cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1537C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1537D0u;
}
