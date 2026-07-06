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

// Function: sub_001543F0
// Address: 0x1543f0 - 0x154680
void sub_001543F0_0x1543f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001543F0_0x1543f0");
#endif

    switch (ctx->pc) {
        case 0x154410u: goto label_154410;
        case 0x154434u: goto label_154434;
        case 0x15447cu: goto label_15447c;
        case 0x154488u: goto label_154488;
        case 0x154494u: goto label_154494;
        case 0x1544bcu: goto label_1544bc;
        case 0x1544d4u: goto label_1544d4;
        case 0x1544e4u: goto label_1544e4;
        case 0x1544f0u: goto label_1544f0;
        case 0x154504u: goto label_154504;
        case 0x154528u: goto label_154528;
        case 0x154554u: goto label_154554;
        case 0x1545d0u: goto label_1545d0;
        case 0x1545ecu: goto label_1545ec;
        case 0x15461cu: goto label_15461c;
        case 0x154638u: goto label_154638;
        case 0x15464cu: goto label_15464c;
        case 0x154654u: goto label_154654;
        default: break;
    }

    ctx->pc = 0x1543f0u;

    // 0x1543f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1543f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1543f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1543f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1543f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1543fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1543fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154408: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x154408u;
    SET_GPR_U32(ctx, 31, 0x154410u);
    ctx->pc = 0x15440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154408u;
    // 0x15440c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x154408u, 0x154410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154410u;
label_154410:
    // 0x154410: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154414: 0x8c42da20  lw          $v0, -0x25E0($v0)
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957600)));
    // 0x154418: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154418) {
            ctx->pc = 0x15443Cu;
            goto label_15443c;
        }
    }
    ctx->pc = 0x154420u;
    // 0x154420: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x154424: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x154428: 0x8c701e50  lw          $s0, 0x1E50($v1)
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7760)));
    // 0x15442c: 0xc0c25cc  jal         func_309730
    ctx->pc = 0x15442Cu;
    SET_GPR_U32(ctx, 31, 0x154434u);
    ctx->pc = 0x154430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15442Cu;
    // 0x154430: 0xac401e50  sw          $zero, 0x1E50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309730u, 0x15442Cu, 0x154434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154434u;
label_154434:
    // 0x154434: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x154434u;
    {
        const bool branch_taken_0x154434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154434u;
        // 0x154438: 0x11363c  dsll32      $a2, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154434) {
            ctx->pc = 0x154498u;
            goto label_154498;
        }
    }
    ctx->pc = 0x15443Cu;
label_15443c:
    // 0x15443c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154440: 0x8c42ef58  lw          $v0, -0x10A8($v0)
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963032)));
    // 0x154444: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x154444u;
    {
        const bool branch_taken_0x154444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154444) {
            ctx->pc = 0x154448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154444u;
            // 0x154448: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154474u;
            goto label_154474;
        }
    }
    ctx->pc = 0x15444Cu;
    // 0x15444c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154450: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154454: 0xac40ef70  sw          $zero, -0x1090($v0)
    ctx->pc = 0x154454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963056), GPR_U32(ctx, 0));
    // 0x154458: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15445c: 0xac40ef88  sw          $zero, -0x1078($v0)
    ctx->pc = 0x15445cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963080), GPR_U32(ctx, 0));
    // 0x154460: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154464: 0xac40ef80  sw          $zero, -0x1080($v0)
    ctx->pc = 0x154464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963072), GPR_U32(ctx, 0));
    // 0x154468: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15446c: 0xac40ef78  sw          $zero, -0x1088($v0)
    ctx->pc = 0x15446cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963064), GPR_U32(ctx, 0));
    // 0x154470: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x154470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154474:
    // 0x154474: 0xc063cac  jal         func_18F2B0
    ctx->pc = 0x154474u;
    SET_GPR_U32(ctx, 31, 0x15447Cu);
    ctx->pc = 0x18F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F2B0u, 0x154474u, 0x15447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15447Cu;
label_15447c:
    // 0x15447c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x154480: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x154480u;
    SET_GPR_U32(ctx, 31, 0x154488u);
    ctx->pc = 0x154484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154480u;
    // 0x154484: 0x2484e7b8  addiu       $a0, $a0, -0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x154480u, 0x154488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154488u;
label_154488:
    // 0x154488: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15448c: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x15448Cu;
    SET_GPR_U32(ctx, 31, 0x154494u);
    ctx->pc = 0x154490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15448Cu;
    // 0x154490: 0x2484e7c0  addiu       $a0, $a0, -0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x15448Cu, 0x154494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154494u;
label_154494:
    // 0x154494: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x154494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
label_154498:
    // 0x154498: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15449c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x15449cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1544a0: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1544a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1544a4: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x1544A4u;
    {
        const bool branch_taken_0x1544a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A4u;
        // 0x1544a8: 0xa051f340  sb          $s1, -0xCC0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964032), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544a4) {
            ctx->pc = 0x15460Cu;
            goto label_15460c;
        }
    }
    ctx->pc = 0x1544ACu;
    // 0x1544ac: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1544b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1544b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1544b4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1544B4u;
    SET_GPR_U32(ctx, 31, 0x1544BCu);
    ctx->pc = 0x1544B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544B4u;
    // 0x1544b8: 0x24a5d118  addiu       $a1, $a1, -0x2EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1544B4u, 0x1544BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544BCu;
label_1544bc:
    // 0x1544bc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1544bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1544c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1544c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1544c4: 0xac50ef58  sw          $s0, -0x10A8($v0)
    ctx->pc = 0x1544c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963032), GPR_U32(ctx, 16));
    // 0x1544c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1544c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544cc: 0xc069034  jal         func_1A40D0
    ctx->pc = 0x1544CCu;
    SET_GPR_U32(ctx, 31, 0x1544D4u);
    ctx->pc = 0x1544D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544CCu;
    // 0x1544d0: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40D0u, 0x1544CCu, 0x1544D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D4u;
label_1544d4:
    // 0x1544d4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1544d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1544d8: 0x8c45ef58  lw          $a1, -0x10A8($v0)
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963032)));
    // 0x1544dc: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x1544DCu;
    SET_GPR_U32(ctx, 31, 0x1544E4u);
    ctx->pc = 0x1544E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544DCu;
    // 0x1544e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x1544DCu, 0x1544E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544E4u;
label_1544e4:
    // 0x1544e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1544e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1544e8: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1544E8u;
    SET_GPR_U32(ctx, 31, 0x1544F0u);
    ctx->pc = 0x1544ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544E8u;
    // 0x1544ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1544E8u, 0x1544F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544F0u;
label_1544f0:
    // 0x1544f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1544f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1544f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1544f8: 0xac62ef70  sw          $v0, -0x1090($v1)
    ctx->pc = 0x1544f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963056), GPR_U32(ctx, 2));
    // 0x1544fc: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x1544FCu;
    SET_GPR_U32(ctx, 31, 0x154504u);
    ctx->pc = 0x154500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544FCu;
    // 0x154500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x1544FCu, 0x154504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154504u;
label_154504:
    // 0x154504: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154508: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15450c: 0x8063f340  lb          $v1, -0xCC0($v1)
    ctx->pc = 0x15450cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x154510: 0xac82ef68  sw          $v0, -0x1098($a0)
    ctx->pc = 0x154510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963048), GPR_U32(ctx, 2));
    // 0x154514: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x154518: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154518u;
    {
        const bool branch_taken_0x154518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x154518) {
            ctx->pc = 0x154534u;
            goto label_154534;
        }
    }
    ctx->pc = 0x154520u;
    // 0x154520: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x154520u;
    SET_GPR_U32(ctx, 31, 0x154528u);
    ctx->pc = 0x154524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154520u;
    // 0x154524: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x154520u, 0x154528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154528u;
label_154528:
    // 0x154528: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15452c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15452Cu;
    {
        const bool branch_taken_0x15452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15452Cu;
        // 0x154530: 0xac62ef60  sw          $v0, -0x10A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15452c) {
            ctx->pc = 0x15453Cu;
            goto label_15453c;
        }
    }
    ctx->pc = 0x154534u;
label_154534:
    // 0x154534: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154538: 0xac60ef60  sw          $zero, -0x10A0($v1)
    ctx->pc = 0x154538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963040), GPR_U32(ctx, 0));
label_15453c:
    // 0x15453c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154540: 0x8c72ef70  lw          $s2, -0x1090($v1)
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963056)));
    // 0x154544: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x154544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x154548: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x154548u;
    {
        const bool branch_taken_0x154548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154548u;
        // 0x15454c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154548) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x154550u;
    // 0x154550: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x154550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154554:
    // 0x154554: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x154554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x154558: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15455c: 0x42a3c  dsll32      $a1, $a0, 8
    ctx->pc = 0x15455cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 8));
    // 0x154560: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x154560u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x154564: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x154564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x154568: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x154568u;
    {
        const bool branch_taken_0x154568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154568u;
        // 0x15456c: 0x52a3e  dsrl32      $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154568) {
            ctx->pc = 0x1545C8u;
            goto label_1545c8;
        }
    }
    ctx->pc = 0x154570u;
    // 0x154570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154574: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x154574u;
    {
        const bool branch_taken_0x154574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154574) {
            ctx->pc = 0x1545B8u;
            goto label_1545b8;
        }
    }
    ctx->pc = 0x15457Cu;
    // 0x15457c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154580: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x154580u;
    {
        const bool branch_taken_0x154580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154580) {
            ctx->pc = 0x1545A8u;
            goto label_1545a8;
        }
    }
    ctx->pc = 0x154588u;
    // 0x154588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154588u;
    {
        const bool branch_taken_0x154588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154588) {
            ctx->pc = 0x154598u;
            goto label_154598;
        }
    }
    ctx->pc = 0x154590u;
    // 0x154590: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x154590u;
    {
        const bool branch_taken_0x154590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154590) {
            ctx->pc = 0x1545F0u;
            goto label_1545f0;
        }
    }
    ctx->pc = 0x154598u;
label_154598:
    // 0x154598: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x154598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15459c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1545a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1545A0u;
    {
        const bool branch_taken_0x1545a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545A0u;
        // 0x1545a4: 0xac64ef88  sw          $a0, -0x1078($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545a0) {
            ctx->pc = 0x1545F0u;
            goto label_1545f0;
        }
    }
    ctx->pc = 0x1545A8u;
label_1545a8:
    // 0x1545a8: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1545ac: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1545b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1545B0u;
    {
        const bool branch_taken_0x1545b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B0u;
        // 0x1545b4: 0xac64ef80  sw          $a0, -0x1080($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963072), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545b0) {
            ctx->pc = 0x1545F0u;
            goto label_1545f0;
        }
    }
    ctx->pc = 0x1545B8u;
label_1545b8:
    // 0x1545b8: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1545bc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1545c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1545C0u;
    {
        const bool branch_taken_0x1545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545C0u;
        // 0x1545c4: 0xac64ef78  sw          $a0, -0x1088($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545c0) {
            ctx->pc = 0x1545F0u;
            goto label_1545f0;
        }
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0xc0c8860  jal         func_322180
    ctx->pc = 0x1545C8u;
    SET_GPR_U32(ctx, 31, 0x1545D0u);
    ctx->pc = 0x322180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322180u, 0x1545C8u, 0x1545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545D0u;
label_1545d0:
    // 0x1545d0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1545d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x1545d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1545d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1545dc: 0x24c6e7b8  addiu       $a2, $a2, -0x1848
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961080));
    // 0x1545e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1545e4: 0xc0c8978  jal         func_3225E0
    ctx->pc = 0x1545E4u;
    SET_GPR_U32(ctx, 31, 0x1545ECu);
    ctx->pc = 0x1545E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545E4u;
    // 0x1545e8: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225E0u, 0x1545E4u, 0x1545ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545ECu;
label_1545ec:
    // 0x1545ec: 0x0  nop
    ctx->pc = 0x1545ecu;
    // NOP
label_1545f0:
    // 0x1545f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1545f4: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x1545f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1545f8: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1545F8u;
    {
        const bool branch_taken_0x1545f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F8u;
        // 0x1545fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f8) {
            ctx->pc = 0x154554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154554;
        }
    }
    ctx->pc = 0x154600u;
label_154600:
    // 0x154600: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154604: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x154604u;
    {
        const bool branch_taken_0x154604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154604u;
        // 0x154608: 0xac60da20  sw          $zero, -0x25E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154604) {
            ctx->pc = 0x154660u;
            goto label_154660;
        }
    }
    ctx->pc = 0x15460Cu;
label_15460c:
    // 0x15460c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154614: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x154614u;
    SET_GPR_U32(ctx, 31, 0x15461Cu);
    ctx->pc = 0x154618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154614u;
    // 0x154618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x154614u, 0x15461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15461Cu;
label_15461c:
    // 0x15461c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x154620: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x154624: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x154628: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x154628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15462c: 0x24a5d150  addiu       $a1, $a1, -0x2EB0
    ctx->pc = 0x15462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
    // 0x154630: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x154630u;
    SET_GPR_U32(ctx, 31, 0x154638u);
    ctx->pc = 0x154634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154630u;
    // 0x154634: 0x2446fff8  addiu       $a2, $v0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x154630u, 0x154638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154638u;
label_154638:
    // 0x154638: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x154638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x15463c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154640: 0xac501e50  sw          $s0, 0x1E50($v0)
    ctx->pc = 0x154640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7760), GPR_U32(ctx, 16));
    // 0x154644: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x154644u;
    SET_GPR_U32(ctx, 31, 0x15464Cu);
    ctx->pc = 0x154648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154644u;
    // 0x154648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x154644u, 0x15464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15464Cu;
label_15464c:
    // 0x15464c: 0xc0c25c4  jal         func_309710
    ctx->pc = 0x15464Cu;
    SET_GPR_U32(ctx, 31, 0x154654u);
    ctx->pc = 0x309710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309710u, 0x15464Cu, 0x154654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154654u;
label_154654:
    // 0x154654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154658: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15465c: 0xac64da20  sw          $a0, -0x25E0($v1)
    ctx->pc = 0x15465cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957600), GPR_U32(ctx, 4));
label_154660:
    // 0x154660: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15466c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15466cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154674: 0x3e00008  jr          $ra
    ctx->pc = 0x154674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154674u;
        // 0x154678: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15467Cu;
    // 0x15467c: 0x0  nop
    ctx->pc = 0x15467cu;
    // NOP
}
