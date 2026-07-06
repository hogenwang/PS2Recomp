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

// Function: sub_0019C130
// Address: 0x19c130 - 0x19c400
void sub_0019C130_0x19c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C130_0x19c130");
#endif

    switch (ctx->pc) {
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c210u: goto label_19c210;
        case 0x19c298u: goto label_19c298;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c300u: goto label_19c300;
        case 0x19c330u: goto label_19c330;
        case 0x19c338u: goto label_19c338;
        case 0x19c344u: goto label_19c344;
        case 0x19c34cu: goto label_19c34c;
        case 0x19c364u: goto label_19c364;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c384u: goto label_19c384;
        case 0x19c3b8u: goto label_19c3b8;
        default: break;
    }

    ctx->pc = 0x19c130u;

    // 0x19c130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19c134: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c138: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19c13c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19c140: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19c144: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19c148: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19c14c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19c150: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19c150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c154: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c158: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19c158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c15c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19c164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c16c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19c16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c170: 0x9042d578  lbu         $v0, -0x2A88($v0)
    ctx->pc = 0x19c170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956408)));
    // 0x19c174: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x19C174u;
    {
        const bool branch_taken_0x19c174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C174u;
        // 0x19c178: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c174) {
            ctx->pc = 0x19C328u;
            goto label_19c328;
        }
    }
    ctx->pc = 0x19C17Cu;
    // 0x19c17c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c180: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c184: 0xa043d578  sb          $v1, -0x2A88($v0)
    ctx->pc = 0x19c184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956408), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c188: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c18c: 0x8c42d4f0  lw          $v0, -0x2B10($v0)
    ctx->pc = 0x19c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956272)));
    // 0x19c190: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C190u;
    {
        const bool branch_taken_0x19c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c190) {
            ctx->pc = 0x19C1BCu;
            goto label_19c1bc;
        }
    }
    ctx->pc = 0x19C198u;
    // 0x19c198: 0x92a30014  lbu         $v1, 0x14($s5)
    ctx->pc = 0x19c198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x19c19c: 0x92a40015  lbu         $a0, 0x15($s5)
    ctx->pc = 0x19c19cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 21)));
    // 0x19c1a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19c1a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c1ac: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x19C1ACu;
    SET_GPR_U32(ctx, 31, 0x19C1B4u);
    ctx->pc = 0x19C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1ACu;
    // 0x19c1b0: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x19C1ACu, 0x19C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1B4u;
label_19c1b4:
    // 0x19c1b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19c1b8: 0xac62d4f0  sw          $v0, -0x2B10($v1)
    ctx->pc = 0x19c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956272), GPR_U32(ctx, 2));
label_19c1bc:
    // 0x19c1bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c1c0: 0x8c42d4e8  lw          $v0, -0x2B18($v0)
    ctx->pc = 0x19c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956264)));
    // 0x19c1c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C1C4u;
    {
        const bool branch_taken_0x19c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c1c4) {
            ctx->pc = 0x19C1F0u;
            goto label_19c1f0;
        }
    }
    ctx->pc = 0x19C1CCu;
    // 0x19c1cc: 0x92a30014  lbu         $v1, 0x14($s5)
    ctx->pc = 0x19c1ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x19c1d0: 0x92a40015  lbu         $a0, 0x15($s5)
    ctx->pc = 0x19c1d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 21)));
    // 0x19c1d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19c1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c1e0: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x19C1E0u;
    SET_GPR_U32(ctx, 31, 0x19C1E8u);
    ctx->pc = 0x19C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1E0u;
    // 0x19c1e4: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x19C1E0u, 0x19C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1E8u;
label_19c1e8:
    // 0x19c1e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19c1ec: 0xac62d4e8  sw          $v0, -0x2B18($v1)
    ctx->pc = 0x19c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956264), GPR_U32(ctx, 2));
label_19c1f0:
    // 0x19c1f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c1f4: 0x8c42d4f0  lw          $v0, -0x2B10($v0)
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956272)));
    // 0x19c1f8: 0x50400073  beql        $v0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x19C1F8u;
    {
        const bool branch_taken_0x19c1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1f8) {
            ctx->pc = 0x19C1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C1F8u;
            // 0x19c1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C3C8u;
            goto label_19c3c8;
        }
    }
    ctx->pc = 0x19C200u;
    // 0x19c200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19c200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c208: 0xc05e174  jal         func_1785D0
    ctx->pc = 0x19C208u;
    SET_GPR_U32(ctx, 31, 0x19C210u);
    ctx->pc = 0x19C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C208u;
    // 0x19c20c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785D0u, 0x19C208u, 0x19C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C210u;
label_19c210:
    // 0x19c210: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c214: 0x8c42d4f0  lw          $v0, -0x2B10($v0)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956272)));
    // 0x19c218: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19c218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x19c21c: 0x92a30014  lbu         $v1, 0x14($s5)
    ctx->pc = 0x19c21cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x19c220: 0x92a20015  lbu         $v0, 0x15($s5)
    ctx->pc = 0x19c220u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 21)));
    // 0x19c224: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19c224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19c228: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x19c228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x19c22c: 0x86a50012  lh          $a1, 0x12($s5)
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x19c230: 0x86a40010  lh          $a0, 0x10($s5)
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19c234: 0x54850004  bnel        $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C234u;
    {
        const bool branch_taken_0x19c234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x19c234) {
            ctx->pc = 0x19C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C234u;
            // 0x19c238: 0x92a20018  lbu         $v0, 0x18($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C248u;
            goto label_19c248;
        }
    }
    ctx->pc = 0x19C23Cu;
    // 0x19c23c: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x19c23cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x19c240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C240u;
    {
        const bool branch_taken_0x19c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C240u;
        // 0x19c244: 0x34560100  ori         $s6, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c240) {
            ctx->pc = 0x19C24Cu;
            goto label_19c24c;
        }
    }
    ctx->pc = 0x19C248u;
label_19c248:
    // 0x19c248: 0x34560900  ori         $s6, $v0, 0x900
    ctx->pc = 0x19c248u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2304);
label_19c24c:
    // 0x19c24c: 0x96a30016  lhu         $v1, 0x16($s5)
    ctx->pc = 0x19c24cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x19c250: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x19c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19c254: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19C254u;
    {
        const bool branch_taken_0x19c254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c254) {
            ctx->pc = 0x19C258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C254u;
            // 0x19c258: 0x85b818  mult        $s7, $a0, $a1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C288u;
            goto label_19c288;
        }
    }
    ctx->pc = 0x19C25Cu;
    // 0x19c25c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19c260: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C260u;
    {
        const bool branch_taken_0x19c260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c260) {
            ctx->pc = 0x19C264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C260u;
            // 0x19c264: 0x85b818  mult        $s7, $a0, $a1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C280u;
            goto label_19c280;
        }
    }
    ctx->pc = 0x19C268u;
    // 0x19c268: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C268u;
    {
        const bool branch_taken_0x19c268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c268) {
            ctx->pc = 0x19C26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C268u;
            // 0x19c26c: 0x851018  mult        $v0, $a0, $a1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C278u;
            goto label_19c278;
        }
    }
    ctx->pc = 0x19C270u;
    // 0x19c270: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19C270u;
    {
        const bool branch_taken_0x19c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c270) {
            ctx->pc = 0x19C290u;
            goto label_19c290;
        }
    }
    ctx->pc = 0x19C278u;
label_19c278:
    // 0x19c278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C278u;
    {
        const bool branch_taken_0x19c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C278u;
        // 0x19c27c: 0x2b840  sll         $s7, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c278) {
            ctx->pc = 0x19C28Cu;
            goto label_19c28c;
        }
    }
    ctx->pc = 0x19C280u;
label_19c280:
    // 0x19c280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C280u;
    {
        const bool branch_taken_0x19c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C280u;
        // 0x19c284: 0x36d60500  ori         $s6, $s6, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c280) {
            ctx->pc = 0x19C28Cu;
            goto label_19c28c;
        }
    }
    ctx->pc = 0x19C288u;
label_19c288:
    // 0x19c288: 0x36d60700  ori         $s6, $s6, 0x700
    ctx->pc = 0x19c288u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1792);
label_19c28c:
    // 0x19c28c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19c290:
    // 0x19c290: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x19C290u;
    SET_GPR_U32(ctx, 31, 0x19C298u);
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x19C290u, 0x19C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C298u;
label_19c298:
    // 0x19c298: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19c29c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19C29Cu;
    {
        const bool branch_taken_0x19c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C29Cu;
        // 0x19c2a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c29c) {
            ctx->pc = 0x19C320u;
            goto label_19c320;
        }
    }
    ctx->pc = 0x19C2A4u;
    // 0x19c2a4: 0x211f021  addu        $fp, $s0, $s1
    ctx->pc = 0x19c2a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x19c2a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19c2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19c2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c2b4:
    // 0x19c2b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c2b8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x19c2bc: 0x8c44d4e8  lw          $a0, -0x2B18($v0)
    ctx->pc = 0x19c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956264)));
    // 0x19c2c0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19c2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2c4: 0x86a70010  lh          $a3, 0x10($s5)
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19c2c8: 0x86a80012  lh          $t0, 0x12($s5)
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x19c2cc: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19c2d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19c2d4: 0xc067cd4  jal         func_19F350
    ctx->pc = 0x19C2D4u;
    SET_GPR_U32(ctx, 31, 0x19C2DCu);
    ctx->pc = 0x19C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2D4u;
    // 0x19c2d8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F350u, 0x19C2D4u, 0x19C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2DCu;
label_19c2dc:
    // 0x19c2dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19c2e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c2e4: 0x8c63d4f0  lw          $v1, -0x2B10($v1)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956272)));
    // 0x19c2e8: 0x27e3021  addu        $a2, $s3, $fp
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x19c2ec: 0x8c42d4e8  lw          $v0, -0x2B18($v0)
    ctx->pc = 0x19c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956264)));
    // 0x19c2f0: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x19c2f4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x19c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19c2f8: 0xc067cd8  jal         func_19F360
    ctx->pc = 0x19C2F8u;
    SET_GPR_U32(ctx, 31, 0x19C300u);
    ctx->pc = 0x19C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2F8u;
    // 0x19c2fc: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F360u, 0x19C2F8u, 0x19C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C300u;
label_19c300:
    // 0x19c300: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19c304: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19c308: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x19c308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x19c30c: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x19c310: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19c314: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19C314u;
    {
        const bool branch_taken_0x19c314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C314u;
        // 0x19c318: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c314) {
            ctx->pc = 0x19C2B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c2b4;
        }
    }
    ctx->pc = 0x19C31Cu;
    // 0x19c31c: 0x0  nop
    ctx->pc = 0x19c31cu;
    // NOP
label_19c320:
    // 0x19c320: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19c324: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x19c324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
label_19c328:
    // 0x19c328: 0xc06812c  jal         func_1A04B0
    ctx->pc = 0x19C328u;
    SET_GPR_U32(ctx, 31, 0x19C330u);
    ctx->pc = 0x19C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C328u;
    // 0x19c32c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A04B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A04B0u, 0x19C328u, 0x19C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C330u;
label_19c330:
    // 0x19c330: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x19C330u;
    SET_GPR_U32(ctx, 31, 0x19C338u);
    ctx->pc = 0x19C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C330u;
    // 0x19c334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x19C330u, 0x19C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C338u;
label_19c338:
    // 0x19c338: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x19c338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x19c33c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C33Cu;
    {
        const bool branch_taken_0x19c33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c33c) {
            ctx->pc = 0x19C390u;
            goto label_19c390;
        }
    }
    ctx->pc = 0x19C344u;
label_19c344:
    // 0x19c344: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19C344u;
    SET_GPR_U32(ctx, 31, 0x19C34Cu);
    ctx->pc = 0x19C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C344u;
    // 0x19c348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19C344u, 0x19C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C34Cu;
label_19c34c:
    // 0x19c34c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c354: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C354u;
    {
        const bool branch_taken_0x19c354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c354) {
            ctx->pc = 0x19C368u;
            goto label_19c368;
        }
    }
    ctx->pc = 0x19C35Cu;
    // 0x19c35c: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19C35Cu;
    SET_GPR_U32(ctx, 31, 0x19C364u);
    ctx->pc = 0x19C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C35Cu;
    // 0x19c360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19C35Cu, 0x19C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C364u;
label_19c364:
    // 0x19c364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c368:
    // 0x19c368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c36c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C36Cu;
    {
        const bool branch_taken_0x19c36c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c36c) {
            ctx->pc = 0x19C390u;
            goto label_19c390;
        }
    }
    ctx->pc = 0x19C374u;
    // 0x19c374: 0xc06812c  jal         func_1A04B0
    ctx->pc = 0x19C374u;
    SET_GPR_U32(ctx, 31, 0x19C37Cu);
    ctx->pc = 0x1A04B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A04B0u, 0x19C374u, 0x19C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C37Cu;
label_19c37c:
    // 0x19c37c: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x19C37Cu;
    SET_GPR_U32(ctx, 31, 0x19C384u);
    ctx->pc = 0x19C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C37Cu;
    // 0x19c380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x19C37Cu, 0x19C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C384u;
label_19c384:
    // 0x19c384: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x19c388: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19C388u;
    {
        const bool branch_taken_0x19c388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c388) {
            ctx->pc = 0x19C344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c344;
        }
    }
    ctx->pc = 0x19C390u;
label_19c390:
    // 0x19c390: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C390u;
    {
        const bool branch_taken_0x19c390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c390) {
            ctx->pc = 0x19C3A0u;
            goto label_19c3a0;
        }
    }
    ctx->pc = 0x19C398u;
    // 0x19c398: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19C398u;
    {
        const bool branch_taken_0x19c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C398u;
        // 0x19c39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c398) {
            ctx->pc = 0x19C3C8u;
            goto label_19c3c8;
        }
    }
    ctx->pc = 0x19C3A0u;
label_19c3a0:
    // 0x19c3a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c3a4: 0x8c44d4e8  lw          $a0, -0x2B18($v0)
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956264)));
    // 0x19c3a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C3A8u;
    {
        const bool branch_taken_0x19c3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c3a8) {
            ctx->pc = 0x19C3C0u;
            goto label_19c3c0;
        }
    }
    ctx->pc = 0x19C3B0u;
    // 0x19c3b0: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19C3B0u;
    SET_GPR_U32(ctx, 31, 0x19C3B8u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x19C3B0u, 0x19C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3B8u;
label_19c3b8:
    // 0x19c3b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c3bc: 0xac40d4e8  sw          $zero, -0x2B18($v0)
    ctx->pc = 0x19c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956264), GPR_U32(ctx, 0));
label_19c3c0:
    // 0x19c3c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19c3c4: 0x8c42d4f0  lw          $v0, -0x2B10($v0)
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956272)));
label_19c3c8:
    // 0x19c3c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19c3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19c3cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19c3ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19c3d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19c3d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c3d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19c3d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c3d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19c3d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c3dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c3e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3F0u;
        // 0x19c3f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C3F8u;
    // 0x19c3f8: 0x0  nop
    ctx->pc = 0x19c3f8u;
    // NOP
    // 0x19c3fc: 0x0  nop
    ctx->pc = 0x19c3fcu;
    // NOP
}
