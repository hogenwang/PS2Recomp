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

// Function: sub_0033BB40
// Address: 0x33bb40 - 0x33c200
void sub_0033BB40_0x33bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BB40_0x33bb40");
#endif

    switch (ctx->pc) {
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bc08u: goto label_33bc08;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bd64u: goto label_33bd64;
        case 0x33bd90u: goto label_33bd90;
        case 0x33bdacu: goto label_33bdac;
        case 0x33bdc8u: goto label_33bdc8;
        case 0x33bde0u: goto label_33bde0;
        case 0x33bdf4u: goto label_33bdf4;
        case 0x33be34u: goto label_33be34;
        case 0x33be5cu: goto label_33be5c;
        case 0x33bea0u: goto label_33bea0;
        case 0x33beccu: goto label_33becc;
        case 0x33bee8u: goto label_33bee8;
        case 0x33bf24u: goto label_33bf24;
        case 0x33bf38u: goto label_33bf38;
        case 0x33bf4cu: goto label_33bf4c;
        case 0x33bf80u: goto label_33bf80;
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33c00cu: goto label_33c00c;
        case 0x33c03cu: goto label_33c03c;
        case 0x33c064u: goto label_33c064;
        case 0x33c078u: goto label_33c078;
        case 0x33c08cu: goto label_33c08c;
        case 0x33c0a0u: goto label_33c0a0;
        case 0x33c104u: goto label_33c104;
        case 0x33c10cu: goto label_33c10c;
        case 0x33c15cu: goto label_33c15c;
        case 0x33c194u: goto label_33c194;
        case 0x33c1c4u: goto label_33c1c4;
        default: break;
    }

    ctx->pc = 0x33bb40u;

    // 0x33bb40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33bb44: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x33bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x33bb48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33bb4c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33bb50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33bb54: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x33bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x33bb58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33bb5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33bb60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33bb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33bb68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb6c: 0x8c45da70  lw          $a1, -0x2590($v0)
    ctx->pc = 0x33bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x33bb70: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x33bb74: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x33bb74u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x33bb78: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bb7c: 0x9042e888  lbu         $v0, -0x1778($v0)
    ctx->pc = 0x33bb7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961288)));
    // 0x33bb80: 0x2810  mfhi        $a1
    ctx->pc = 0x33bb80u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x33bb84: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x33bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33bb88: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x33bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33bb8c: 0x640019  multu       $v1, $a0
    ctx->pc = 0x33bb8cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33bb90: 0x1810  mfhi        $v1
    ctx->pc = 0x33bb90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33bb94: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x33bb98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BB98u;
    {
        const bool branch_taken_0x33bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB98u;
        // 0x33bb9c: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb98) {
            ctx->pc = 0x33BBBCu;
            goto label_33bbbc;
        }
    }
    ctx->pc = 0x33BBA0u;
    // 0x33bba0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33bba4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bba8: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33bbac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33bbb0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33bbb4: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x33bbb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33bbb8: 0xa443e8a0  sh          $v1, -0x1760($v0)
    ctx->pc = 0x33bbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961312), (uint16_t)GPR_U32(ctx, 3));
label_33bbbc:
    // 0x33bbbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bbc0: 0x9444e8a0  lhu         $a0, -0x1760($v0)
    ctx->pc = 0x33bbc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961312)));
    // 0x33bbc4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33bbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33bbc8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33BBC8u;
    {
        const bool branch_taken_0x33bbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbc8) {
            ctx->pc = 0x33BC14u;
            goto label_33bc14;
        }
    }
    ctx->pc = 0x33BBD0u;
    // 0x33bbd0: 0x30823f00  andi        $v0, $a0, 0x3F00
    ctx->pc = 0x33bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16128);
    // 0x33bbd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33BBD4u;
    {
        const bool branch_taken_0x33bbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbd4) {
            ctx->pc = 0x33BC14u;
            goto label_33bc14;
        }
    }
    ctx->pc = 0x33BBDCu;
    // 0x33bbdc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bbe0: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x33bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33bbe4: 0x24843260  addiu       $a0, $a0, 0x3260
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12896));
    // 0x33bbe8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BBE8u;
    SET_GPR_U32(ctx, 31, 0x33BBF0u);
    ctx->pc = 0x33BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BBE8u;
    // 0x33bbec: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BBE8u, 0x33BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBF0u;
label_33bbf0:
    // 0x33bbf0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x33bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x33bbf4: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x33BBF4u;
    {
        const bool branch_taken_0x33bbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbf4) {
            ctx->pc = 0x33BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBF4u;
            // 0x33bbf8: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BDACu;
            goto label_33bdac;
        }
    }
    ctx->pc = 0x33BBFCu;
    // 0x33bbfc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bc00: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33BC00u;
    SET_GPR_U32(ctx, 31, 0x33BC08u);
    ctx->pc = 0x33BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC00u;
    // 0x33bc04: 0x9444e8a0  lhu         $a0, -0x1760($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33BC00u, 0x33BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC08u;
label_33bc08:
    // 0x33bc08: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x33bc08u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33bc0c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x33BC0Cu;
    {
        const bool branch_taken_0x33bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc0c) {
            ctx->pc = 0x33BDACu;
            goto label_33bdac;
        }
    }
    ctx->pc = 0x33BC14u;
label_33bc14:
    // 0x33bc14: 0x5060003a  beql        $v1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x33BC14u;
    {
        const bool branch_taken_0x33bc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc14) {
            ctx->pc = 0x33BC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BC14u;
            // 0x33bc18: 0x30833f00  andi        $v1, $a0, 0x3F00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD00u;
            goto label_33bd00;
        }
    }
    ctx->pc = 0x33BC1Cu;
    // 0x33bc1c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x33bc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33bc20: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BC20u;
    {
        const bool branch_taken_0x33bc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc20) {
            ctx->pc = 0x33BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BC20u;
            // 0x33bc24: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BC40u;
            goto label_33bc40;
        }
    }
    ctx->pc = 0x33BC28u;
    // 0x33bc28: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x33bc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x33bc2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC2Cu;
    {
        const bool branch_taken_0x33bc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc2c) {
            ctx->pc = 0x33BC3Cu;
            goto label_33bc3c;
        }
    }
    ctx->pc = 0x33BC34u;
    // 0x33bc34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x33BC34u;
    {
        const bool branch_taken_0x33bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC34u;
        // 0x33bc38: 0x64020017  daddiu      $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc34) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BC3Cu;
label_33bc3c:
    // 0x33bc3c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33bc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_33bc40:
    // 0x33bc40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BC40u;
    {
        const bool branch_taken_0x33bc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc40) {
            ctx->pc = 0x33BC5Cu;
            goto label_33bc5c;
        }
    }
    ctx->pc = 0x33BC48u;
    // 0x33bc48: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x33bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x33bc4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC4Cu;
    {
        const bool branch_taken_0x33bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc4c) {
            ctx->pc = 0x33BC5Cu;
            goto label_33bc5c;
        }
    }
    ctx->pc = 0x33BC54u;
    // 0x33bc54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33BC54u;
    {
        const bool branch_taken_0x33bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC54u;
        // 0x33bc58: 0x64020019  daddiu      $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc54) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BC5Cu;
label_33bc5c:
    // 0x33bc5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BC5Cu;
    {
        const bool branch_taken_0x33bc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc5c) {
            ctx->pc = 0x33BC78u;
            goto label_33bc78;
        }
    }
    ctx->pc = 0x33BC64u;
    // 0x33bc64: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x33bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x33bc68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC68u;
    {
        const bool branch_taken_0x33bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc68) {
            ctx->pc = 0x33BC78u;
            goto label_33bc78;
        }
    }
    ctx->pc = 0x33BC70u;
    // 0x33bc70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33BC70u;
    {
        const bool branch_taken_0x33bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC70u;
        // 0x33bc74: 0x6402001b  daddiu      $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)27);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc70) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BC78u;
label_33bc78:
    // 0x33bc78: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BC78u;
    {
        const bool branch_taken_0x33bc78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc78) {
            ctx->pc = 0x33BC94u;
            goto label_33bc94;
        }
    }
    ctx->pc = 0x33BC80u;
    // 0x33bc80: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x33bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x33bc84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC84u;
    {
        const bool branch_taken_0x33bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc84) {
            ctx->pc = 0x33BC94u;
            goto label_33bc94;
        }
    }
    ctx->pc = 0x33BC8Cu;
    // 0x33bc8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33BC8Cu;
    {
        const bool branch_taken_0x33bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC8Cu;
        // 0x33bc90: 0x6402001d  daddiu      $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc8c) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BC94u;
label_33bc94:
    // 0x33bc94: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC94u;
    {
        const bool branch_taken_0x33bc94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc94) {
            ctx->pc = 0x33BC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BC94u;
            // 0x33bc98: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BCA4u;
            goto label_33bca4;
        }
    }
    ctx->pc = 0x33BC9Cu;
    // 0x33bc9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33BC9Cu;
    {
        const bool branch_taken_0x33bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC9Cu;
        // 0x33bca0: 0x64020016  daddiu      $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc9c) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BCA4u;
label_33bca4:
    // 0x33bca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BCA4u;
    {
        const bool branch_taken_0x33bca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bca4) {
            ctx->pc = 0x33BCB4u;
            goto label_33bcb4;
        }
    }
    ctx->pc = 0x33BCACu;
    // 0x33bcac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33BCACu;
    {
        const bool branch_taken_0x33bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCACu;
        // 0x33bcb0: 0x64020018  daddiu      $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcac) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BCB4u;
label_33bcb4:
    // 0x33bcb4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BCB4u;
    {
        const bool branch_taken_0x33bcb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bcb4) {
            ctx->pc = 0x33BCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BCB4u;
            // 0x33bcb8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BCC4u;
            goto label_33bcc4;
        }
    }
    ctx->pc = 0x33BCBCu;
    // 0x33bcbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BCBCu;
    {
        const bool branch_taken_0x33bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCBCu;
        // 0x33bcc0: 0x6402001a  daddiu      $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bcbc) {
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BCC4u;
label_33bcc4:
    // 0x33bcc4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x33BCC4u;
    {
        const bool branch_taken_0x33bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bcc4) {
            ctx->pc = 0x33BCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BCC4u;
            // 0x33bcc8: 0x64020025  daddiu      $v0, $zero, 0x25 (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)37);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BCD0u;
            goto label_33bcd0;
        }
    }
    ctx->pc = 0x33BCCCu;
    // 0x33bccc: 0x6402001c  daddiu      $v0, $zero, 0x1C
    ctx->pc = 0x33bcccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28);
label_33bcd0:
    // 0x33bcd0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33bcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bcd4: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33bcd8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33bcdc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33bce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bce4: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x33bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x33bce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bcec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x33bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33bcf0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BCF0u;
    SET_GPR_U32(ctx, 31, 0x33BCF8u);
    ctx->pc = 0x33BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCF0u;
    // 0x33bcf4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BCF0u, 0x33BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCF8u;
label_33bcf8:
    // 0x33bcf8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33BCF8u;
    {
        const bool branch_taken_0x33bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bcf8) {
            ctx->pc = 0x33BDACu;
            goto label_33bdac;
        }
    }
    ctx->pc = 0x33BD00u;
label_33bd00:
    // 0x33bd00: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x33BD00u;
    {
        const bool branch_taken_0x33bd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bd00) {
            ctx->pc = 0x33BD98u;
            goto label_33bd98;
        }
    }
    ctx->pc = 0x33BD08u;
    // 0x33bd08: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x33bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33bd0c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33BD0Cu;
    {
        const bool branch_taken_0x33bd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd0c) {
            ctx->pc = 0x33BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD0Cu;
            // 0x33bd10: 0x64130023  daddiu      $s3, $zero, 0x23 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)35);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD14u;
    // 0x33bd14: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x33bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x33bd18: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33BD18u;
    {
        const bool branch_taken_0x33bd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd18) {
            ctx->pc = 0x33BD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD18u;
            // 0x33bd1c: 0x64130022  daddiu      $s3, $zero, 0x22 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)34);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD20u;
    // 0x33bd20: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x33bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x33bd24: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33BD24u;
    {
        const bool branch_taken_0x33bd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd24) {
            ctx->pc = 0x33BD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD24u;
            // 0x33bd28: 0x64130020  daddiu      $s3, $zero, 0x20 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD2Cu;
    // 0x33bd2c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x33bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33bd30: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33BD30u;
    {
        const bool branch_taken_0x33bd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd30) {
            ctx->pc = 0x33BD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD30u;
            // 0x33bd34: 0x6413001e  daddiu      $s3, $zero, 0x1E (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD38u;
    // 0x33bd38: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x33bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x33bd3c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33BD3Cu;
    {
        const bool branch_taken_0x33bd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd3c) {
            ctx->pc = 0x33BD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD3Cu;
            // 0x33bd40: 0x64130021  daddiu      $s3, $zero, 0x21 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)33);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD44u;
    // 0x33bd44: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33bd48: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BD48u;
    {
        const bool branch_taken_0x33bd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bd48) {
            ctx->pc = 0x33BD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD48u;
            // 0x33bd4c: 0x6413001f  daddiu      $s3, $zero, 0x1F (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)31);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD68u;
            goto label_33bd68;
        }
    }
    ctx->pc = 0x33BD50u;
    // 0x33bd50: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x33bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x33bd54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BD54u;
    {
        const bool branch_taken_0x33bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD54u;
        // 0x33bd58: 0x64130024  daddiu      $s3, $zero, 0x24 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd54) {
            ctx->pc = 0x33BD64u;
            goto label_33bd64;
        }
    }
    ctx->pc = 0x33BD5Cu;
    // 0x33bd5c: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33BD5Cu;
    SET_GPR_U32(ctx, 31, 0x33BD64u);
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33BD5Cu, 0x33BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD64u;
label_33bd64:
    // 0x33bd64: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x33bd64u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33bd68:
    // 0x33bd68: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x33bd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33bd6c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33bd70: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33bd74: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x33bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x33bd78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bd7c: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x33bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33bd80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bd84: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x33bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33bd88: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BD88u;
    SET_GPR_U32(ctx, 31, 0x33BD90u);
    ctx->pc = 0x33BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD88u;
    // 0x33bd8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BD88u, 0x33BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD90u;
label_33bd90:
    // 0x33bd90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33BD90u;
    {
        const bool branch_taken_0x33bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bd90) {
            ctx->pc = 0x33BDACu;
            goto label_33bdac;
        }
    }
    ctx->pc = 0x33BD98u;
label_33bd98:
    // 0x33bd98: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bd9c: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x33bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x33bda0: 0x2484326c  addiu       $a0, $a0, 0x326C
    ctx->pc = 0x33bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12908));
    // 0x33bda4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BDA4u;
    SET_GPR_U32(ctx, 31, 0x33BDACu);
    ctx->pc = 0x33BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDA4u;
    // 0x33bda8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BDA4u, 0x33BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDACu;
label_33bdac:
    // 0x33bdac: 0x1240005d  beqz        $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x33BDACu;
    {
        const bool branch_taken_0x33bdac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bdac) {
            ctx->pc = 0x33BF24u;
            goto label_33bf24;
        }
    }
    ctx->pc = 0x33BDB4u;
    // 0x33bdb4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bdb8: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x33bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x33bdbc: 0x248431a0  addiu       $a0, $a0, 0x31A0
    ctx->pc = 0x33bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12704));
    // 0x33bdc0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BDC0u;
    SET_GPR_U32(ctx, 31, 0x33BDC8u);
    ctx->pc = 0x33BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDC0u;
    // 0x33bdc4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BDC0u, 0x33BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDC8u;
label_33bdc8:
    // 0x33bdc8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bdcc: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x33bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x33bdd0: 0x9044e8a0  lbu         $a0, -0x1760($v0)
    ctx->pc = 0x33bdd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961312)));
    // 0x33bdd4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33bdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33bdd8: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33BDD8u;
    SET_GPR_U32(ctx, 31, 0x33BDE0u);
    ctx->pc = 0x33BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDD8u;
    // 0x33bddc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33BDD8u, 0x33BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDE0u;
label_33bde0:
    // 0x33bde0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bde4: 0x9042e888  lbu         $v0, -0x1778($v0)
    ctx->pc = 0x33bde4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961288)));
    // 0x33bde8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33BDE8u;
    {
        const bool branch_taken_0x33bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDE8u;
        // 0x33bdec: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bde8) {
            ctx->pc = 0x33BE54u;
            goto label_33be54;
        }
    }
    ctx->pc = 0x33BDF0u;
    // 0x33bdf0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x33bdf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33bdf4:
    // 0x33bdf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bdf8: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x33bdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x33bdfc: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x33bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x33be00: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33be04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33be04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33be08: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x33be08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33be0c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33be10: 0x246333b8  addiu       $v1, $v1, 0x33B8
    ctx->pc = 0x33be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13240));
    // 0x33be14: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33be18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33be18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33be1c: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x33be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x33be20: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33be24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33be28: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x33be28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33be2c: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33BE2Cu;
    SET_GPR_U32(ctx, 31, 0x33BE34u);
    ctx->pc = 0x33BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE2Cu;
    // 0x33be30: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33BE2Cu, 0x33BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE34u;
label_33be34:
    // 0x33be34: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x33be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33be38: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x33be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33be3c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33be3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33be40: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x33be40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33be44: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x33BE44u;
    {
        const bool branch_taken_0x33be44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE44u;
        // 0x33be48: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be44) {
            ctx->pc = 0x33BDF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33bdf4;
        }
    }
    ctx->pc = 0x33BE4Cu;
    // 0x33be4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33BE4Cu;
    {
        const bool branch_taken_0x33be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be4c) {
            ctx->pc = 0x33BF00u;
            goto label_33bf00;
        }
    }
    ctx->pc = 0x33BE54u;
label_33be54:
    // 0x33be54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33be54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be58: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x33be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_33be5c:
    // 0x33be5c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33be60: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x33be60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33be64: 0x246333a8  addiu       $v1, $v1, 0x33A8
    ctx->pc = 0x33be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13224));
    // 0x33be68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33be6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33be70: 0x9442e8a0  lhu         $v0, -0x1760($v0)
    ctx->pc = 0x33be70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961312)));
    // 0x33be74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x33be74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33be78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33be7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33BE7Cu;
    {
        const bool branch_taken_0x33be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be7c) {
            ctx->pc = 0x33BEA8u;
            goto label_33bea8;
        }
    }
    ctx->pc = 0x33BE84u;
    // 0x33be84: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33be84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33be88: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33be88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33be8c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33be8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33be90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33be90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33be94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33be94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33be98: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33BE98u;
    SET_GPR_U32(ctx, 31, 0x33BEA0u);
    ctx->pc = 0x33BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE98u;
    // 0x33be9c: 0x24450160  addiu       $a1, $v0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33BE98u, 0x33BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEA0u;
label_33bea0:
    // 0x33bea0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x33bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33bea4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33bea4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33bea8:
    // 0x33bea8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x33bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33beac: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33beacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33beb0: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x33beb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33beb4: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x33BEB4u;
    {
        const bool branch_taken_0x33beb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33beb4) {
            ctx->pc = 0x33BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BEB4u;
            // 0x33beb8: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BE5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33be5c;
        }
    }
    ctx->pc = 0x33BEBCu;
    // 0x33bebc: 0x3272ffff  andi        $s2, $s3, 0xFFFF
    ctx->pc = 0x33bebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33bec0: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x33bec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33bec4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x33BEC4u;
    {
        const bool branch_taken_0x33bec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bec4) {
            ctx->pc = 0x33BF00u;
            goto label_33bf00;
        }
    }
    ctx->pc = 0x33BECCu;
label_33becc:
    // 0x33becc: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33beccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33bed0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33bed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bed4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33bed8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33bed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33bedc: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x33bedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x33bee0: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33BEE0u;
    SET_GPR_U32(ctx, 31, 0x33BEE8u);
    ctx->pc = 0x33BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BEE0u;
    // 0x33bee4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33BEE0u, 0x33BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEE8u;
label_33bee8:
    // 0x33bee8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x33bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33beec: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x33beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33bef0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33bef0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bef4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x33bef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33bef8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x33BEF8u;
    {
        const bool branch_taken_0x33bef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEF8u;
        // 0x33befc: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bef8) {
            ctx->pc = 0x33BECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33becc;
        }
    }
    ctx->pc = 0x33BF00u;
label_33bf00:
    // 0x33bf00: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33bf04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bf08: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bf0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bf10: 0x248431ac  addiu       $a0, $a0, 0x31AC
    ctx->pc = 0x33bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12716));
    // 0x33bf14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33bf18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33bf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33bf1c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BF1Cu;
    SET_GPR_U32(ctx, 31, 0x33BF24u);
    ctx->pc = 0x33BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF1Cu;
    // 0x33bf20: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BF1Cu, 0x33BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF24u;
label_33bf24:
    // 0x33bf24: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bf28: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x33bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x33bf2c: 0x24843278  addiu       $a0, $a0, 0x3278
    ctx->pc = 0x33bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12920));
    // 0x33bf30: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BF30u;
    SET_GPR_U32(ctx, 31, 0x33BF38u);
    ctx->pc = 0x33BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF30u;
    // 0x33bf34: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BF30u, 0x33BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF38u;
label_33bf38:
    // 0x33bf38: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33bf3c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x33bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x33bf40: 0x24843284  addiu       $a0, $a0, 0x3284
    ctx->pc = 0x33bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12932));
    // 0x33bf44: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33BF44u;
    SET_GPR_U32(ctx, 31, 0x33BF4Cu);
    ctx->pc = 0x33BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF44u;
    // 0x33bf48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33BF44u, 0x33BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF4Cu;
label_33bf4c:
    // 0x33bf4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bf50: 0x8c43e8c8  lw          $v1, -0x1738($v0)
    ctx->pc = 0x33bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    // 0x33bf54: 0x2862000e  slti        $v0, $v1, 0xE
    ctx->pc = 0x33bf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x33bf58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BF58u;
    {
        const bool branch_taken_0x33bf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bf58) {
            ctx->pc = 0x33BF68u;
            goto label_33bf68;
        }
    }
    ctx->pc = 0x33BF60u;
    // 0x33bf60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BF60u;
    {
        const bool branch_taken_0x33bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF60u;
        // 0x33bf64: 0x6402000e  daddiu      $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf60) {
            ctx->pc = 0x33BF74u;
            goto label_33bf74;
        }
    }
    ctx->pc = 0x33BF68u;
label_33bf68:
    // 0x33bf68: 0x58600002  blezl       $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33BF68u;
    {
        const bool branch_taken_0x33bf68 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33bf68) {
            ctx->pc = 0x33BF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BF68u;
            // 0x33bf6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF74u;
            goto label_33bf74;
        }
    }
    ctx->pc = 0x33BF70u;
    // 0x33bf70: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x33bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33bf74:
    // 0x33bf74: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33bf74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bf78: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x33BF78u;
    {
        const bool branch_taken_0x33bf78 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x33BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF78u;
        // 0x33bf7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf78) {
            ctx->pc = 0x33BFD0u;
            goto label_33bfd0;
        }
    }
    ctx->pc = 0x33BF80u;
label_33bf80:
    // 0x33bf80: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bf84: 0x3268ffff  andi        $t0, $s3, 0xFFFF
    ctx->pc = 0x33bf84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33bf88: 0x8c44e8c8  lw          $a0, -0x1738($v0)
    ctx->pc = 0x33bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    // 0x33bf8c: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x33bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x33bf90: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33bf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33bf94: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x33bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x33bf98: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x33bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33bf9c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x33bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33bfa0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33bfa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33bfa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33bfac: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x33bfacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33bfb0: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33BFB0u;
    SET_GPR_U32(ctx, 31, 0x33BFB8u);
    ctx->pc = 0x33BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFB0u;
    // 0x33bfb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33BFB0u, 0x33BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFB8u;
label_33bfb8:
    // 0x33bfb8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x33bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33bfbc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33bfbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bfc0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x33bfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33bfc4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33BFC4u;
    {
        const bool branch_taken_0x33bfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bfc4) {
            ctx->pc = 0x33BF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33bf80;
        }
    }
    ctx->pc = 0x33BFCCu;
    // 0x33bfcc: 0x0  nop
    ctx->pc = 0x33bfccu;
    // NOP
label_33bfd0:
    // 0x33bfd0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33bfd4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33bfd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33bfd8: 0x8c42e8c8  lw          $v0, -0x1738($v0)
    ctx->pc = 0x33bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    // 0x33bfdc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x33bfdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33bfe0: 0x54200007  bnel        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BFE0u;
    {
        const bool branch_taken_0x33bfe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bfe0) {
            ctx->pc = 0x33BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BFE0u;
            // 0x33bfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C000u;
            goto label_33c000;
        }
    }
    ctx->pc = 0x33BFE8u;
    // 0x33bfe8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x33bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33bfec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33bfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bff0: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x33bff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33bff4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BFF4u;
    {
        const bool branch_taken_0x33bff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bff4) {
            ctx->pc = 0x33BFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BFF4u;
            // 0x33bff8: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C004u;
            goto label_33c004;
        }
    }
    ctx->pc = 0x33BFFCu;
    // 0x33bffc: 0x6402000f  daddiu      $v0, $zero, 0xF
    ctx->pc = 0x33bffcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
label_33c000:
    // 0x33c000: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x33c000u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33c004:
    // 0x33c004: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x33C004u;
    {
        const bool branch_taken_0x33c004 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x33C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C004u;
        // 0x33c008: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c004) {
            ctx->pc = 0x33C050u;
            goto label_33c050;
        }
    }
    ctx->pc = 0x33C00Cu;
label_33c00c:
    // 0x33c00c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c010: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x33c010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33c014: 0x8c43e8c8  lw          $v1, -0x1738($v0)
    ctx->pc = 0x33c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961352)));
    // 0x33c018: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x33c018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33c01c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x33c020: 0x24450158  addiu       $a1, $v0, 0x158
    ctx->pc = 0x33c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x33c024: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c028: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33c028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33c02c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33c030: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x33c030u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x33c034: 0xc0cf080  jal         func_33C200
    ctx->pc = 0x33C034u;
    SET_GPR_U32(ctx, 31, 0x33C03Cu);
    ctx->pc = 0x33C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C034u;
    // 0x33c038: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C200u, 0x33C034u, 0x33C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C03Cu;
label_33c03c:
    // 0x33c03c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x33c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33c040: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33c040u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c044: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x33c044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33c048: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x33C048u;
    {
        const bool branch_taken_0x33c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c048) {
            ctx->pc = 0x33C00Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33c00c;
        }
    }
    ctx->pc = 0x33C050u;
label_33c050:
    // 0x33c050: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c054: 0x24843170  addiu       $a0, $a0, 0x3170
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12656));
    // 0x33c058: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c05c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C05Cu;
    SET_GPR_U32(ctx, 31, 0x33C064u);
    ctx->pc = 0x33C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C05Cu;
    // 0x33c060: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C05Cu, 0x33C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C064u;
label_33c064:
    // 0x33c064: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c068: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x33c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33c06c: 0x24843170  addiu       $a0, $a0, 0x3170
    ctx->pc = 0x33c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12656));
    // 0x33c070: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C070u;
    SET_GPR_U32(ctx, 31, 0x33C078u);
    ctx->pc = 0x33C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C070u;
    // 0x33c074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C070u, 0x33C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C078u;
label_33c078:
    // 0x33c078: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c07c: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x33c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x33c080: 0x2484317c  addiu       $a0, $a0, 0x317C
    ctx->pc = 0x33c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12668));
    // 0x33c084: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C084u;
    SET_GPR_U32(ctx, 31, 0x33C08Cu);
    ctx->pc = 0x33C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C084u;
    // 0x33c088: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C084u, 0x33C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C08Cu;
label_33c08c:
    // 0x33c08c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c090: 0x24050250  addiu       $a1, $zero, 0x250
    ctx->pc = 0x33c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x33c094: 0x2484317c  addiu       $a0, $a0, 0x317C
    ctx->pc = 0x33c094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12668));
    // 0x33c098: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C098u;
    SET_GPR_U32(ctx, 31, 0x33C0A0u);
    ctx->pc = 0x33C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C098u;
    // 0x33c09c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C098u, 0x33C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0A0u;
label_33c0a0:
    // 0x33c0a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33c0a4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33c0a8: 0x90459730  lbu         $a1, -0x68D0($v0)
    ctx->pc = 0x33c0a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33c0ac: 0x24638af0  addiu       $v1, $v1, -0x7510
    ctx->pc = 0x33c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937328));
    // 0x33c0b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x33c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33c0b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c0b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33c0bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33c0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c0c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33c0c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c0c8: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33C0C8u;
    {
        const bool branch_taken_0x33c0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c0c8) {
            ctx->pc = 0x33C0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C0C8u;
            // 0x33c0cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C108u;
            goto label_33c108;
        }
    }
    ctx->pc = 0x33C0D0u;
    // 0x33c0d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c0d4: 0x9042e888  lbu         $v0, -0x1778($v0)
    ctx->pc = 0x33c0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961288)));
    // 0x33c0d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33C0D8u;
    {
        const bool branch_taken_0x33c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c0d8) {
            ctx->pc = 0x33C104u;
            goto label_33c104;
        }
    }
    ctx->pc = 0x33C0E0u;
    // 0x33c0e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c0e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33c0e8: 0x8c42e8c0  lw          $v0, -0x1740($v0)
    ctx->pc = 0x33c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961344)));
    // 0x33c0ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33c0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0f0: 0x248432d8  addiu       $a0, $a0, 0x32D8
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13016));
    // 0x33c0f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x33c0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33c0f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c0fc: 0xc0c0ae8  jal         func_302BA0
    ctx->pc = 0x33C0FCu;
    SET_GPR_U32(ctx, 31, 0x33C104u);
    ctx->pc = 0x33C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0FCu;
    // 0x33c100: 0x24450160  addiu       $a1, $v0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BA0u, 0x33C0FCu, 0x33C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C104u;
label_33c104:
    // 0x33c104: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33c104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c108:
    // 0x33c108: 0x3272ffff  andi        $s2, $s3, 0xFFFF
    ctx->pc = 0x33c108u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33c10c:
    // 0x33c10c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c110: 0x24423410  addiu       $v0, $v0, 0x3410
    ctx->pc = 0x33c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13328));
    // 0x33c114: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x33c114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33c118: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33c118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33c11c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x33c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33c120: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c124: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x33c124u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c128: 0x94900004  lhu         $s0, 0x4($a0)
    ctx->pc = 0x33c128u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33c12c: 0x24423460  addiu       $v0, $v0, 0x3460
    ctx->pc = 0x33c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
    // 0x33c130: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c134: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c13c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x33c13cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c140: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x33c144: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33c144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c148: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33c14c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33c150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33c150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33c154: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33C154u;
    SET_GPR_U32(ctx, 31, 0x33C15Cu);
    ctx->pc = 0x33C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C154u;
    // 0x33c158: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33C154u, 0x33C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C15Cu;
label_33c15c:
    // 0x33c15c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33c160: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c164: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x33c164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x33c168: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33C168u;
    {
        const bool branch_taken_0x33c168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c168) {
            ctx->pc = 0x33C1A0u;
            goto label_33c1a0;
        }
    }
    ctx->pc = 0x33C170u;
    // 0x33c170: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x33c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x33c174: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x33c174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x33c178: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x33c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x33c17c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x33c17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33c180: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c188: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x33c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x33c18c: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33C18Cu;
    SET_GPR_U32(ctx, 31, 0x33C194u);
    ctx->pc = 0x33C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C18Cu;
    // 0x33c190: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33C18Cu, 0x33C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C194u;
label_33c194:
    // 0x33c194: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33C194u;
    {
        const bool branch_taken_0x33c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c194) {
            ctx->pc = 0x33C1C8u;
            goto label_33c1c8;
        }
    }
    ctx->pc = 0x33C19Cu;
    // 0x33c19c: 0x0  nop
    ctx->pc = 0x33c19cu;
    // NOP
label_33c1a0:
    // 0x33c1a0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x33c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x33c1a4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x33c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x33c1a8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x33c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x33c1ac: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x33c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33c1b0: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x33c1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33c1b4: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x33c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x33c1b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c1bc: 0xc0ce5bc  jal         func_3396F0
    ctx->pc = 0x33C1BCu;
    SET_GPR_U32(ctx, 31, 0x33C1C4u);
    ctx->pc = 0x33C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C1BCu;
    // 0x33c1c0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x33C1BCu, 0x33C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C1C4u;
label_33c1c4:
    // 0x33c1c4: 0x0  nop
    ctx->pc = 0x33c1c4u;
    // NOP
label_33c1c8:
    // 0x33c1c8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x33c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33c1cc: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x33c1ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33c1d0: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x33c1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x33c1d4: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x33C1D4u;
    {
        const bool branch_taken_0x33c1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c1d4) {
            ctx->pc = 0x33C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C1D4u;
            // 0x33c1d8: 0x3272ffff  andi        $s2, $s3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C10Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33c10c;
        }
    }
    ctx->pc = 0x33C1DCu;
    // 0x33c1dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33c1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33c1e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33c1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c1e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x33C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F0u;
        // 0x33c1f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C1F8u;
    // 0x33c1f8: 0x0  nop
    ctx->pc = 0x33c1f8u;
    // NOP
    // 0x33c1fc: 0x0  nop
    ctx->pc = 0x33c1fcu;
    // NOP
}
