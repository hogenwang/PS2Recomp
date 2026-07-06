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

// Function: sub_0025EC48
// Address: 0x25ec48 - 0x25ee90
void sub_0025EC48_0x25ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC48_0x25ec48");
#endif

    switch (ctx->pc) {
        case 0x25ec88u: goto label_25ec88;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed74u: goto label_25ed74;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed88u: goto label_25ed88;
        case 0x25eda0u: goto label_25eda0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edd4u: goto label_25edd4;
        case 0x25edecu: goto label_25edec;
        case 0x25edf8u: goto label_25edf8;
        case 0x25ee08u: goto label_25ee08;
        case 0x25ee18u: goto label_25ee18;
        case 0x25ee34u: goto label_25ee34;
        case 0x25ee44u: goto label_25ee44;
        case 0x25ee50u: goto label_25ee50;
        default: break;
    }

    ctx->pc = 0x25ec48u;

    // 0x25ec48: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x25ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x25ec4c: 0xffb70190  sd          $s7, 0x190($sp)
    ctx->pc = 0x25ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 23));
    // 0x25ec50: 0xffb50170  sd          $s5, 0x170($sp)
    ctx->pc = 0x25ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 21));
    // 0x25ec54: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec58: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x25ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x25ec5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25ec5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec60: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x25ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x25ec64: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x25ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x25ec68: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x25ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x25ec6c: 0xffb30150  sd          $s3, 0x150($sp)
    ctx->pc = 0x25ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
    // 0x25ec70: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x25ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x25ec74: 0xffb10130  sd          $s1, 0x130($sp)
    ctx->pc = 0x25ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
    // 0x25ec78: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x25ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x25ec7c: 0xafa40114  sw          $a0, 0x114($sp)
    ctx->pc = 0x25ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
    // 0x25ec80: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25EC80u;
    SET_GPR_U32(ctx, 31, 0x25EC88u);
    ctx->pc = 0x25EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC80u;
    // 0x25ec84: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25EC80u, 0x25EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC88u;
label_25ec88:
    // 0x25ec88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25ec88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec8c: 0x12800072  beqz        $s4, . + 4 + (0x72 << 2)
    ctx->pc = 0x25EC8Cu;
    {
        const bool branch_taken_0x25ec8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC8Cu;
        // 0x25ec90: 0x17b0c0  sll         $s6, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec8c) {
            ctx->pc = 0x25EE58u;
            goto label_25ee58;
        }
    }
    ctx->pc = 0x25EC94u;
    // 0x25ec94: 0x2ede0101  sltiu       $fp, $s6, 0x101
    ctx->pc = 0x25ec94u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x25ec98: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x25EC98u;
    {
        const bool branch_taken_0x25ec98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC98u;
        // 0x25ec9c: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec98) {
            ctx->pc = 0x25ECBCu;
            goto label_25ecbc;
        }
    }
    ctx->pc = 0x25ECA0u;
    // 0x25eca0: 0xc098552  jal         func_261548
    ctx->pc = 0x25ECA0u;
    SET_GPR_U32(ctx, 31, 0x25ECA8u);
    ctx->pc = 0x25ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECA0u;
    // 0x25eca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25ECA0u, 0x25ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECA8u;
label_25eca8:
    // 0x25eca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25eca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecac: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ECACu;
    {
        const bool branch_taken_0x25ecac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECACu;
        // 0x25ecb0: 0x8fa40114  lw          $a0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecac) {
            ctx->pc = 0x25ECC0u;
            goto label_25ecc0;
        }
    }
    ctx->pc = 0x25ECB4u;
    // 0x25ecb4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x25ECB4u;
    {
        const bool branch_taken_0x25ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECB4u;
        // 0x25ecb8: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecb4) {
            ctx->pc = 0x25EE44u;
            goto label_25ee44;
        }
    }
    ctx->pc = 0x25ECBCu;
label_25ecbc:
    // 0x25ecbc: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x25ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_25ecc0:
    // 0x25ecc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecc4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25ECC4u;
    SET_GPR_U32(ctx, 31, 0x25ECCCu);
    ctx->pc = 0x25ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECC4u;
    // 0x25ecc8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25ECC4u, 0x25ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECCCu;
label_25eccc:
    // 0x25eccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ecd0: 0x12a20025  beq         $s5, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25ECD0u;
    {
        const bool branch_taken_0x25ecd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECD0u;
        // 0x25ecd4: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecd0) {
            ctx->pc = 0x25ED68u;
            goto label_25ed68;
        }
    }
    ctx->pc = 0x25ECD8u;
    // 0x25ecd8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x25ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x25ecdc: 0x72a2001a  div1        $zero, $s5, $v0
    ctx->pc = 0x25ecdcu;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 21); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x25ece0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25ECE0u;
    {
        const bool branch_taken_0x25ece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ece0) {
            ctx->pc = 0x25ECE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ECE0u;
            // 0x25ece4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ECE8u;
            goto label_25ece8;
        }
    }
    ctx->pc = 0x25ECE8u;
label_25ece8:
    // 0x25ece8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25ecec: 0x70001810  mfhi1       $v1
    ctx->pc = 0x25ececu;
    SET_GPR_U64(ctx, 3, ctx->hi1);
    // 0x25ecf0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x25ecf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x25ecf4: 0x70001812  mflo1       $v1
    ctx->pc = 0x25ecf4u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x25ecf8: 0xffa30100  sd          $v1, 0x100($sp)
    ctx->pc = 0x25ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 3));
    // 0x25ecfc: 0x1012  mflo        $v0
    ctx->pc = 0x25ecfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25ed00: 0xc08c99e  jal         func_232678
    ctx->pc = 0x25ED00u;
    SET_GPR_U32(ctx, 31, 0x25ED08u);
    ctx->pc = 0x25ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED00u;
    // 0x25ed04: 0xffa20108  sd          $v0, 0x108($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232678u, 0x25ED00u, 0x25ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED08u;
label_25ed08:
    // 0x25ed08: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25ED08u;
    {
        const bool branch_taken_0x25ed08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED08u;
        // 0x25ed0c: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed08) {
            ctx->pc = 0x25EE10u;
            goto label_25ee10;
        }
    }
    ctx->pc = 0x25ED10u;
    // 0x25ed10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25ed14: 0xdfa60100  ld          $a2, 0x100($sp)
    ctx->pc = 0x25ed14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25ed18: 0x244317c0  addiu       $v1, $v0, 0x17C0
    ctx->pc = 0x25ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
    // 0x25ed1c: 0xdc4517c0  ld          $a1, 0x17C0($v0)
    ctx->pc = 0x25ed1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
    // 0x25ed20: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x25ed20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ed24: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x25ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x25ed28: 0x3484423f  ori         $a0, $a0, 0x423F
    ctx->pc = 0x25ed28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16959);
    // 0x25ed2c: 0xdfa20108  ld          $v0, 0x108($sp)
    ctx->pc = 0x25ed2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ed30: 0xc5182d  daddu       $v1, $a2, $a1
    ctx->pc = 0x25ed30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x25ed34: 0xffa30100  sd          $v1, 0x100($sp)
    ctx->pc = 0x25ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 3));
    // 0x25ed38: 0x47282d  daddu       $a1, $v0, $a3
    ctx->pc = 0x25ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x25ed3c: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x25ed3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25ed40: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x25ED40u;
    {
        const bool branch_taken_0x25ed40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED40u;
        // 0x25ed44: 0xffa50108  sd          $a1, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed40) {
            ctx->pc = 0x25ED6Cu;
            goto label_25ed6c;
        }
    }
    ctx->pc = 0x25ED48u;
    // 0x25ed48: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x25ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x25ed4c: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x25ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x25ed50: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25ed50u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25ed54: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x25ed54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25ed58: 0xffa30100  sd          $v1, 0x100($sp)
    ctx->pc = 0x25ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 3));
    // 0x25ed5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25ED5Cu;
    {
        const bool branch_taken_0x25ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED5Cu;
        // 0x25ed60: 0xffa20108  sd          $v0, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed5c) {
            ctx->pc = 0x25ED6Cu;
            goto label_25ed6c;
        }
    }
    ctx->pc = 0x25ED64u;
    // 0x25ed64: 0x0  nop
    ctx->pc = 0x25ed64u;
    // NOP
label_25ed68:
    // 0x25ed68: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x25ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_25ed6c:
    // 0x25ed6c: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x25ed6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25ed70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ed74:
    // 0x25ed74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed78: 0xc097bd4  jal         func_25EF50
    ctx->pc = 0x25ED78u;
    SET_GPR_U32(ctx, 31, 0x25ED80u);
    ctx->pc = 0x25ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED78u;
    // 0x25ed7c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EF50u, 0x25ED78u, 0x25ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED80u;
label_25ed80:
    // 0x25ed80: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25ED80u;
    SET_GPR_U32(ctx, 31, 0x25ED88u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25ED80u, 0x25ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED88u;
label_25ed88:
    // 0x25ed88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ed88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ed90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed94: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25ed94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed98: 0xc097ba4  jal         func_25EE90
    ctx->pc = 0x25ED98u;
    SET_GPR_U32(ctx, 31, 0x25EDA0u);
    ctx->pc = 0x25ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED98u;
    // 0x25ed9c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE90u, 0x25ED98u, 0x25EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDA0u;
label_25eda0:
    // 0x25eda0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25eda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eda4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EDA4u;
    {
        const bool branch_taken_0x25eda4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDA4u;
        // 0x25eda8: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eda4) {
            ctx->pc = 0x25EDCCu;
            goto label_25edcc;
        }
    }
    ctx->pc = 0x25EDACu;
    // 0x25edac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EDACu;
    {
        const bool branch_taken_0x25edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDACu;
        // 0x25edb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edac) {
            ctx->pc = 0x25EDCCu;
            goto label_25edcc;
        }
    }
    ctx->pc = 0x25EDB4u;
    // 0x25edb4: 0x12a2000a  beq         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25EDB4u;
    {
        const bool branch_taken_0x25edb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDB4u;
        // 0x25edb8: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edb4) {
            ctx->pc = 0x25EDE0u;
            goto label_25ede0;
        }
    }
    ctx->pc = 0x25EDBCu;
    // 0x25edbc: 0xc098012  jal         func_260048
    ctx->pc = 0x25EDBCu;
    SET_GPR_U32(ctx, 31, 0x25EDC4u);
    ctx->pc = 0x25EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDBCu;
    // 0x25edc0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260048u, 0x25EDBCu, 0x25EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDC4u;
label_25edc4:
    // 0x25edc4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EDC4u;
    {
        const bool branch_taken_0x25edc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDC4u;
        // 0x25edc8: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edc4) {
            ctx->pc = 0x25EDDCu;
            goto label_25eddc;
        }
    }
    ctx->pc = 0x25EDCCu;
label_25edcc:
    // 0x25edcc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25EDCCu;
    SET_GPR_U32(ctx, 31, 0x25EDD4u);
    ctx->pc = 0x25EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDCCu;
    // 0x25edd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25EDCCu, 0x25EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDD4u;
label_25edd4:
    // 0x25edd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25EDD4u;
    {
        const bool branch_taken_0x25edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25edd4) {
            ctx->pc = 0x25EE10u;
            goto label_25ee10;
        }
    }
    ctx->pc = 0x25EDDCu;
label_25eddc:
    // 0x25eddc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25ede0:
    // 0x25ede0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x25ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25ede4: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x25EDE4u;
    SET_GPR_U32(ctx, 31, 0x25EDECu);
    ctx->pc = 0x25EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDE4u;
    // 0x25ede8: 0x2484fa08  addiu       $a0, $a0, -0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x25EDE4u, 0x25EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDECu;
label_25edec:
    // 0x25edec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25edecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edf0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25EDF0u;
    SET_GPR_U32(ctx, 31, 0x25EDF8u);
    ctx->pc = 0x25EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDF0u;
    // 0x25edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25EDF0u, 0x25EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDF8u;
label_25edf8:
    // 0x25edf8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EDF8u;
    {
        const bool branch_taken_0x25edf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25edf8) {
            ctx->pc = 0x25EE10u;
            goto label_25ee10;
        }
    }
    ctx->pc = 0x25EE00u;
    // 0x25ee00: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25EE00u;
    SET_GPR_U32(ctx, 31, 0x25EE08u);
    ctx->pc = 0x25EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE00u;
    // 0x25ee04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25EE00u, 0x25EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE08u;
label_25ee08:
    // 0x25ee08: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x25EE08u;
    {
        const bool branch_taken_0x25ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE08u;
        // 0x25ee0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee08) {
            ctx->pc = 0x25ED74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ed74;
        }
    }
    ctx->pc = 0x25EE10u;
label_25ee10:
    // 0x25ee10: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25EE10u;
    SET_GPR_U32(ctx, 31, 0x25EE18u);
    ctx->pc = 0x25EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE10u;
    // 0x25ee14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25EE10u, 0x25EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE18u;
label_25ee18:
    // 0x25ee18: 0x3a02000b  xori        $v0, $s0, 0xB
    ctx->pc = 0x25ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)11);
    // 0x25ee1c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x25ee1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x25ee20: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE20u;
    {
        const bool branch_taken_0x25ee20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE20u;
        // 0x25ee24: 0x8fa50114  lw          $a1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee20) {
            ctx->pc = 0x25EE34u;
            goto label_25ee34;
        }
    }
    ctx->pc = 0x25EE28u;
    // 0x25ee28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x25ee28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee2c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25EE2Cu;
    SET_GPR_U32(ctx, 31, 0x25EE34u);
    ctx->pc = 0x25EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE2Cu;
    // 0x25ee30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x25EE2Cu, 0x25EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE34u;
label_25ee34:
    // 0x25ee34: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE34u;
    {
        const bool branch_taken_0x25ee34 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE34u;
        // 0x25ee38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee34) {
            ctx->pc = 0x25EE48u;
            goto label_25ee48;
        }
    }
    ctx->pc = 0x25EE3Cu;
    // 0x25ee3c: 0xc098560  jal         func_261580
    ctx->pc = 0x25EE3Cu;
    SET_GPR_U32(ctx, 31, 0x25EE44u);
    ctx->pc = 0x25EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE3Cu;
    // 0x25ee40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25EE3Cu, 0x25EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE44u;
label_25ee44:
    // 0x25ee44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ee48:
    // 0x25ee48: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25EE48u;
    SET_GPR_U32(ctx, 31, 0x25EE50u);
    ctx->pc = 0x25EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE48u;
    // 0x25ee4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25EE48u, 0x25EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE50u;
label_25ee50:
    // 0x25ee50: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EE50u;
    {
        const bool branch_taken_0x25ee50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE50u;
        // 0x25ee54: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee50) {
            ctx->pc = 0x25EE5Cu;
            goto label_25ee5c;
        }
    }
    ctx->pc = 0x25EE58u;
label_25ee58:
    // 0x25ee58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25ee5c:
    // 0x25ee5c: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x25ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x25ee60: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x25ee60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x25ee64: 0xdfb70190  ld          $s7, 0x190($sp)
    ctx->pc = 0x25ee64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x25ee68: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x25ee68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25ee6c: 0xdfb50170  ld          $s5, 0x170($sp)
    ctx->pc = 0x25ee6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x25ee70: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x25ee70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x25ee74: 0xdfb30150  ld          $s3, 0x150($sp)
    ctx->pc = 0x25ee74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25ee78: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x25ee78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25ee7c: 0xdfb10130  ld          $s1, 0x130($sp)
    ctx->pc = 0x25ee7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25ee80: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x25ee80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25ee84: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE84u;
        // 0x25ee88: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE8Cu;
    // 0x25ee8c: 0x0  nop
    ctx->pc = 0x25ee8cu;
    // NOP
}
