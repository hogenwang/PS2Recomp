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

// Function: sub_0013B720
// Address: 0x13b720 - 0x13b890
void sub_0013B720_0x13b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B720_0x13b720");
#endif

    switch (ctx->pc) {
        case 0x13b73cu: goto label_13b73c;
        case 0x13b7c4u: goto label_13b7c4;
        case 0x13b7e8u: goto label_13b7e8;
        case 0x13b7f4u: goto label_13b7f4;
        case 0x13b800u: goto label_13b800;
        case 0x13b80cu: goto label_13b80c;
        case 0x13b84cu: goto label_13b84c;
        case 0x13b858u: goto label_13b858;
        case 0x13b864u: goto label_13b864;
        case 0x13b86cu: goto label_13b86c;
        default: break;
    }

    ctx->pc = 0x13b720u;

    // 0x13b720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13b728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b734: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x13B734u;
    SET_GPR_U32(ctx, 31, 0x13B73Cu);
    ctx->pc = 0x13B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B734u;
    // 0x13b738: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x13B734u, 0x13B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B73Cu;
label_13b73c:
    // 0x13b73c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B744u;
    {
        const bool branch_taken_0x13b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b744) {
            ctx->pc = 0x13B758u;
            goto label_13b758;
        }
    }
    ctx->pc = 0x13B74Cu;
    // 0x13b74c: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x13b74cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x13b750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B750u;
    {
        const bool branch_taken_0x13b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B750u;
        // 0x13b754: 0x2652db50  addiu       $s2, $s2, -0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b750) {
            ctx->pc = 0x13B760u;
            goto label_13b760;
        }
    }
    ctx->pc = 0x13B758u;
label_13b758:
    // 0x13b758: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x13b758u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x13b75c: 0x2652dd98  addiu       $s2, $s2, -0x2268
    ctx->pc = 0x13b75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958488));
label_13b760:
    // 0x13b760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B760u;
    {
        const bool branch_taken_0x13b760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b760) {
            ctx->pc = 0x13B774u;
            goto label_13b774;
        }
    }
    ctx->pc = 0x13B768u;
    // 0x13b768: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x13b768u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x13b76c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B76Cu;
    {
        const bool branch_taken_0x13b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B76Cu;
        // 0x13b770: 0x2631dd98  addiu       $s1, $s1, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b76c) {
            ctx->pc = 0x13B77Cu;
            goto label_13b77c;
        }
    }
    ctx->pc = 0x13B774u;
label_13b774:
    // 0x13b774: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x13b774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x13b778: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x13b778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_13b77c:
    // 0x13b77c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B77Cu;
    {
        const bool branch_taken_0x13b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b77c) {
            ctx->pc = 0x13B780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B77Cu;
            // 0x13b780: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B788u;
            goto label_13b788;
        }
    }
    ctx->pc = 0x13B784u;
    // 0x13b784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13b784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b788:
    // 0x13b788: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13b788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b78c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x13b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x13b790: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x13b794: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13b798: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B798u;
    {
        const bool branch_taken_0x13b798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b798) {
            ctx->pc = 0x13B7BCu;
            goto label_13b7bc;
        }
    }
    ctx->pc = 0x13B7A0u;
    // 0x13b7a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x13b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x13b7a4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13b7a8: 0x9042beda  lbu         $v0, -0x4126($v0)
    ctx->pc = 0x13b7a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950618)));
    // 0x13b7ac: 0x2463985f  addiu       $v1, $v1, -0x67A1
    ctx->pc = 0x13b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940767));
    // 0x13b7b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b7b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B7B4u;
    {
        const bool branch_taken_0x13b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7B4u;
        // 0x13b7b8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b4) {
            ctx->pc = 0x13B7C4u;
            goto label_13b7c4;
        }
    }
    ctx->pc = 0x13B7BCu;
label_13b7bc:
    // 0x13b7bc: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x13B7BCu;
    SET_GPR_U32(ctx, 31, 0x13B7C4u);
    ctx->pc = 0x13B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B360u, 0x13B7BCu, 0x13B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7C4u;
label_13b7c4:
    // 0x13b7c4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b7c8: 0x9223014d  lbu         $v1, 0x14D($s1)
    ctx->pc = 0x13b7c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 333)));
    // 0x13b7cc: 0x9242014d  lbu         $v0, 0x14D($s2)
    ctx->pc = 0x13b7ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
    // 0x13b7d0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13B7D0u;
    {
        const bool branch_taken_0x13b7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b7d0) {
            ctx->pc = 0x13B7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B7D0u;
            // 0x13b7d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B804u;
            goto label_13b804;
        }
    }
    ctx->pc = 0x13B7D8u;
    // 0x13b7d8: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x13b7d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13b7dc: 0x2644014c  addiu       $a0, $s2, 0x14C
    ctx->pc = 0x13b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
    // 0x13b7e0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B7E0u;
    SET_GPR_U32(ctx, 31, 0x13B7E8u);
    ctx->pc = 0x13B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7E0u;
    // 0x13b7e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B7E0u, 0x13B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7E8u;
label_13b7e8:
    // 0x13b7e8: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x13b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b7ec: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B7ECu;
    SET_GPR_U32(ctx, 31, 0x13B7F4u);
    ctx->pc = 0x13B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7ECu;
    // 0x13b7f0: 0x2644016c  addiu       $a0, $s2, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B7ECu, 0x13B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7F4u;
label_13b7f4:
    // 0x13b7f4: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x13b7f8: 0xc0c449c  jal         func_311270
    ctx->pc = 0x13B7F8u;
    SET_GPR_U32(ctx, 31, 0x13B800u);
    ctx->pc = 0x13B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7F8u;
    // 0x13b7fc: 0x2644018c  addiu       $a0, $s2, 0x18C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x13B7F8u, 0x13B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B800u;
label_13b800:
    // 0x13b800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b804:
    // 0x13b804: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x13B804u;
    SET_GPR_U32(ctx, 31, 0x13B80Cu);
    ctx->pc = 0x13B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B804u;
    // 0x13b808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B010u, 0x13B804u, 0x13B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B80Cu;
label_13b80c:
    // 0x13b80c: 0xa2530150  sb          $s3, 0x150($s2)
    ctx->pc = 0x13b80cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b810: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x13b810u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13b814: 0xa253014d  sb          $s3, 0x14D($s2)
    ctx->pc = 0x13b814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 333), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b818: 0x2644014c  addiu       $a0, $s2, 0x14C
    ctx->pc = 0x13b818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
    // 0x13b81c: 0xa2530170  sb          $s3, 0x170($s2)
    ctx->pc = 0x13b81cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 368), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b824: 0xa253016d  sb          $s3, 0x16D($s2)
    ctx->pc = 0x13b824u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 365), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b828: 0xa2530190  sb          $s3, 0x190($s2)
    ctx->pc = 0x13b828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 400), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b82c: 0xa253018d  sb          $s3, 0x18D($s2)
    ctx->pc = 0x13b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 397), (uint8_t)GPR_U32(ctx, 19));
    // 0x13b830: 0xa2420151  sb          $v0, 0x151($s2)
    ctx->pc = 0x13b830u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b834: 0xa242014e  sb          $v0, 0x14E($s2)
    ctx->pc = 0x13b834u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 334), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b838: 0xa2420171  sb          $v0, 0x171($s2)
    ctx->pc = 0x13b838u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 369), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b83c: 0xa242016e  sb          $v0, 0x16E($s2)
    ctx->pc = 0x13b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 366), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b840: 0xa2420191  sb          $v0, 0x191($s2)
    ctx->pc = 0x13b840u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 401), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b844: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B844u;
    SET_GPR_U32(ctx, 31, 0x13B84Cu);
    ctx->pc = 0x13B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B844u;
    // 0x13b848: 0xa242018e  sb          $v0, 0x18E($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 398), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B844u, 0x13B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B84Cu;
label_13b84c:
    // 0x13b84c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13b850: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B850u;
    SET_GPR_U32(ctx, 31, 0x13B858u);
    ctx->pc = 0x13B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B850u;
    // 0x13b854: 0x2644016c  addiu       $a0, $s2, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B850u, 0x13B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B858u;
label_13b858:
    // 0x13b858: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x13b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x13b85c: 0xc0c8504  jal         func_321410
    ctx->pc = 0x13B85Cu;
    SET_GPR_U32(ctx, 31, 0x13B864u);
    ctx->pc = 0x13B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B85Cu;
    // 0x13b860: 0x2644018c  addiu       $a0, $s2, 0x18C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x13B85Cu, 0x13B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B864u;
label_13b864:
    // 0x13b864: 0xc052c90  jal         func_14B240
    ctx->pc = 0x13B864u;
    SET_GPR_U32(ctx, 31, 0x13B86Cu);
    ctx->pc = 0x14B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B240u, 0x13B864u, 0x13B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B86Cu;
label_13b86c:
    // 0x13b86c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b880: 0x3e00008  jr          $ra
    ctx->pc = 0x13B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B880u;
        // 0x13b884: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B888u;
    // 0x13b888: 0x0  nop
    ctx->pc = 0x13b888u;
    // NOP
    // 0x13b88c: 0x0  nop
    ctx->pc = 0x13b88cu;
    // NOP
    if (ctx->pc == 0x13b88cu) { ctx->pc = 0x13b890u; }
}
