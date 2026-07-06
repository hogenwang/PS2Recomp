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

// Function: sub_001408F0
// Address: 0x1408f0 - 0x140c00
void sub_001408F0_0x1408f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001408F0_0x1408f0");
#endif

    switch (ctx->pc) {
        case 0x140920u: goto label_140920;
        case 0x1409b4u: goto label_1409b4;
        case 0x140a00u: goto label_140a00;
        case 0x140a14u: goto label_140a14;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a44u: goto label_140a44;
        case 0x140a5cu: goto label_140a5c;
        case 0x140ad8u: goto label_140ad8;
        case 0x140af0u: goto label_140af0;
        case 0x140b4cu: goto label_140b4c;
        case 0x140be8u: goto label_140be8;
        default: break;
    }

    ctx->pc = 0x1408f0u;

    // 0x1408f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1408f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1408f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1408f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1408f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1408fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1408fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140900: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x140900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14090c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x140910: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x140910u;
    {
        const bool branch_taken_0x140910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140910u;
        // 0x140914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140910) {
            ctx->pc = 0x140A78u;
            goto label_140a78;
        }
    }
    ctx->pc = 0x140918u;
    // 0x140918: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x140918u;
    SET_GPR_U32(ctx, 31, 0x140920u);
    ctx->pc = 0x14091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140918u;
    // 0x14091c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x140918u, 0x140920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140920u;
label_140920:
    // 0x140920: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140920u;
    {
        const bool branch_taken_0x140920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x140924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140920u;
        // 0x140924: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140920) {
            ctx->pc = 0x140948u;
            goto label_140948;
        }
    }
    ctx->pc = 0x140928u;
    // 0x140928: 0x8e64023c  lw          $a0, 0x23C($s3)
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x14092c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x140930: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x140930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x140934: 0xae63023c  sw          $v1, 0x23C($s3)
    ctx->pc = 0x140934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 3));
    // 0x140938: 0xa660024c  sh          $zero, 0x24C($s3)
    ctx->pc = 0x140938u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x14093c: 0xa6600248  sh          $zero, 0x248($s3)
    ctx->pc = 0x14093cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x140940: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x140940u;
    {
        const bool branch_taken_0x140940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140940u;
        // 0x140944: 0xa660024a  sh          $zero, 0x24A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 586), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140940) {
            ctx->pc = 0x140A5Cu;
            goto label_140a5c;
        }
    }
    ctx->pc = 0x140948u;
label_140948:
    // 0x140948: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x140948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14094c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x140950: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x140950u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x140954: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x140958: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x140958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x14095c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x140960: 0x8810  mfhi        $s1
    ctx->pc = 0x140960u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x140964: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x140964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x140968: 0x1010  mfhi        $v0
    ctx->pc = 0x140968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14096c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x140970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140974: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x140974u;
    {
        const bool branch_taken_0x140974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140974) {
            ctx->pc = 0x140978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140974u;
            // 0x140978: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140980u;
            goto label_140980;
        }
    }
    ctx->pc = 0x14097Cu;
    // 0x14097c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_140980:
    // 0x140980: 0x8e63023c  lw          $v1, 0x23C($s3)
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x140984: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x140988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x140988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14098c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140998: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14099c: 0xae62023c  sw          $v0, 0x23C($s3)
    ctx->pc = 0x14099cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 2));
    // 0x1409a0: 0xa660024c  sh          $zero, 0x24C($s3)
    ctx->pc = 0x1409a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x1409a4: 0x86620228  lh          $v0, 0x228($s3)
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x1409a8: 0xa662022a  sh          $v0, 0x22A($s3)
    ctx->pc = 0x1409a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x1409ac: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1409ACu;
    SET_GPR_U32(ctx, 31, 0x1409B4u);
    ctx->pc = 0x1409B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409ACu;
    // 0x1409b0: 0xa6600228  sh          $zero, 0x228($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 552), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1409ACu, 0x1409B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409B4u;
label_1409b4:
    // 0x1409b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1409b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1409b8: 0x52230024  beql        $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1409B8u;
            // 0x1409bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A4Cu;
            goto label_140a4c;
        }
    }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1409c4: 0x5223001b  beql        $s1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1409C4u;
    {
        const bool branch_taken_0x1409c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1409c4) {
            ctx->pc = 0x1409C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1409C4u;
            // 0x1409c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A34u;
            goto label_140a34;
        }
    }
    ctx->pc = 0x1409CCu;
    // 0x1409cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1409d0: 0x52230012  beql        $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1409D0u;
    {
        const bool branch_taken_0x1409d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1409d0) {
            ctx->pc = 0x1409D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1409D0u;
            // 0x1409d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A1Cu;
            goto label_140a1c;
        }
    }
    ctx->pc = 0x1409D8u;
    // 0x1409d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409dc: 0x5227000a  beql        $s1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1409DCu;
    {
        const bool branch_taken_0x1409dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x1409dc) {
            ctx->pc = 0x1409E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1409DCu;
            // 0x1409e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A08u;
            goto label_140a08;
        }
    }
    ctx->pc = 0x1409E4u;
    // 0x1409e4: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1409E4u;
    {
        const bool branch_taken_0x1409e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409e4) {
            ctx->pc = 0x1409E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1409E4u;
            // 0x1409e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1409F4u;
            goto label_1409f4;
        }
    }
    ctx->pc = 0x1409ECu;
    // 0x1409ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1409ECu;
    {
        const bool branch_taken_0x1409ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409ECu;
        // 0x1409f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409ec) {
            ctx->pc = 0x140A60u;
            goto label_140a60;
        }
    }
    ctx->pc = 0x1409F4u;
label_1409f4:
    // 0x1409f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1409f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409f8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1409F8u;
    SET_GPR_U32(ctx, 31, 0x140A00u);
    ctx->pc = 0x1409FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409F8u;
    // 0x1409fc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1409F8u, 0x140A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A00u;
label_140a00:
    // 0x140a00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x140A00u;
    {
        const bool branch_taken_0x140a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a00) {
            ctx->pc = 0x140A5Cu;
            goto label_140a5c;
        }
    }
    ctx->pc = 0x140A08u;
label_140a08:
    // 0x140a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a0c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140A0Cu;
    SET_GPR_U32(ctx, 31, 0x140A14u);
    ctx->pc = 0x140A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A0Cu;
    // 0x140a10: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140A0Cu, 0x140A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A14u;
label_140a14:
    // 0x140a14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x140A14u;
    {
        const bool branch_taken_0x140a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a14) {
            ctx->pc = 0x140A5Cu;
            goto label_140a5c;
        }
    }
    ctx->pc = 0x140A1Cu;
label_140a1c:
    // 0x140a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a20: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x140a24: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140A24u;
    SET_GPR_U32(ctx, 31, 0x140A2Cu);
    ctx->pc = 0x140A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A24u;
    // 0x140a28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140A24u, 0x140A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A2Cu;
label_140a2c:
    // 0x140a2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x140A2Cu;
    {
        const bool branch_taken_0x140a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a2c) {
            ctx->pc = 0x140A5Cu;
            goto label_140a5c;
        }
    }
    ctx->pc = 0x140A34u;
label_140a34:
    // 0x140a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a38: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x140a3c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140A3Cu;
    SET_GPR_U32(ctx, 31, 0x140A44u);
    ctx->pc = 0x140A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A3Cu;
    // 0x140a40: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140A3Cu, 0x140A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A44u;
label_140a44:
    // 0x140a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140A44u;
    {
        const bool branch_taken_0x140a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a44) {
            ctx->pc = 0x140A5Cu;
            goto label_140a5c;
        }
    }
    ctx->pc = 0x140A4Cu;
label_140a4c:
    // 0x140a4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a50: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x140a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x140a54: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140A54u;
    SET_GPR_U32(ctx, 31, 0x140A5Cu);
    ctx->pc = 0x140A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A54u;
    // 0x140a58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140A54u, 0x140A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A5Cu;
label_140a5c:
    // 0x140a5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140a60:
    // 0x140a60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a64: 0xa664020c  sh          $a0, 0x20C($s3)
    ctx->pc = 0x140a64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 524), (uint16_t)GPR_U32(ctx, 4));
    // 0x140a68: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x140a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x140a6c: 0xae600214  sw          $zero, 0x214($s3)
    ctx->pc = 0x140a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
    // 0x140a70: 0xae600238  sw          $zero, 0x238($s3)
    ctx->pc = 0x140a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 0));
    // 0x140a74: 0xae630238  sw          $v1, 0x238($s3)
    ctx->pc = 0x140a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 3));
label_140a78:
    // 0x140a78: 0x8e630220  lw          $v1, 0x220($s3)
    ctx->pc = 0x140a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x140a7c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x140A7Cu;
    {
        const bool branch_taken_0x140a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a7c) {
            ctx->pc = 0x140A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140A7Cu;
            // 0x140a80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A90u;
            goto label_140a90;
        }
    }
    ctx->pc = 0x140A84u;
    // 0x140a84: 0xae600238  sw          $zero, 0x238($s3)
    ctx->pc = 0x140a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 0));
    // 0x140a88: 0xae600220  sw          $zero, 0x220($s3)
    ctx->pc = 0x140a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 0));
    // 0x140a8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x140a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_140a90:
    // 0x140a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x140AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AA0u;
        // 0x140aa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140AA8u;
    // 0x140aa8: 0x0  nop
    ctx->pc = 0x140aa8u;
    // NOP
    // 0x140aac: 0x0  nop
    ctx->pc = 0x140aacu;
    // NOP
    // 0x140ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ac8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x140acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ad0: 0xc050544  jal         func_141510
    ctx->pc = 0x140AD0u;
    SET_GPR_U32(ctx, 31, 0x140AD8u);
    ctx->pc = 0x140AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140AD0u;
    // 0x140ad4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141510u, 0x140AD0u, 0x140AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AD8u;
label_140ad8:
    // 0x140ad8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x140AD8u;
    {
        const bool branch_taken_0x140ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140ad8) {
            ctx->pc = 0x140ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AD8u;
            // 0x140adc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140AF4u;
            goto label_140af4;
        }
    }
    ctx->pc = 0x140AE0u;
    // 0x140ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ae8: 0xc0503d4  jal         func_140F50
    ctx->pc = 0x140AE8u;
    SET_GPR_U32(ctx, 31, 0x140AF0u);
    ctx->pc = 0x140AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140AE8u;
    // 0x140aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F50u, 0x140AE8u, 0x140AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AF0u;
label_140af0:
    // 0x140af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_140af4:
    // 0x140af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140afc: 0x3e00008  jr          $ra
    ctx->pc = 0x140AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AFCu;
        // 0x140b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140B04u;
    // 0x140b04: 0x0  nop
    ctx->pc = 0x140b04u;
    // NOP
    // 0x140b08: 0x0  nop
    ctx->pc = 0x140b08u;
    // NOP
    // 0x140b0c: 0x0  nop
    ctx->pc = 0x140b0cu;
    // NOP
    // 0x140b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b24: 0x8ca30220  lw          $v1, 0x220($a1)
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x140b28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B28u;
    {
        const bool branch_taken_0x140b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B28u;
        // 0x140b2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b28) {
            ctx->pc = 0x140B38u;
            goto label_140b38;
        }
    }
    ctx->pc = 0x140B30u;
    // 0x140b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140b34: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x140b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
label_140b38:
    // 0x140b38: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x140b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x140b3c: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x140B3Cu;
    {
        const bool branch_taken_0x140b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b3c) {
            ctx->pc = 0x140B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B3Cu;
            // 0x140b40: 0x8603020c  lh          $v1, 0x20C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BD0u;
            goto label_140bd0;
        }
    }
    ctx->pc = 0x140B44u;
    // 0x140b44: 0xc04f910  jal         func_13E440
    ctx->pc = 0x140B44u;
    SET_GPR_U32(ctx, 31, 0x140B4Cu);
    ctx->pc = 0x140B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B44u;
    // 0x140b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E440u, 0x140B44u, 0x140B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B4Cu;
label_140b4c:
    // 0x140b4c: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x140b50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x140b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x140b54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140b58: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x140B58u;
    {
        const bool branch_taken_0x140b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b58) {
            ctx->pc = 0x140B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B58u;
            // 0x140b5c: 0xa602020c  sh          $v0, 0x20C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BB8u;
            goto label_140bb8;
        }
    }
    ctx->pc = 0x140B60u;
    // 0x140b60: 0x8604022a  lh          $a0, 0x22A($s0)
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x140b64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x140b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x140b68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140b68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x140b6c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x140b70: 0xa604020c  sh          $a0, 0x20C($s0)
    ctx->pc = 0x140b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 4));
    // 0x140b74: 0x8604022a  lh          $a0, 0x22A($s0)
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x140b78: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x140b7c: 0xa603022a  sh          $v1, 0x22A($s0)
    ctx->pc = 0x140b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x140b80: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x140b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x140b84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140b84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x140b88: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B88u;
    {
        const bool branch_taken_0x140b88 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x140b88) {
            ctx->pc = 0x140B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B88u;
            // 0x140b8c: 0x8603022a  lh          $v1, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140B98u;
            goto label_140b98;
        }
    }
    ctx->pc = 0x140B90u;
    // 0x140b90: 0xa600022a  sh          $zero, 0x22A($s0)
    ctx->pc = 0x140b90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x140b94: 0x8603022a  lh          $v1, 0x22A($s0)
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_140b98:
    // 0x140b98: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B98u;
    {
        const bool branch_taken_0x140b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b98) {
            ctx->pc = 0x140B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B98u;
            // 0x140b9c: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BA8u;
            goto label_140ba8;
        }
    }
    ctx->pc = 0x140BA0u;
    // 0x140ba0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140BA0u;
    {
        const bool branch_taken_0x140ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BA0u;
        // 0x140ba4: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ba0) {
            ctx->pc = 0x140BBCu;
            goto label_140bbc;
        }
    }
    ctx->pc = 0x140BA8u;
label_140ba8:
    // 0x140ba8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x140bac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140bb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140BB0u;
    {
        const bool branch_taken_0x140bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BB0u;
        // 0x140bb4: 0xae030238  sw          $v1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bb0) {
            ctx->pc = 0x140BBCu;
            goto label_140bbc;
        }
    }
    ctx->pc = 0x140BB8u;
label_140bb8:
    // 0x140bb8: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x140bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
label_140bbc:
    // 0x140bbc: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x140bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x140bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140bc4: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x140bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x140bc8: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x140bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x140bcc: 0x8603020c  lh          $v1, 0x20C($s0)
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 524)));
label_140bd0:
    // 0x140bd0: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140BD0u;
    {
        const bool branch_taken_0x140bd0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x140bd0) {
            ctx->pc = 0x140BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140BD0u;
            // 0x140bd4: 0xa600020c  sh          $zero, 0x20C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BE8u;
            goto label_140be8;
        }
    }
    ctx->pc = 0x140BD8u;
    // 0x140bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140be0: 0xc0503d4  jal         func_140F50
    ctx->pc = 0x140BE0u;
    SET_GPR_U32(ctx, 31, 0x140BE8u);
    ctx->pc = 0x140BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BE0u;
    // 0x140be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F50u, 0x140BE0u, 0x140BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BE8u;
label_140be8:
    // 0x140be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x140BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BF4u;
        // 0x140bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140BFCu;
    // 0x140bfc: 0x0  nop
    ctx->pc = 0x140bfcu;
    // NOP
    if (ctx->pc == 0x140bfcu) { ctx->pc = 0x140c00u; }
}
