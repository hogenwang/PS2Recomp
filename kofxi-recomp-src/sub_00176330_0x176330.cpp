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

// Function: sub_00176330
// Address: 0x176330 - 0x1765d0
void sub_00176330_0x176330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176330_0x176330");
#endif

    switch (ctx->pc) {
        case 0x17638cu: goto label_17638c;
        case 0x176394u: goto label_176394;
        case 0x17639cu: goto label_17639c;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763d8u: goto label_1763d8;
        case 0x176408u: goto label_176408;
        case 0x176418u: goto label_176418;
        case 0x17644cu: goto label_17644c;
        case 0x176454u: goto label_176454;
        case 0x176464u: goto label_176464;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764b4u: goto label_1764b4;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764dcu: goto label_1764dc;
        case 0x176504u: goto label_176504;
        case 0x176528u: goto label_176528;
        case 0x176560u: goto label_176560;
        case 0x176570u: goto label_176570;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765b8u: goto label_1765b8;
        default: break;
    }

    ctx->pc = 0x176330u;

label_176330:
    // 0x176330: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176334: 0x8c66af68  lw          $a2, -0x5098($v1)
    ctx->pc = 0x176334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x176338: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x176338u;
    {
        const bool branch_taken_0x176338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x176338) {
            ctx->pc = 0x176364u;
            goto label_176364;
        }
    }
    ctx->pc = 0x176340u;
    // 0x176340: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x176340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x176344: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176348: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17634c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17634cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x176350: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x176350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x176354: 0x8c65af68  lw          $a1, -0x5098($v1)
    ctx->pc = 0x176354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x176358: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x176358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17635c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x176360: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x176360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_176364:
    // 0x176364: 0x3e00008  jr          $ra
    ctx->pc = 0x176364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17636Cu;
    // 0x17636c: 0x0  nop
    ctx->pc = 0x17636cu;
    // NOP
    // 0x176370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17637c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176380: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x176380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176384: 0xc05dfcc  jal         func_177F30
    ctx->pc = 0x176384u;
    SET_GPR_U32(ctx, 31, 0x17638Cu);
    ctx->pc = 0x176388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176384u;
    // 0x176388: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F30u, 0x176384u, 0x17638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17638Cu;
label_17638c:
    // 0x17638c: 0xc05db6c  jal         func_176DB0
    ctx->pc = 0x17638Cu;
    SET_GPR_U32(ctx, 31, 0x176394u);
    ctx->pc = 0x176390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17638Cu;
    // 0x176390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DB0u, 0x17638Cu, 0x176394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176394u;
label_176394:
    // 0x176394: 0xc05dc30  jal         func_1770C0
    ctx->pc = 0x176394u;
    SET_GPR_U32(ctx, 31, 0x17639Cu);
    ctx->pc = 0x1770C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770C0u, 0x176394u, 0x17639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17639Cu;
label_17639c:
    // 0x17639c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17639Cu;
    {
        const bool branch_taken_0x17639c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17639c) {
            ctx->pc = 0x1763C8u;
            goto label_1763c8;
        }
    }
    ctx->pc = 0x1763A4u;
    // 0x1763a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1763a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1763a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1763a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1763ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1763acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1763b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763b4: 0xa065a220  sb          $a1, -0x5DE0($v1)
    ctx->pc = 0x1763b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943264), (uint8_t)GPR_U32(ctx, 5));
    // 0x1763b8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x1763B8u;
    SET_GPR_U32(ctx, 31, 0x1763C0u);
    ctx->pc = 0x1763BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763B8u;
    // 0x1763bc: 0xac40a240  sw          $zero, -0x5DC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x1763B8u, 0x1763C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763C0u;
label_1763c0:
    // 0x1763c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1763C0u;
    {
        const bool branch_taken_0x1763c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763C0u;
        // 0x1763c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763c0) {
            ctx->pc = 0x1763DCu;
            goto label_1763dc;
        }
    }
    ctx->pc = 0x1763C8u;
label_1763c8:
    // 0x1763c8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1763c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1763cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1763ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763d0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1763D0u;
    SET_GPR_U32(ctx, 31, 0x1763D8u);
    ctx->pc = 0x1763D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763D0u;
    // 0x1763d4: 0x24846430  addiu       $a0, $a0, 0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1763D0u, 0x1763D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763D8u;
label_1763d8:
    // 0x1763d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1763d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1763dc:
    // 0x1763dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1763dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1763e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1763e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1763e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1763E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1763E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763E4u;
        // 0x1763e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1763E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1763ECu;
    // 0x1763ec: 0x0  nop
    ctx->pc = 0x1763ecu;
    // NOP
    // 0x1763f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1763f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1763f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1763f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1763f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1763f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1763fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1763fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176400: 0xc067ca4  jal         func_19F290
    ctx->pc = 0x176400u;
    SET_GPR_U32(ctx, 31, 0x176408u);
    ctx->pc = 0x176404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176400u;
    // 0x176404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F290u, 0x176400u, 0x176408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176408u;
label_176408:
    // 0x176408: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x176408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x17640c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176410: 0xc055768  jal         func_155DA0
    ctx->pc = 0x176410u;
    SET_GPR_U32(ctx, 31, 0x176418u);
    ctx->pc = 0x176414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176410u;
    // 0x176414: 0x24846480  addiu       $a0, $a0, 0x6480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x176410u, 0x176418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176418u;
label_176418:
    // 0x176418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17641c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17641cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176420: 0x3e00008  jr          $ra
    ctx->pc = 0x176420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176420u;
        // 0x176424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176428u;
    // 0x176428: 0x0  nop
    ctx->pc = 0x176428u;
    // NOP
    // 0x17642c: 0x0  nop
    ctx->pc = 0x17642cu;
    // NOP
    // 0x176430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17643c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176440: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176444: 0xc05dfdc  jal         func_177F70
    ctx->pc = 0x176444u;
    SET_GPR_U32(ctx, 31, 0x17644Cu);
    ctx->pc = 0x176448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176444u;
    // 0x176448: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F70u, 0x176444u, 0x17644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17644Cu;
label_17644c:
    // 0x17644c: 0xc05d8cc  jal         func_176330
    ctx->pc = 0x17644Cu;
    SET_GPR_U32(ctx, 31, 0x176454u);
    ctx->pc = 0x176450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17644Cu;
    // 0x176450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176330u;
    goto label_176330;
    ctx->pc = 0x176454u;
label_176454:
    // 0x176454: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x176458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17645c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x17645Cu;
    SET_GPR_U32(ctx, 31, 0x176464u);
    ctx->pc = 0x176460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17645Cu;
    // 0x176460: 0x24846540  addiu       $a0, $a0, 0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x17645Cu, 0x176464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176464u;
label_176464:
    // 0x176464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17646c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17646cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176470: 0x3e00008  jr          $ra
    ctx->pc = 0x176470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176470u;
        // 0x176474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176478u;
    // 0x176478: 0x0  nop
    ctx->pc = 0x176478u;
    // NOP
    // 0x17647c: 0x0  nop
    ctx->pc = 0x17647cu;
    // NOP
    // 0x176480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17648c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176494: 0x904200bc  lbu         $v0, 0xBC($v0)
    ctx->pc = 0x176494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x176498: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x176498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17649c: 0xc05db68  jal         func_176DA0
    ctx->pc = 0x17649Cu;
    SET_GPR_U32(ctx, 31, 0x1764A4u);
    ctx->pc = 0x1764A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17649Cu;
    // 0x1764a0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DA0u, 0x17649Cu, 0x1764A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764A4u;
label_1764a4:
    // 0x1764a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1764A4u;
    {
        const bool branch_taken_0x1764a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764a4) {
            ctx->pc = 0x1764CCu;
            goto label_1764cc;
        }
    }
    ctx->pc = 0x1764ACu;
    // 0x1764ac: 0xc066e5c  jal         func_19B970
    ctx->pc = 0x1764ACu;
    SET_GPR_U32(ctx, 31, 0x1764B4u);
    ctx->pc = 0x19B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B970u, 0x1764ACu, 0x1764B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764B4u;
label_1764b4:
    // 0x1764b4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1764b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1764b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764bc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1764BCu;
    SET_GPR_U32(ctx, 31, 0x1764C4u);
    ctx->pc = 0x1764C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764BCu;
    // 0x1764c0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1764BCu, 0x1764C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764C4u;
label_1764c4:
    // 0x1764c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1764C4u;
    {
        const bool branch_taken_0x1764c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764C4u;
        // 0x1764c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764c4) {
            ctx->pc = 0x1764E0u;
            goto label_1764e0;
        }
    }
    ctx->pc = 0x1764CCu;
label_1764cc:
    // 0x1764cc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1764d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1764d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764d4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1764D4u;
    SET_GPR_U32(ctx, 31, 0x1764DCu);
    ctx->pc = 0x1764D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764D4u;
    // 0x1764d8: 0x24846370  addiu       $a0, $a0, 0x6370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1764D4u, 0x1764DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764DCu;
label_1764dc:
    // 0x1764dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1764dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1764e0:
    // 0x1764e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1764e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1764e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1764E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E4u;
        // 0x1764e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1764E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1764ECu;
    // 0x1764ec: 0x0  nop
    ctx->pc = 0x1764ecu;
    // NOP
    // 0x1764f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1764f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1764f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1764f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1764f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1764fc: 0xc067040  jal         func_19C100
    ctx->pc = 0x1764FCu;
    SET_GPR_U32(ctx, 31, 0x176504u);
    ctx->pc = 0x176500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764FCu;
    // 0x176500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C100u, 0x1764FCu, 0x176504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176504u;
label_176504:
    // 0x176504: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x176504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x176508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17650c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17650cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x176510: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176510u;
    {
        const bool branch_taken_0x176510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176510) {
            ctx->pc = 0x176514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176510u;
            // 0x176514: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17652Cu;
            goto label_17652c;
        }
    }
    ctx->pc = 0x176518u;
    // 0x176518: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x17651c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17651cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176520: 0xc055768  jal         func_155DA0
    ctx->pc = 0x176520u;
    SET_GPR_U32(ctx, 31, 0x176528u);
    ctx->pc = 0x176524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176520u;
    // 0x176524: 0x24846370  addiu       $a0, $a0, 0x6370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x176520u, 0x176528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176528u;
label_176528:
    // 0x176528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17652c:
    // 0x17652c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17652cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176530: 0x3e00008  jr          $ra
    ctx->pc = 0x176530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176530u;
        // 0x176534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176538u;
    // 0x176538: 0x0  nop
    ctx->pc = 0x176538u;
    // NOP
    // 0x17653c: 0x0  nop
    ctx->pc = 0x17653cu;
    // NOP
    // 0x176540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17654c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176554: 0x904500bd  lbu         $a1, 0xBD($v0)
    ctx->pc = 0x176554u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 189)));
    // 0x176558: 0xc052ed4  jal         func_14BB50
    ctx->pc = 0x176558u;
    SET_GPR_U32(ctx, 31, 0x176560u);
    ctx->pc = 0x17655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176558u;
    // 0x17655c: 0x904400bc  lbu         $a0, 0xBC($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB50u, 0x176558u, 0x176560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176560u;
label_176560:
    // 0x176560: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x176564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176568: 0xc055768  jal         func_155DA0
    ctx->pc = 0x176568u;
    SET_GPR_U32(ctx, 31, 0x176570u);
    ctx->pc = 0x17656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176568u;
    // 0x17656c: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x176568u, 0x176570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176570u;
label_176570:
    // 0x176570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176578: 0x3e00008  jr          $ra
    ctx->pc = 0x176578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176578u;
        // 0x17657c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176580u;
    // 0x176580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17658c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x176590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176594: 0x904500bd  lbu         $a1, 0xBD($v0)
    ctx->pc = 0x176594u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 189)));
    // 0x176598: 0xc052ed4  jal         func_14BB50
    ctx->pc = 0x176598u;
    SET_GPR_U32(ctx, 31, 0x1765A0u);
    ctx->pc = 0x17659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176598u;
    // 0x17659c: 0x904400bc  lbu         $a0, 0xBC($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB50u, 0x176598u, 0x1765A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765A0u;
label_1765a0:
    // 0x1765a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1765A0u;
            // 0x1765a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1765BCu;
            goto label_1765bc;
        }
    }
    ctx->pc = 0x1765A8u;
    // 0x1765a8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1765ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1765acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765b0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1765B0u;
    SET_GPR_U32(ctx, 31, 0x1765B8u);
    ctx->pc = 0x1765B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1765B0u;
    // 0x1765b4: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1765B0u, 0x1765B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765B8u;
label_1765b8:
    // 0x1765b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1765b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1765bc:
    // 0x1765bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1765bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1765c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1765C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1765C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C0u;
        // 0x1765c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1765C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1765C8u;
    // 0x1765c8: 0x0  nop
    ctx->pc = 0x1765c8u;
    // NOP
    // 0x1765cc: 0x0  nop
    ctx->pc = 0x1765ccu;
    // NOP
    if (ctx->pc == 0x1765ccu) { ctx->pc = 0x1765d0u; }
}
