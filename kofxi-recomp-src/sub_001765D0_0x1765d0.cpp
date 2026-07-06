#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001765D0
// Address: 0x1765d0 - 0x1768a0
void sub_001765D0_0x1765d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001765D0_0x1765d0");
#endif

    switch (ctx->pc) {
        case 0x176640u: goto label_176640;
        case 0x176690u: goto label_176690;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766f0u: goto label_1766f0;
        case 0x17671cu: goto label_17671c;
        case 0x17672cu: goto label_17672c;
        case 0x17674cu: goto label_17674c;
        case 0x176760u: goto label_176760;
        case 0x176784u: goto label_176784;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767e8u: goto label_1767e8;
        case 0x176850u: goto label_176850;
        case 0x176880u: goto label_176880;
        default: break;
    }

    ctx->pc = 0x1765d0u;

    // 0x1765d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1765d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1765d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1765d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1765d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1765dc: 0x8c68af68  lw          $t0, -0x5098($v1)
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946664)));
    // 0x1765e0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1765e4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1765E4u;
    {
        const bool branch_taken_0x1765e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1765E4u;
            // 0x1765e8: 0x25040014  addiu       $a0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765e4) {
            ctx->pc = 0x176684u;
            goto label_176684;
        }
    }
    ctx->pc = 0x1765ECu;
    // 0x1765ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1765ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1765f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1765f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1765f4: 0xa043b578  sb          $v1, -0x4A88($v0)
    ctx->pc = 0x1765f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948216), (uint8_t)GPR_U32(ctx, 3));
    // 0x1765f8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1765fc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176600: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176604: 0x8c47ae00  lw          $a3, -0x5200($v0)
    ctx->pc = 0x176604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946304)));
    // 0x176608: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17660c: 0x24a5d6c8  addiu       $a1, $a1, -0x2938
    ctx->pc = 0x17660cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956744));
    // 0x176610: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x176614: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x176614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x176618: 0xac68d510  sw          $t0, -0x2AF0($v1)
    ctx->pc = 0x176618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956304), GPR_U32(ctx, 8));
    // 0x17661c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176620: 0x7187c  dsll32      $v1, $a3, 1
    ctx->pc = 0x176620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 1));
    // 0x176624: 0x2484adf0  addiu       $a0, $a0, -0x5210
    ctx->pc = 0x176624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946288));
    // 0x176628: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x176628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x17662c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x176630: 0xac43ae00  sw          $v1, -0x5200($v0)
    ctx->pc = 0x176630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946304), GPR_U32(ctx, 3));
    // 0x176634: 0x2407063c  addiu       $a3, $zero, 0x63C
    ctx->pc = 0x176634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1596));
    // 0x176638: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x176638u;
    SET_GPR_U32(ctx, 31, 0x176640u);
    ctx->pc = 0x17663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176638u;
            // 0x17663c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176640u; }
        if (ctx->pc != 0x176640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176640u; }
        if (ctx->pc != 0x176640u) { return; }
    }
    ctx->pc = 0x176640u;
label_176640:
    // 0x176640: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x176640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x176644: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176648: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x176648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17664c: 0x2406017c  addiu       $a2, $zero, 0x17C
    ctx->pc = 0x17664cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x176650: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x176650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x176654: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x176654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176658: 0xac82a344  sw          $v0, -0x5CBC($a0)
    ctx->pc = 0x176658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943556), GPR_U32(ctx, 2));
    // 0x17665c: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x17665cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x176660: 0xa5060002  sh          $a2, 0x2($t0)
    ctx->pc = 0x176660u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x176664: 0x9064f35f  lbu         $a0, -0xCA1($v1)
    ctx->pc = 0x176664u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x176668: 0x50850006  beql        $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176668u;
    {
        const bool branch_taken_0x176668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x176668) {
            ctx->pc = 0x17666Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176668u;
            // 0x17666c: 0xa5050026  sh          $a1, 0x26($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 38), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176684u;
            goto label_176684;
        }
    }
    ctx->pc = 0x176670u;
    // 0x176670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176674: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176674u;
    {
        const bool branch_taken_0x176674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176674) {
            ctx->pc = 0x176678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176674u;
            // 0x176678: 0xa5000026  sh          $zero, 0x26($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 38), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176684u;
            goto label_176684;
        }
    }
    ctx->pc = 0x17667Cu;
    // 0x17667c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17667Cu;
    {
        const bool branch_taken_0x17667c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17667c) {
            ctx->pc = 0x176680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17667Cu;
            // 0x176680: 0xa5030026  sh          $v1, 0x26($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 38), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176684u;
            goto label_176684;
        }
    }
    ctx->pc = 0x176684u;
label_176684:
    // 0x176684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176688: 0x3e00008  jr          $ra
    ctx->pc = 0x176688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176688u;
            // 0x17668c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176690u;
label_176690:
    // 0x176690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176694: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17669c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1766a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1766a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1766a4: 0x8042b578  lb          $v0, -0x4A88($v0)
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948216)));
    // 0x1766a8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1766ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1766ACu;
    {
        const bool branch_taken_0x1766ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1766B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1766ACu;
            // 0x1766b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766ac) {
            ctx->pc = 0x1766E8u;
            goto label_1766e8;
        }
    }
    ctx->pc = 0x1766B4u;
    // 0x1766b4: 0xc05e158  jal         func_178560
    ctx->pc = 0x1766B4u;
    SET_GPR_U32(ctx, 31, 0x1766BCu);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766BCu; }
        if (ctx->pc != 0x1766BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766BCu; }
        if (ctx->pc != 0x1766BCu) { return; }
    }
    ctx->pc = 0x1766BCu;
label_1766bc:
    // 0x1766bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1766BCu;
    {
        const bool branch_taken_0x1766bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1766bc) {
            ctx->pc = 0x1766E8u;
            goto label_1766e8;
        }
    }
    ctx->pc = 0x1766C4u;
    // 0x1766c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1766c8: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1766cc: 0xa60600b4  sh          $a2, 0xB4($s0)
    ctx->pc = 0x1766ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 180), (uint16_t)GPR_U32(ctx, 6));
    // 0x1766d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1766d4: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1766d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1766d8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1766d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1766dc: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x1766dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
    // 0x1766e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1766e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1766e4: 0xa066b578  sb          $a2, -0x4A88($v1)
    ctx->pc = 0x1766e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 6));
label_1766e8:
    // 0x1766e8: 0xc05dc34  jal         func_1770D0
    ctx->pc = 0x1766E8u;
    SET_GPR_U32(ctx, 31, 0x1766F0u);
    ctx->pc = 0x1770D0u;
    if (runtime->hasFunction(0x1770D0u)) {
        auto targetFn = runtime->lookupFunction(0x1770D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766F0u; }
        if (ctx->pc != 0x1766F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001770D0_0x1770d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766F0u; }
        if (ctx->pc != 0x1766F0u) { return; }
    }
    ctx->pc = 0x1766F0u;
label_1766f0:
    // 0x1766f0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1766f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1766f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1766f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1766f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1766F8u;
    {
        const bool branch_taken_0x1766f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1766f8) {
            ctx->pc = 0x1766FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1766F8u;
            // 0x1766fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176724u;
            goto label_176724;
        }
    }
    ctx->pc = 0x176700u;
    // 0x176700: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176708: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17670c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176710: 0xa065a220  sb          $a1, -0x5DE0($v1)
    ctx->pc = 0x176710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943264), (uint8_t)GPR_U32(ctx, 5));
    // 0x176714: 0xc055728  jal         func_155CA0
    ctx->pc = 0x176714u;
    SET_GPR_U32(ctx, 31, 0x17671Cu);
    ctx->pc = 0x176718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176714u;
            // 0x176718: 0xac40a240  sw          $zero, -0x5DC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17671Cu; }
        if (ctx->pc != 0x17671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17671Cu; }
        if (ctx->pc != 0x17671Cu) { return; }
    }
    ctx->pc = 0x17671Cu;
label_17671c:
    // 0x17671c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17671Cu;
    {
        const bool branch_taken_0x17671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17671c) {
            ctx->pc = 0x17672Cu;
            goto label_17672c;
        }
    }
    ctx->pc = 0x176724u;
label_176724:
    // 0x176724: 0xc05e994  jal         func_17A650
    ctx->pc = 0x176724u;
    SET_GPR_U32(ctx, 31, 0x17672Cu);
    ctx->pc = 0x17A650u;
    if (runtime->hasFunction(0x17A650u)) {
        auto targetFn = runtime->lookupFunction(0x17A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17672Cu; }
        if (ctx->pc != 0x17672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A650_0x17a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17672Cu; }
        if (ctx->pc != 0x17672Cu) { return; }
    }
    ctx->pc = 0x17672Cu;
label_17672c:
    // 0x17672c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17672cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176730: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x176730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x176734: 0x8c63ae00  lw          $v1, -0x5200($v1)
    ctx->pc = 0x176734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946304)));
    // 0x176738: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x176738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17673c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17673Cu;
    {
        const bool branch_taken_0x17673c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17673c) {
            ctx->pc = 0x176740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17673Cu;
            // 0x176740: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176750u;
            goto label_176750;
        }
    }
    ctx->pc = 0x176744u;
    // 0x176744: 0xc05e964  jal         func_17A590
    ctx->pc = 0x176744u;
    SET_GPR_U32(ctx, 31, 0x17674Cu);
    ctx->pc = 0x17A590u;
    if (runtime->hasFunction(0x17A590u)) {
        auto targetFn = runtime->lookupFunction(0x17A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17674Cu; }
        if (ctx->pc != 0x17674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A590_0x17a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17674Cu; }
        if (ctx->pc != 0x17674Cu) { return; }
    }
    ctx->pc = 0x17674Cu;
label_17674c:
    // 0x17674c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176750:
    // 0x176750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176758: 0x3e00008  jr          $ra
    ctx->pc = 0x176758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176758u;
            // 0x17675c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176760u;
label_176760:
    // 0x176760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17676c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176770: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176778: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17677c: 0xc05e994  jal         func_17A650
    ctx->pc = 0x17677Cu;
    SET_GPR_U32(ctx, 31, 0x176784u);
    ctx->pc = 0x176780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17677Cu;
            // 0x176780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A650u;
    if (runtime->hasFunction(0x17A650u)) {
        auto targetFn = runtime->lookupFunction(0x17A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176784u; }
        if (ctx->pc != 0x176784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A650_0x17a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176784u; }
        if (ctx->pc != 0x176784u) { return; }
    }
    ctx->pc = 0x176784u;
label_176784:
    // 0x176784: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x176788: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x176788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x17678c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17678Cu;
    {
        const bool branch_taken_0x17678c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17678Cu;
            // 0x176790: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17678c) {
            ctx->pc = 0x1767E8u;
            goto label_1767e8;
        }
    }
    ctx->pc = 0x176794u;
    // 0x176794: 0x82040018  lb          $a0, 0x18($s0)
    ctx->pc = 0x176794u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x176798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17679c: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17679Cu;
    {
        const bool branch_taken_0x17679c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17679c) {
            ctx->pc = 0x1767A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17679Cu;
            // 0x1767a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1767E0u;
            goto label_1767e0;
        }
    }
    ctx->pc = 0x1767A4u;
    // 0x1767a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1767a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1767a8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1767A8u;
    {
        const bool branch_taken_0x1767a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1767a8) {
            ctx->pc = 0x1767ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1767A8u;
            // 0x1767ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1767D0u;
            goto label_1767d0;
        }
    }
    ctx->pc = 0x1767B0u;
    // 0x1767b0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1767B0u;
    {
        const bool branch_taken_0x1767b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767b0) {
            ctx->pc = 0x1767B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1767B0u;
            // 0x1767b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1767C0u;
            goto label_1767c0;
        }
    }
    ctx->pc = 0x1767B8u;
    // 0x1767b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1767B8u;
    {
        const bool branch_taken_0x1767b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1767B8u;
            // 0x1767bc: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b8) {
            ctx->pc = 0x1767ECu;
            goto label_1767ec;
        }
    }
    ctx->pc = 0x1767C0u;
label_1767c0:
    // 0x1767c0: 0xc05e278  jal         func_1789E0
    ctx->pc = 0x1767C0u;
    SET_GPR_U32(ctx, 31, 0x1767C8u);
    ctx->pc = 0x1789E0u;
    if (runtime->hasFunction(0x1789E0u)) {
        auto targetFn = runtime->lookupFunction(0x1789E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767C8u; }
        if (ctx->pc != 0x1767C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001789E0_0x1789e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767C8u; }
        if (ctx->pc != 0x1767C8u) { return; }
    }
    ctx->pc = 0x1767C8u;
label_1767c8:
    // 0x1767c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1767C8u;
    {
        const bool branch_taken_0x1767c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767c8) {
            ctx->pc = 0x1767E8u;
            goto label_1767e8;
        }
    }
    ctx->pc = 0x1767D0u;
label_1767d0:
    // 0x1767d0: 0xc05e33c  jal         func_178CF0
    ctx->pc = 0x1767D0u;
    SET_GPR_U32(ctx, 31, 0x1767D8u);
    ctx->pc = 0x178CF0u;
    if (runtime->hasFunction(0x178CF0u)) {
        auto targetFn = runtime->lookupFunction(0x178CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767D8u; }
        if (ctx->pc != 0x1767D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178CF0_0x178cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767D8u; }
        if (ctx->pc != 0x1767D8u) { return; }
    }
    ctx->pc = 0x1767D8u;
label_1767d8:
    // 0x1767d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1767D8u;
    {
        const bool branch_taken_0x1767d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767d8) {
            ctx->pc = 0x1767E8u;
            goto label_1767e8;
        }
    }
    ctx->pc = 0x1767E0u;
label_1767e0:
    // 0x1767e0: 0xc05e898  jal         func_17A260
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x17A260u;
    if (runtime->hasFunction(0x17A260u)) {
        auto targetFn = runtime->lookupFunction(0x17A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E8u; }
        if (ctx->pc != 0x1767E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A260_0x17a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E8u; }
        if (ctx->pc != 0x1767E8u) { return; }
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1767ec:
    // 0x1767ec: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1767ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1767f0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1767F0u;
    {
        const bool branch_taken_0x1767f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767f0) {
            ctx->pc = 0x1767F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1767F0u;
            // 0x1767f4: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176810u;
            goto label_176810;
        }
    }
    ctx->pc = 0x1767F8u;
    // 0x1767f8: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1767fc: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x176800: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x176800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x176804: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x176804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
    // 0x176808: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x176808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x17680c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_176810:
    // 0x176810: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x176814: 0x54830010  bnel        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176814u;
    {
        const bool branch_taken_0x176814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176814) {
            ctx->pc = 0x176818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176814u;
            // 0x176818: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176858u;
            goto label_176858;
        }
    }
    ctx->pc = 0x17681Cu;
    // 0x17681c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x176820: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176824: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x176828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17682c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x176830: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x176834: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x176834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x176838: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x176838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
    // 0x17683c: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x17683cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x176840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176848: 0xc055728  jal         func_155CA0
    ctx->pc = 0x176848u;
    SET_GPR_U32(ctx, 31, 0x176850u);
    ctx->pc = 0x17684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176848u;
            // 0x17684c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176850u; }
        if (ctx->pc != 0x176850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176850u; }
        if (ctx->pc != 0x176850u) { return; }
    }
    ctx->pc = 0x176850u;
label_176850:
    // 0x176850: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x176850u;
    {
        const bool branch_taken_0x176850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176850u;
            // 0x176854: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176850) {
            ctx->pc = 0x176884u;
            goto label_176884;
        }
    }
    ctx->pc = 0x176858u;
label_176858:
    // 0x176858: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x176858u;
    {
        const bool branch_taken_0x176858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176858) {
            ctx->pc = 0x176880u;
            goto label_176880;
        }
    }
    ctx->pc = 0x176860u;
    // 0x176860: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x176860u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x176864: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176868: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x17686c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176878: 0xc055728  jal         func_155CA0
    ctx->pc = 0x176878u;
    SET_GPR_U32(ctx, 31, 0x176880u);
    ctx->pc = 0x17687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176878u;
            // 0x17687c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176880u; }
        if (ctx->pc != 0x176880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176880u; }
        if (ctx->pc != 0x176880u) { return; }
    }
    ctx->pc = 0x176880u;
label_176880:
    // 0x176880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_176884:
    // 0x176884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17688c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17688cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176890: 0x3e00008  jr          $ra
    ctx->pc = 0x176890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176890u;
            // 0x176894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176898u;
    // 0x176898: 0x0  nop
    ctx->pc = 0x176898u;
    // NOP
    // 0x17689c: 0x0  nop
    ctx->pc = 0x17689cu;
    // NOP
    ctx->pc = 0x1768a0u;
}
