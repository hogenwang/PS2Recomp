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

// Function: sub_001721E0
// Address: 0x1721e0 - 0x1726b0
void sub_001721E0_0x1721e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001721E0_0x1721e0");
#endif

    switch (ctx->pc) {
        case 0x172250u: goto label_172250;
        case 0x172258u: goto label_172258;
        case 0x17226cu: goto label_17226c;
        case 0x1722a8u: goto label_1722a8;
        case 0x1722b0u: goto label_1722b0;
        case 0x172378u: goto label_172378;
        case 0x172398u: goto label_172398;
        case 0x1723b4u: goto label_1723b4;
        case 0x172404u: goto label_172404;
        case 0x172410u: goto label_172410;
        case 0x172418u: goto label_172418;
        case 0x172518u: goto label_172518;
        case 0x172560u: goto label_172560;
        case 0x172568u: goto label_172568;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725b4u: goto label_1725b4;
        case 0x1725e0u: goto label_1725e0;
        case 0x172618u: goto label_172618;
        case 0x172664u: goto label_172664;
        default: break;
    }

    ctx->pc = 0x1721e0u;

    // 0x1721e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1721e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1721e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1721e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1721ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1721ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1721f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1721f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1721f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1721f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1721f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1721f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1721fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1721fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172200: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x172204: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x172208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17220c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172218: 0x9044db00  lbu         $a0, -0x2500($v0)
    ctx->pc = 0x172218u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957824)));
    // 0x17221c: 0xa3a300c8  sb          $v1, 0xC8($sp)
    ctx->pc = 0x17221cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x172220: 0xa3a300c9  sb          $v1, 0xC9($sp)
    ctx->pc = 0x172220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 201), (uint8_t)GPR_U32(ctx, 3));
    // 0x172224: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x172224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x172228: 0xa3a300ca  sb          $v1, 0xCA($sp)
    ctx->pc = 0x172228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 202), (uint8_t)GPR_U32(ctx, 3));
    // 0x17222c: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x17222cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x172230: 0xa3a300cb  sb          $v1, 0xCB($sp)
    ctx->pc = 0x172230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 203), (uint8_t)GPR_U32(ctx, 3));
    // 0x172234: 0xa3a300cc  sb          $v1, 0xCC($sp)
    ctx->pc = 0x172234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x172238: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x172238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x17223c: 0xa3a300cd  sb          $v1, 0xCD($sp)
    ctx->pc = 0x17223cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 205), (uint8_t)GPR_U32(ctx, 3));
    // 0x172240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x172240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172244: 0xa3a300ce  sb          $v1, 0xCE($sp)
    ctx->pc = 0x172244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 3));
    // 0x172248: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x172248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x17224c: 0xa3a300cf  sb          $v1, 0xCF($sp)
    ctx->pc = 0x17224cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 3));
label_172250:
    // 0x172250: 0xc062810  jal         func_18A040
    ctx->pc = 0x172250u;
    SET_GPR_U32(ctx, 31, 0x172258u);
    ctx->pc = 0x172254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172250u;
    // 0x172254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x172250u, 0x172258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172258u;
label_172258:
    // 0x172258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x172258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17225c: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x17225Cu;
    {
        const bool branch_taken_0x17225c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17225c) {
            ctx->pc = 0x172358u;
            goto label_172358;
        }
    }
    ctx->pc = 0x172264u;
    // 0x172264: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x172264u;
    SET_GPR_U32(ctx, 31, 0x17226Cu);
    ctx->pc = 0x172268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172264u;
    // 0x172268: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x172264u, 0x17226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17226Cu;
label_17226c:
    // 0x17226c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17226cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172270: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x172274: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x172278: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17227c: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x172280: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x172284: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172288: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17228c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x17228cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172290: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x172290u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172294: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x172294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x172298: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x172298u;
    {
        const bool branch_taken_0x172298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172298) {
            ctx->pc = 0x172350u;
            goto label_172350;
        }
    }
    ctx->pc = 0x1722A0u;
    // 0x1722a0: 0xc062784  jal         func_189E10
    ctx->pc = 0x1722A0u;
    SET_GPR_U32(ctx, 31, 0x1722A8u);
    ctx->pc = 0x1722A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722A0u;
    // 0x1722a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E10u, 0x1722A0u, 0x1722A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722A8u;
label_1722a8:
    // 0x1722a8: 0xc062810  jal         func_18A040
    ctx->pc = 0x1722A8u;
    SET_GPR_U32(ctx, 31, 0x1722B0u);
    ctx->pc = 0x1722ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722A8u;
    // 0x1722ac: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x1722A8u, 0x1722B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722B0u;
label_1722b0:
    // 0x1722b0: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x1722B0u;
    {
        const bool branch_taken_0x1722b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722b0) {
            ctx->pc = 0x172340u;
            goto label_172340;
        }
    }
    ctx->pc = 0x1722B8u;
    // 0x1722b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1722B8u;
    {
        const bool branch_taken_0x1722b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722b8) {
            ctx->pc = 0x172340u;
            goto label_172340;
        }
    }
    ctx->pc = 0x1722C0u;
    // 0x1722c0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1722c4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1722c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1722c8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1722c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1722cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1722CCu;
    {
        const bool branch_taken_0x1722cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722cc) {
            ctx->pc = 0x1722E0u;
            goto label_1722e0;
        }
    }
    ctx->pc = 0x1722D4u;
    // 0x1722d4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1722d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1722d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1722d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1722dc: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1722dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_1722e0:
    // 0x1722e0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1722e4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1722e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1722e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1722e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1722ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1722ECu;
    {
        const bool branch_taken_0x1722ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722ec) {
            ctx->pc = 0x172300u;
            goto label_172300;
        }
    }
    ctx->pc = 0x1722F4u;
    // 0x1722f4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1722f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1722f8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x1722f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x1722fc: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1722fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_172300:
    // 0x172300: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x172300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172304: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x172308: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172308u;
    {
        const bool branch_taken_0x172308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172308) {
            ctx->pc = 0x172350u;
            goto label_172350;
        }
    }
    ctx->pc = 0x172310u;
    // 0x172310: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x172310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x172314: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x172314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x172318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172318u;
    {
        const bool branch_taken_0x172318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172318) {
            ctx->pc = 0x172330u;
            goto label_172330;
        }
    }
    ctx->pc = 0x172320u;
    // 0x172320: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x172320u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172324: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x172328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172328u;
    {
        const bool branch_taken_0x172328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172328u;
        // 0x17232c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172328) {
            ctx->pc = 0x172350u;
            goto label_172350;
        }
    }
    ctx->pc = 0x172330u;
label_172330:
    // 0x172330: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x172330u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172334: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x172334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x172338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172338u;
    {
        const bool branch_taken_0x172338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172338u;
        // 0x17233c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172338) {
            ctx->pc = 0x172350u;
            goto label_172350;
        }
    }
    ctx->pc = 0x172340u;
label_172340:
    // 0x172340: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x172340u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172344: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x172344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x172348: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x172348u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17234c: 0x0  nop
    ctx->pc = 0x17234cu;
    // NOP
label_172350:
    // 0x172350: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x172354: 0xa05100c8  sb          $s1, 0xC8($v0)
    ctx->pc = 0x172354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 17));
label_172358:
    // 0x172358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17235c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17235cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x172360: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x172360u;
    {
        const bool branch_taken_0x172360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172360) {
            ctx->pc = 0x172250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172250;
        }
    }
    ctx->pc = 0x172368u;
    // 0x172368: 0x3c1e009c  lui         $fp, 0x9C
    ctx->pc = 0x172368u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)156 << 16));
    // 0x17236c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17236cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172370: 0x27dedb50  addiu       $fp, $fp, -0x24B0
    ctx->pc = 0x172370u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957904));
    // 0x172374: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x172374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_172378:
    // 0x172378: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17237c: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x17237cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x172380: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x172380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172384: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x172384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172388: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x172388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17238c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x17238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x172390: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x172390u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x172394: 0x0  nop
    ctx->pc = 0x172394u;
    // NOP
label_172398:
    // 0x172398: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x172398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x17239c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x17239Cu;
    {
        const bool branch_taken_0x17239c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17239c) {
            ctx->pc = 0x1724C0u;
            goto label_1724c0;
        }
    }
    ctx->pc = 0x1723A4u;
    // 0x1723a4: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x1723a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x1723a8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x1723a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x1723ac: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1723ACu;
    SET_GPR_U32(ctx, 31, 0x1723B4u);
    ctx->pc = 0x1723B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723ACu;
    // 0x1723b0: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x1723ACu, 0x1723B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723B4u;
label_1723b4:
    // 0x1723b4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1723b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1723b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1723bc: 0x249000c8  addiu       $s0, $a0, 0xC8
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1723c0: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x1723c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723c4: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1723C4u;
    {
        const bool branch_taken_0x1723c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1723c4) {
            ctx->pc = 0x1724C0u;
            goto label_1724c0;
        }
    }
    ctx->pc = 0x1723CCu;
    // 0x1723cc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1723ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1723d0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1723d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1723d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1723d8: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x1723dc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1723dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1723e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1723e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1723e8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1723ec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1723ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1723f0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1723f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1723f4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1723F4u;
    {
        const bool branch_taken_0x1723f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1723f4) {
            ctx->pc = 0x1724C0u;
            goto label_1724c0;
        }
    }
    ctx->pc = 0x1723FCu;
    // 0x1723fc: 0xc062810  jal         func_18A040
    ctx->pc = 0x1723FCu;
    SET_GPR_U32(ctx, 31, 0x172404u);
    ctx->pc = 0x172400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723FCu;
    // 0x172400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x1723FCu, 0x172404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172404u;
label_172404:
    // 0x172404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x172404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172408: 0xc062784  jal         func_189E10
    ctx->pc = 0x172408u;
    SET_GPR_U32(ctx, 31, 0x172410u);
    ctx->pc = 0x17240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172408u;
    // 0x17240c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E10u, 0x172408u, 0x172410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172410u;
label_172410:
    // 0x172410: 0xc062810  jal         func_18A040
    ctx->pc = 0x172410u;
    SET_GPR_U32(ctx, 31, 0x172418u);
    ctx->pc = 0x172414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172410u;
    // 0x172414: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x172410u, 0x172418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172418u;
label_172418:
    // 0x172418: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x172418u;
    {
        const bool branch_taken_0x172418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x172418) {
            ctx->pc = 0x1724A8u;
            goto label_1724a8;
        }
    }
    ctx->pc = 0x172420u;
    // 0x172420: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x172420u;
    {
        const bool branch_taken_0x172420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172420) {
            ctx->pc = 0x1724A8u;
            goto label_1724a8;
        }
    }
    ctx->pc = 0x172428u;
    // 0x172428: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x172428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17242c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x17242cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172430: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x172430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x172434: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172434u;
    {
        const bool branch_taken_0x172434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172434) {
            ctx->pc = 0x172448u;
            goto label_172448;
        }
    }
    ctx->pc = 0x17243Cu;
    // 0x17243c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x17243cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172440: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x172440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x172444: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x172444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_172448:
    // 0x172448: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17244c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172450: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x172450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172454: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172454u;
    {
        const bool branch_taken_0x172454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172454) {
            ctx->pc = 0x172468u;
            goto label_172468;
        }
    }
    ctx->pc = 0x17245Cu;
    // 0x17245c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x17245cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172460: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x172460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x172464: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x172464u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_172468:
    // 0x172468: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x172468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17246c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x17246cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x172470: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172470u;
    {
        const bool branch_taken_0x172470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172470) {
            ctx->pc = 0x1724B8u;
            goto label_1724b8;
        }
    }
    ctx->pc = 0x172478u;
    // 0x172478: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x172478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x17247c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x172480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172480u;
    {
        const bool branch_taken_0x172480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172480) {
            ctx->pc = 0x172498u;
            goto label_172498;
        }
    }
    ctx->pc = 0x172488u;
    // 0x172488: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x172488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17248c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x17248cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x172490: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172490u;
    {
        const bool branch_taken_0x172490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172490u;
        // 0x172494: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172490) {
            ctx->pc = 0x1724B8u;
            goto label_1724b8;
        }
    }
    ctx->pc = 0x172498u;
label_172498:
    // 0x172498: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x172498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17249c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1724a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1724A0u;
    {
        const bool branch_taken_0x1724a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724A0u;
        // 0x1724a4: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724a0) {
            ctx->pc = 0x1724B8u;
            goto label_1724b8;
        }
    }
    ctx->pc = 0x1724A8u;
label_1724a8:
    // 0x1724a8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1724a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1724ac: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x1724acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x1724b0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1724b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1724b4: 0x0  nop
    ctx->pc = 0x1724b4u;
    // NOP
label_1724b8:
    // 0x1724b8: 0xa2130000  sb          $s3, 0x0($s0)
    ctx->pc = 0x1724b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1724bc: 0x0  nop
    ctx->pc = 0x1724bcu;
    // NOP
label_1724c0:
    // 0x1724c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1724c4: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1724c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1724c8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1724cc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1724CCu;
    {
        const bool branch_taken_0x1724cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724CCu;
        // 0x1724d0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724cc) {
            ctx->pc = 0x172398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172398;
        }
    }
    ctx->pc = 0x1724D4u;
    // 0x1724d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1724d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1724d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1724d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1724dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1724dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1724e0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1724e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1724e4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1724e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1724e8: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1724E8u;
    {
        const bool branch_taken_0x1724e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1724ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724E8u;
        // 0x1724ec: 0x27de0248  addiu       $fp, $fp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724e8) {
            ctx->pc = 0x172378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172378;
        }
    }
    ctx->pc = 0x1724F0u;
    // 0x1724f0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1724f4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1724f8: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x1724fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1724fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x172500: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x172500u;
    {
        const bool branch_taken_0x172500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172500) {
            ctx->pc = 0x172504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172500u;
            // 0x172504: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1725CCu;
            goto label_1725cc;
        }
    }
    ctx->pc = 0x172508u;
    // 0x172508: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x17250c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17250cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172510: 0x24a548c0  addiu       $a1, $a1, 0x48C0
    ctx->pc = 0x172510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
    // 0x172514: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_172518:
    // 0x172518: 0x94a20222  lhu         $v0, 0x222($a1)
    ctx->pc = 0x172518u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
    // 0x17251c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172520: 0xa4a20222  sh          $v0, 0x222($a1)
    ctx->pc = 0x172520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x172524: 0x94a40222  lhu         $a0, 0x222($a1)
    ctx->pc = 0x172524u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
    // 0x172528: 0x94a20220  lhu         $v0, 0x220($a1)
    ctx->pc = 0x172528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x17252c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17252cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x172530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172530u;
    {
        const bool branch_taken_0x172530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172530) {
            ctx->pc = 0x172540u;
            goto label_172540;
        }
    }
    ctx->pc = 0x172538u;
    // 0x172538: 0xa4a00222  sh          $zero, 0x222($a1)
    ctx->pc = 0x172538u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x17253c: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x17253cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
label_172540:
    // 0x172540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x172540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x172544: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x172544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x172548: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x172548u;
    {
        const bool branch_taken_0x172548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172548u;
        // 0x17254c: 0x24a5022e  addiu       $a1, $a1, 0x22E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 558));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172548) {
            ctx->pc = 0x172518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172518;
        }
    }
    ctx->pc = 0x172550u;
    // 0x172550: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x172554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172558: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x172558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x17255c: 0x263148c0  addiu       $s1, $s1, 0x48C0
    ctx->pc = 0x17255cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18624));
label_172560:
    // 0x172560: 0xc05c9d0  jal         func_172740
    ctx->pc = 0x172560u;
    SET_GPR_U32(ctx, 31, 0x172568u);
    ctx->pc = 0x172564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172560u;
    // 0x172564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172740u, 0x172560u, 0x172568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172568u;
label_172568:
    // 0x172568: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x172568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17256c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172570: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172570u;
    {
        const bool branch_taken_0x172570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172570) {
            ctx->pc = 0x172588u;
            goto label_172588;
        }
    }
    ctx->pc = 0x172578u;
    // 0x172578: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x172578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17257c: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x17257cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x172580: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x172580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x172584: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x172584u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_172588:
    // 0x172588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17258c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x17258cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x172590: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x172594: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x172594u;
    {
        const bool branch_taken_0x172594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172594u;
        // 0x172598: 0x2631022e  addiu       $s1, $s1, 0x22E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 558));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172594) {
            ctx->pc = 0x172560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172560;
        }
    }
    ctx->pc = 0x17259Cu;
    // 0x17259c: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x17259cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x1725a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1725a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725a4: 0x263148c0  addiu       $s1, $s1, 0x48C0
    ctx->pc = 0x1725a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18624));
label_1725a8:
    // 0x1725a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1725a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725ac: 0xc05ca84  jal         func_172A10
    ctx->pc = 0x1725ACu;
    SET_GPR_U32(ctx, 31, 0x1725B4u);
    ctx->pc = 0x1725B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725ACu;
    // 0x1725b0: 0xa620022c  sh          $zero, 0x22C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172A10u, 0x1725ACu, 0x1725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725B4u;
label_1725b4:
    // 0x1725b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1725b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1725b8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1725b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1725bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1725BCu;
    {
        const bool branch_taken_0x1725bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1725C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725BCu;
        // 0x1725c0: 0x2631022e  addiu       $s1, $s1, 0x22E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 558));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725bc) {
            ctx->pc = 0x1725A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1725a8;
        }
    }
    ctx->pc = 0x1725C4u;
    // 0x1725c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1725C4u;
    {
        const bool branch_taken_0x1725c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725c4) {
            ctx->pc = 0x172680u;
            goto label_172680;
        }
    }
    ctx->pc = 0x1725CCu;
label_1725cc:
    // 0x1725cc: 0x3c13009b  lui         $s3, 0x9B
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)155 << 16));
    // 0x1725d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1725d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725d4: 0x267348c0  addiu       $s3, $s3, 0x48C0
    ctx->pc = 0x1725d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18624));
    // 0x1725d8: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x1725d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1725dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1725dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1725e0:
    // 0x1725e0: 0x96620222  lhu         $v0, 0x222($s3)
    ctx->pc = 0x1725e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 546)));
    // 0x1725e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1725e8: 0xa6620222  sh          $v0, 0x222($s3)
    ctx->pc = 0x1725e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x1725ec: 0x96630222  lhu         $v1, 0x222($s3)
    ctx->pc = 0x1725ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 546)));
    // 0x1725f0: 0x96620220  lhu         $v0, 0x220($s3)
    ctx->pc = 0x1725f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x1725f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1725f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1725f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1725F8u;
    {
        const bool branch_taken_0x1725f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1725f8) {
            ctx->pc = 0x172610u;
            goto label_172610;
        }
    }
    ctx->pc = 0x172600u;
    // 0x172600: 0xa6600222  sh          $zero, 0x222($s3)
    ctx->pc = 0x172600u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x172604: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x172604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172608: 0xa6620220  sh          $v0, 0x220($s3)
    ctx->pc = 0x172608u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x17260c: 0x0  nop
    ctx->pc = 0x17260cu;
    // NOP
label_172610:
    // 0x172610: 0xc05c9d0  jal         func_172740
    ctx->pc = 0x172610u;
    SET_GPR_U32(ctx, 31, 0x172618u);
    ctx->pc = 0x172614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172610u;
    // 0x172614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172740u, 0x172610u, 0x172618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172618u;
label_172618:
    // 0x172618: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x172618u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17261c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172620: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172620u;
    {
        const bool branch_taken_0x172620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x172620) {
            ctx->pc = 0x172638u;
            goto label_172638;
        }
    }
    ctx->pc = 0x172628u;
    // 0x172628: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x172628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17262c: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x17262cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x172630: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x172630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x172634: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x172634u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_172638:
    // 0x172638: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x172638u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17263c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172640: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x172640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x172644: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x172644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x172648: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x172648u;
    {
        const bool branch_taken_0x172648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172648u;
        // 0x17264c: 0xa660022c  sh          $zero, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172648) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x172650u;
    // 0x172650: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x172650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x172654: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172654u;
    {
        const bool branch_taken_0x172654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172654) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x17265Cu;
    // 0x17265c: 0xc05ca84  jal         func_172A10
    ctx->pc = 0x17265Cu;
    SET_GPR_U32(ctx, 31, 0x172664u);
    ctx->pc = 0x172660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17265Cu;
    // 0x172660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172A10u, 0x17265Cu, 0x172664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172664u;
label_172664:
    // 0x172664: 0x0  nop
    ctx->pc = 0x172664u;
    // NOP
label_172668:
    // 0x172668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17266c: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x17266cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x172670: 0x2673022e  addiu       $s3, $s3, 0x22E
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 558));
    // 0x172674: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x172674u;
    {
        const bool branch_taken_0x172674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172674u;
        // 0x172678: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172674) {
            ctx->pc = 0x1725E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1725e0;
        }
    }
    ctx->pc = 0x17267Cu;
    // 0x17267c: 0x0  nop
    ctx->pc = 0x17267cu;
    // NOP
label_172680:
    // 0x172680: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x172680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172684: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x172684u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172688: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x172688u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17268c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17268cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172690: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x172690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172694: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x172694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17269c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17269cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1726a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1726a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1726a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1726a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1726a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1726A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726A8u;
        // 0x1726ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1726B0u;
}
