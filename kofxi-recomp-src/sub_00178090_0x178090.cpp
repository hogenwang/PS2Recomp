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

// Function: sub_00178090
// Address: 0x178090 - 0x178450
void sub_00178090_0x178090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178090_0x178090");
#endif

    switch (ctx->pc) {
        case 0x1780dcu: goto label_1780dc;
        case 0x1780e4u: goto label_1780e4;
        case 0x178118u: goto label_178118;
        case 0x178128u: goto label_178128;
        case 0x1781d0u: goto label_1781d0;
        case 0x1781d8u: goto label_1781d8;
        case 0x1781f4u: goto label_1781f4;
        case 0x178220u: goto label_178220;
        case 0x178238u: goto label_178238;
        case 0x17824cu: goto label_17824c;
        case 0x178264u: goto label_178264;
        case 0x17827cu: goto label_17827c;
        case 0x178298u: goto label_178298;
        case 0x1782a4u: goto label_1782a4;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782ecu: goto label_1782ec;
        case 0x1782f8u: goto label_1782f8;
        case 0x178310u: goto label_178310;
        case 0x17832cu: goto label_17832c;
        case 0x178334u: goto label_178334;
        case 0x17833cu: goto label_17833c;
        case 0x178394u: goto label_178394;
        case 0x1783a0u: goto label_1783a0;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783c8u: goto label_1783c8;
        case 0x1783d4u: goto label_1783d4;
        case 0x1783e4u: goto label_1783e4;
        case 0x178428u: goto label_178428;
        case 0x178430u: goto label_178430;
        default: break;
    }

    ctx->pc = 0x178090u;

label_178090:
    // 0x178090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17809c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1780a0: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1780a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1780a4: 0x2a210080  slti        $at, $s1, 0x80
    ctx->pc = 0x1780a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1780a8: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1780A8u;
    {
        const bool branch_taken_0x1780a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780A8u;
        // 0x1780ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780a8) {
            ctx->pc = 0x17814Cu;
            goto label_17814c;
        }
    }
    ctx->pc = 0x1780B0u;
    // 0x1780b0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1780b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1780b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1780b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1780bc: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1780bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x1780c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1780c4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1780c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1780c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1780cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1780CCu;
    {
        const bool branch_taken_0x1780cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1780cc) {
            ctx->pc = 0x1780E4u;
            goto label_1780e4;
        }
    }
    ctx->pc = 0x1780D4u;
    // 0x1780d4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1780D4u;
    SET_GPR_U32(ctx, 31, 0x1780DCu);
    ctx->pc = 0x1780D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780D4u;
    // 0x1780d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x1780D4u, 0x1780DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780DCu;
label_1780dc:
    // 0x1780dc: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x1780DCu;
    SET_GPR_U32(ctx, 31, 0x1780E4u);
    ctx->pc = 0x1780E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780DCu;
    // 0x1780e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x1780DCu, 0x1780E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780E4u;
label_1780e4:
    // 0x1780e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1780e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1780e8: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x1780ec: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1780f0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1780f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1780f4: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x1780f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x1780f8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1780F8u;
    {
        const bool branch_taken_0x1780f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780F8u;
        // 0x1780fc: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780f8) {
            ctx->pc = 0x178104u;
            goto label_178104;
        }
    }
    ctx->pc = 0x178100u;
    // 0x178100: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x178100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_178104:
    // 0x178104: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178108: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17810c: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x17810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x178110: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x178110u;
    SET_GPR_U32(ctx, 31, 0x178118u);
    ctx->pc = 0x178114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178110u;
    // 0x178114: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x178110u, 0x178118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178118u;
label_178118:
    // 0x178118: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17811c: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x17811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x178120: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x178120u;
    SET_GPR_U32(ctx, 31, 0x178128u);
    ctx->pc = 0x178124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178120u;
    // 0x178124: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x178120u, 0x178128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178128u;
label_178128:
    // 0x178128: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17812c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x17812cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x178130: 0x2463ad80  addiu       $v1, $v1, -0x5280
    ctx->pc = 0x178130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946176));
    // 0x178134: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x178134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x178138: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17813c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17813cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x178140: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x178140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x178144: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x178144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x178148: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x178148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_17814c:
    // 0x17814c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17815c: 0x3e00008  jr          $ra
    ctx->pc = 0x17815Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17815Cu;
        // 0x178160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17815Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178164u;
    // 0x178164: 0x0  nop
    ctx->pc = 0x178164u;
    // NOP
    // 0x178168: 0x0  nop
    ctx->pc = 0x178168u;
    // NOP
    // 0x17816c: 0x0  nop
    ctx->pc = 0x17816cu;
    // NOP
    // 0x178170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178174: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178178: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x178178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17817c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178180: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17818c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178190: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x178190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x178194: 0x8c52a7d8  lw          $s2, -0x5828($v0)
    ctx->pc = 0x178194u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944728)));
    // 0x178198: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x178198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17819c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1781a0: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1781A0u;
    {
        const bool branch_taken_0x1781a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1781A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781A0u;
        // 0x1781a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781a0) {
            ctx->pc = 0x178318u;
            goto label_178318;
        }
    }
    ctx->pc = 0x1781A8u;
    // 0x1781a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1781ac: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1781ACu;
    {
        const bool branch_taken_0x1781ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1781ac) {
            ctx->pc = 0x178240u;
            goto label_178240;
        }
    }
    ctx->pc = 0x1781B4u;
    // 0x1781b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1781b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1781B8u;
    {
        const bool branch_taken_0x1781b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1781b8) {
            ctx->pc = 0x1781C8u;
            goto label_1781c8;
        }
    }
    ctx->pc = 0x1781C0u;
    // 0x1781c0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1781C0u;
    {
        const bool branch_taken_0x1781c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781c0) {
            ctx->pc = 0x178378u;
            goto label_178378;
        }
    }
    ctx->pc = 0x1781C8u;
label_1781c8:
    // 0x1781c8: 0xc0661ac  jal         func_1986B0
    ctx->pc = 0x1781C8u;
    SET_GPR_U32(ctx, 31, 0x1781D0u);
    ctx->pc = 0x1986B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986B0u, 0x1781C8u, 0x1781D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781D0u;
label_1781d0:
    // 0x1781d0: 0xc067d50  jal         func_19F540
    ctx->pc = 0x1781D0u;
    SET_GPR_U32(ctx, 31, 0x1781D8u);
    ctx->pc = 0x19F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F540u, 0x1781D0u, 0x1781D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781D8u;
label_1781d8:
    // 0x1781d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1781d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1781dc: 0x8042a788  lb          $v0, -0x5878($v0)
    ctx->pc = 0x1781dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294944648)));
    // 0x1781e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1781E0u;
    {
        const bool branch_taken_0x1781e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e0) {
            ctx->pc = 0x1781F4u;
            goto label_1781f4;
        }
    }
    ctx->pc = 0x1781E8u;
    // 0x1781e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1781e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1781ec: 0xc058f60  jal         func_163D80
    ctx->pc = 0x1781ECu;
    SET_GPR_U32(ctx, 31, 0x1781F4u);
    ctx->pc = 0x1781F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781ECu;
    // 0x1781f0: 0x2484ace0  addiu       $a0, $a0, -0x5320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D80u, 0x1781ECu, 0x1781F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781F4u;
label_1781f4:
    // 0x1781f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1781f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1781fc: 0x8442ad70  lh          $v0, -0x5290($v0)
    ctx->pc = 0x1781fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294946160)));
    // 0x178200: 0x2463d830  addiu       $v1, $v1, -0x27D0
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957104));
    // 0x178204: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178208: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17820c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17820Cu;
    {
        const bool branch_taken_0x17820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17820c) {
            ctx->pc = 0x178210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17820Cu;
            // 0x178210: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178224u;
            goto label_178224;
        }
    }
    ctx->pc = 0x178214u;
    // 0x178214: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x178218: 0xc058f60  jal         func_163D80
    ctx->pc = 0x178218u;
    SET_GPR_U32(ctx, 31, 0x178220u);
    ctx->pc = 0x17821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178218u;
    // 0x17821c: 0x2484a790  addiu       $a0, $a0, -0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D80u, 0x178218u, 0x178220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178220u;
label_178220:
    // 0x178220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x178220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_178224:
    // 0x178224: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178228: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x178228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x17822c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178230: 0xc05e010  jal         func_178040
    ctx->pc = 0x178230u;
    SET_GPR_U32(ctx, 31, 0x178238u);
    ctx->pc = 0x178234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178230u;
    // 0x178234: 0xa043ace8  sb          $v1, -0x5318($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946024), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178040u, 0x178230u, 0x178238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178238u;
label_178238:
    // 0x178238: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x178238u;
    {
        const bool branch_taken_0x178238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178238) {
            ctx->pc = 0x17823Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178238u;
            // 0x17823c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178434u;
            goto label_178434;
        }
    }
    ctx->pc = 0x178240u;
label_178240:
    // 0x178240: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x178244: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x178244u;
    SET_GPR_U32(ctx, 31, 0x17824Cu);
    ctx->pc = 0x178248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178244u;
    // 0x178248: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x178244u, 0x17824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17824Cu;
label_17824c:
    // 0x17824c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178250: 0x8c42af68  lw          $v0, -0x5098($v0)
    ctx->pc = 0x178250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946664)));
    // 0x178254: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x178254u;
    {
        const bool branch_taken_0x178254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178254) {
            ctx->pc = 0x178378u;
            goto label_178378;
        }
    }
    ctx->pc = 0x17825Cu;
    // 0x17825c: 0xc058f7c  jal         func_163DF0
    ctx->pc = 0x17825Cu;
    SET_GPR_U32(ctx, 31, 0x178264u);
    ctx->pc = 0x163DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163DF0u, 0x17825Cu, 0x178264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178264u;
label_178264:
    // 0x178264: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178268: 0x8c63af68  lw          $v1, -0x5098($v1)
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x17826c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17826Cu;
    {
        const bool branch_taken_0x17826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17826c) {
            ctx->pc = 0x1782ACu;
            goto label_1782ac;
        }
    }
    ctx->pc = 0x178274u;
    // 0x178274: 0xc058f78  jal         func_163DE0
    ctx->pc = 0x178274u;
    SET_GPR_U32(ctx, 31, 0x17827Cu);
    ctx->pc = 0x163DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163DE0u, 0x178274u, 0x17827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17827Cu;
label_17827c:
    // 0x17827c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x17827cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x178280: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x178280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x178284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178288: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x178288u;
    {
        const bool branch_taken_0x178288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x178288) {
            ctx->pc = 0x1782ACu;
            goto label_1782ac;
        }
    }
    ctx->pc = 0x178290u;
    // 0x178290: 0xc058f80  jal         func_163E00
    ctx->pc = 0x178290u;
    SET_GPR_U32(ctx, 31, 0x178298u);
    ctx->pc = 0x163E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E00u, 0x178290u, 0x178298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178298u;
label_178298:
    // 0x178298: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17829c: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x17829Cu;
    SET_GPR_U32(ctx, 31, 0x1782A4u);
    ctx->pc = 0x1782A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17829Cu;
    // 0x1782a0: 0x2484af68  addiu       $a0, $a0, -0x5098 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x17829Cu, 0x1782A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782A4u;
label_1782a4:
    // 0x1782a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1782A4u;
    {
        const bool branch_taken_0x1782a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1782a4) {
            ctx->pc = 0x178378u;
            goto label_178378;
        }
    }
    ctx->pc = 0x1782ACu;
label_1782ac:
    // 0x1782ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1782acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1782b0: 0x8c42af68  lw          $v0, -0x5098($v0)
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946664)));
    // 0x1782b4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1782b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1782B8u;
    {
        const bool branch_taken_0x1782b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1782b8) {
            ctx->pc = 0x1782D0u;
            goto label_1782d0;
        }
    }
    ctx->pc = 0x1782C0u;
    // 0x1782c0: 0xc066b2c  jal         func_19ACB0
    ctx->pc = 0x1782C0u;
    SET_GPR_U32(ctx, 31, 0x1782C8u);
    ctx->pc = 0x19ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ACB0u, 0x1782C0u, 0x1782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782C8u;
label_1782c8:
    // 0x1782c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1782cc: 0xac40d514  sw          $zero, -0x2AEC($v0)
    ctx->pc = 0x1782ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956308), GPR_U32(ctx, 0));
label_1782d0:
    // 0x1782d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1782d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1782d4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1782d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1782d8: 0x8c42af68  lw          $v0, -0x5098($v0)
    ctx->pc = 0x1782d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946664)));
    // 0x1782dc: 0x2484a7b0  addiu       $a0, $a0, -0x5850
    ctx->pc = 0x1782dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944688));
    // 0x1782e0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1782e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1782e4: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x1782E4u;
    SET_GPR_U32(ctx, 31, 0x1782ECu);
    ctx->pc = 0x1782E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782E4u;
    // 0x1782e8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x1782E4u, 0x1782ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782ECu;
label_1782ec:
    // 0x1782ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1782ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1782f0: 0xc05da6c  jal         func_1769B0
    ctx->pc = 0x1782F0u;
    SET_GPR_U32(ctx, 31, 0x1782F8u);
    ctx->pc = 0x1782F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782F0u;
    // 0x1782f4: 0x2484af68  addiu       $a0, $a0, -0x5098 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769B0u, 0x1782F0u, 0x1782F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782F8u;
label_1782f8:
    // 0x1782f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1782fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1782fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178300: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x178300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x178304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178308: 0xc05e010  jal         func_178040
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 31, 0x178310u);
    ctx->pc = 0x17830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178308u;
    // 0x17830c: 0xa043ace8  sb          $v1, -0x5318($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946024), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178040u, 0x178308u, 0x178310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178310u;
label_178310:
    // 0x178310: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x178310u;
    {
        const bool branch_taken_0x178310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178310) {
            ctx->pc = 0x178430u;
            goto label_178430;
        }
    }
    ctx->pc = 0x178318u;
label_178318:
    // 0x178318: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x178318u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17831c: 0x96330002  lhu         $s3, 0x2($s1)
    ctx->pc = 0x17831cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x178320: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x178320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x178324: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x178324u;
    {
        const bool branch_taken_0x178324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178324) {
            ctx->pc = 0x178368u;
            goto label_178368;
        }
    }
    ctx->pc = 0x17832Cu;
label_17832c:
    // 0x17832c: 0xc05e024  jal         func_178090
    ctx->pc = 0x17832Cu;
    SET_GPR_U32(ctx, 31, 0x178334u);
    ctx->pc = 0x178330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17832Cu;
    // 0x178330: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178090u;
    goto label_178090;
    ctx->pc = 0x178334u;
label_178334:
    // 0x178334: 0xc05e010  jal         func_178040
    ctx->pc = 0x178334u;
    SET_GPR_U32(ctx, 31, 0x17833Cu);
    ctx->pc = 0x178338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178334u;
    // 0x178338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178040u, 0x178334u, 0x17833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17833Cu;
label_17833c:
    // 0x17833c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x17833cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178340: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x178340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x178344: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178344u;
    {
        const bool branch_taken_0x178344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178344) {
            ctx->pc = 0x178348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178344u;
            // 0x178348: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178358u;
            goto label_178358;
        }
    }
    ctx->pc = 0x17834Cu;
    // 0x17834c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x178350: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x178350u;
    {
        const bool branch_taken_0x178350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178350u;
        // 0x178354: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178350) {
            ctx->pc = 0x178430u;
            goto label_178430;
        }
    }
    ctx->pc = 0x178358u;
label_178358:
    // 0x178358: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x178358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x17835c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17835Cu;
    {
        const bool branch_taken_0x17835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17835c) {
            ctx->pc = 0x17832Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17832c;
        }
    }
    ctx->pc = 0x178364u;
    // 0x178364: 0x0  nop
    ctx->pc = 0x178364u;
    // NOP
label_178368:
    // 0x178368: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17836c: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x17836cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x178370: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178374: 0xa043ace8  sb          $v1, -0x5318($v0)
    ctx->pc = 0x178374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946024), (uint8_t)GPR_U32(ctx, 3));
label_178378:
    // 0x178378: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17837c: 0x8c42a780  lw          $v0, -0x5880($v0)
    ctx->pc = 0x17837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944640)));
    // 0x178380: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178380u;
    {
        const bool branch_taken_0x178380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178380) {
            ctx->pc = 0x1783A8u;
            goto label_1783a8;
        }
    }
    ctx->pc = 0x178388u;
    // 0x178388: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x178388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17838c: 0xc0695fc  jal         func_1A57F0
    ctx->pc = 0x17838Cu;
    SET_GPR_U32(ctx, 31, 0x178394u);
    ctx->pc = 0x178390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17838Cu;
    // 0x178390: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57F0u, 0x17838Cu, 0x178394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178394u;
label_178394:
    // 0x178394: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178398: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x178398u;
    SET_GPR_U32(ctx, 31, 0x1783A0u);
    ctx->pc = 0x17839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178398u;
    // 0x17839c: 0x8c44a780  lw          $a0, -0x5880($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x178398u, 0x1783A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783A0u;
label_1783a0:
    // 0x1783a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1783a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1783a4: 0xac40a780  sw          $zero, -0x5880($v0)
    ctx->pc = 0x1783a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944640), GPR_U32(ctx, 0));
label_1783a8:
    // 0x1783a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1783a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1783ac: 0xc05daa0  jal         func_176A80
    ctx->pc = 0x1783ACu;
    SET_GPR_U32(ctx, 31, 0x1783B4u);
    ctx->pc = 0x1783B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783ACu;
    // 0x1783b0: 0x9044ad70  lbu         $a0, -0x5290($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A80u, 0x1783ACu, 0x1783B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783B4u;
label_1783b4:
    // 0x1783b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1783B4u;
    {
        const bool branch_taken_0x1783b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783b4) {
            ctx->pc = 0x1783C8u;
            goto label_1783c8;
        }
    }
    ctx->pc = 0x1783BCu;
    // 0x1783bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1783c0: 0xc066b2c  jal         func_19ACB0
    ctx->pc = 0x1783C0u;
    SET_GPR_U32(ctx, 31, 0x1783C8u);
    ctx->pc = 0x1783C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783C0u;
    // 0x1783c4: 0xac40d514  sw          $zero, -0x2AEC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956308), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ACB0u, 0x1783C0u, 0x1783C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783C8u;
label_1783c8:
    // 0x1783c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1783c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1783cc: 0xc05da88  jal         func_176A20
    ctx->pc = 0x1783CCu;
    SET_GPR_U32(ctx, 31, 0x1783D4u);
    ctx->pc = 0x1783D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783CCu;
    // 0x1783d0: 0x9044ad70  lbu         $a0, -0x5290($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x1783CCu, 0x1783D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783D4u;
label_1783d4:
    // 0x1783d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1783D4u;
    {
        const bool branch_taken_0x1783d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1783d4) {
            ctx->pc = 0x1783D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1783D4u;
            // 0x1783d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1783E8u;
            goto label_1783e8;
        }
    }
    ctx->pc = 0x1783DCu;
    // 0x1783dc: 0xc063cac  jal         func_18F2B0
    ctx->pc = 0x1783DCu;
    SET_GPR_U32(ctx, 31, 0x1783E4u);
    ctx->pc = 0x1783E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783DCu;
    // 0x1783e0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F2B0u, 0x1783DCu, 0x1783E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783E4u;
label_1783e4:
    // 0x1783e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1783e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1783e8:
    // 0x1783e8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1783e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1783ec: 0xa44537d8  sh          $a1, 0x37D8($v0)
    ctx->pc = 0x1783ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14296), (uint16_t)GPR_U32(ctx, 5));
    // 0x1783f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1783f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1783f8: 0xa060a788  sb          $zero, -0x5878($v1)
    ctx->pc = 0x1783f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294944648), (uint8_t)GPR_U32(ctx, 0));
    // 0x1783fc: 0xa44537e0  sh          $a1, 0x37E0($v0)
    ctx->pc = 0x1783fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14304), (uint16_t)GPR_U32(ctx, 5));
    // 0x178400: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178404: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x178404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x178408: 0xac60ace0  sw          $zero, -0x5320($v1)
    ctx->pc = 0x178408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946016), GPR_U32(ctx, 0));
    // 0x17840c: 0xa44537e8  sh          $a1, 0x37E8($v0)
    ctx->pc = 0x17840cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14312), (uint16_t)GPR_U32(ctx, 5));
    // 0x178410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x178410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178414: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178418: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17841c: 0xa2250004  sb          $a1, 0x4($s1)
    ctx->pc = 0x17841cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x178420: 0xc055728  jal         func_155CA0
    ctx->pc = 0x178420u;
    SET_GPR_U32(ctx, 31, 0x178428u);
    ctx->pc = 0x178424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178420u;
    // 0x178424: 0xa045ace8  sb          $a1, -0x5318($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946024), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x178420u, 0x178428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178428u;
label_178428:
    // 0x178428: 0xc058f5c  jal         func_163D70
    ctx->pc = 0x178428u;
    SET_GPR_U32(ctx, 31, 0x178430u);
    ctx->pc = 0x163D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D70u, 0x178428u, 0x178430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178430u;
label_178430:
    // 0x178430: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x178430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_178434:
    // 0x178434: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17843c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17843cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178448: 0x3e00008  jr          $ra
    ctx->pc = 0x178448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178448u;
        // 0x17844c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178450u;
}
