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

// Function: sub_001857C0
// Address: 0x1857c0 - 0x185970
void sub_001857C0_0x1857c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001857C0_0x1857c0");
#endif

    switch (ctx->pc) {
        case 0x18591cu: goto label_18591c;
        case 0x185928u: goto label_185928;
        default: break;
    }

    ctx->pc = 0x1857c0u;

    // 0x1857c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1857c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1857c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1857c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1857cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1857ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1857d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1857d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1857d4: 0x2463db53  addiu       $v1, $v1, -0x24AD
    ctx->pc = 0x1857d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957907));
    // 0x1857d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1857d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1857dc: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x1857dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x1857e0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1857e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1857e4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1857e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1857e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1857ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1857f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1857f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1857f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1857fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1857fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x185800: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x185800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18580c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185810u;
    {
        const bool branch_taken_0x185810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185810u;
        // 0x185814: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185810) {
            ctx->pc = 0x185820u;
            goto label_185820;
        }
    }
    ctx->pc = 0x185818u;
    // 0x185818: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x185818u;
    {
        const bool branch_taken_0x185818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185818u;
        // 0x18581c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185818) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185820u;
label_185820:
    // 0x185820: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185820u;
    {
        const bool branch_taken_0x185820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x185820) {
            ctx->pc = 0x185824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185820u;
            // 0x185824: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185830u;
            goto label_185830;
        }
    }
    ctx->pc = 0x185828u;
    // 0x185828: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x185828u;
    {
        const bool branch_taken_0x185828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185828u;
        // 0x18582c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185828) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185830u;
label_185830:
    // 0x185830: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x185834: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x185834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x185838: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18583c: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x18583Cu;
    {
        const bool branch_taken_0x18583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18583c) {
            ctx->pc = 0x185840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18583Cu;
            // 0x185840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x185844u;
    // 0x185844: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x185848: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x185848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18584c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x185850: 0x24428af0  addiu       $v0, $v0, -0x7510
    ctx->pc = 0x185850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937328));
    // 0x185854: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185858: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18585c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18585cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185860: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185860u;
    {
        const bool branch_taken_0x185860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185860) {
            ctx->pc = 0x185864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185860u;
            // 0x185864: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185870u;
            goto label_185870;
        }
    }
    ctx->pc = 0x185868u;
    // 0x185868: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x185868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18586c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x18586cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_185870:
    // 0x185870: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x185874: 0x24c6db60  addiu       $a2, $a2, -0x24A0
    ctx->pc = 0x185874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957920));
    // 0x185878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18587c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x18587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x185880: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x185884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x185888: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18588c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x185890: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185894: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x185894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185898: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x185898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x18589c: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x18589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x1858a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1858a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1858a4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1858A4u;
    {
        const bool branch_taken_0x1858a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858a4) {
            ctx->pc = 0x1858A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1858A4u;
            // 0x1858a8: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1858D4u;
            goto label_1858d4;
        }
    }
    ctx->pc = 0x1858ACu;
    // 0x1858ac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1858acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1858b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1858b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1858b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1858b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1858bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1858c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1858c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1858c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1858c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1858cc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1858ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1858d0: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x1858d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_1858d4:
    // 0x1858d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1858d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1858d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1858d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1858dc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1858DCu;
    {
        const bool branch_taken_0x1858dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858dc) {
            ctx->pc = 0x1858E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1858DCu;
            // 0x1858e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185914u;
            goto label_185914;
        }
    }
    ctx->pc = 0x1858E4u;
    // 0x1858e4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1858e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1858e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1858ec: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
    // 0x1858f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1858f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1858f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1858fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1858fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185904: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18590c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x18590cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x185910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185914:
    // 0x185914: 0xc06165c  jal         func_185970
    ctx->pc = 0x185914u;
    SET_GPR_U32(ctx, 31, 0x18591Cu);
    ctx->pc = 0x185970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185970u, 0x185914u, 0x18591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18591Cu;
label_18591c:
    // 0x18591c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x18591cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185920: 0xc061670  jal         func_1859C0
    ctx->pc = 0x185920u;
    SET_GPR_U32(ctx, 31, 0x185928u);
    ctx->pc = 0x185924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185920u;
    // 0x185924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859C0u, 0x185920u, 0x185928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185928u;
label_185928:
    // 0x185928: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x185928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18592c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185930: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x185934: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x185934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x185938: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x185938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x18593c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x185940: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x185940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x185944: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x185944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x185948: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x185948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18594c: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x18594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
label_185950:
    // 0x185950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18595c: 0x3e00008  jr          $ra
    ctx->pc = 0x18595Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18595Cu;
        // 0x185960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18595Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185964u;
    // 0x185964: 0x0  nop
    ctx->pc = 0x185964u;
    // NOP
    // 0x185968: 0x0  nop
    ctx->pc = 0x185968u;
    // NOP
    // 0x18596c: 0x0  nop
    ctx->pc = 0x18596cu;
    // NOP
}
