#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134660
// Address: 0x134660 - 0x1347f0
void sub_00134660_0x134660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134660_0x134660");
#endif

    switch (ctx->pc) {
        case 0x134678u: goto label_134678;
        case 0x1346c0u: goto label_1346c0;
        case 0x1346d4u: goto label_1346d4;
        case 0x1346dcu: goto label_1346dc;
        case 0x1346e4u: goto label_1346e4;
        case 0x1346ecu: goto label_1346ec;
        case 0x1346f4u: goto label_1346f4;
        case 0x134708u: goto label_134708;
        case 0x134738u: goto label_134738;
        case 0x134740u: goto label_134740;
        case 0x134748u: goto label_134748;
        case 0x134750u: goto label_134750;
        case 0x1347a0u: goto label_1347a0;
        case 0x1347a8u: goto label_1347a8;
        case 0x1347b4u: goto label_1347b4;
        case 0x1347bcu: goto label_1347bc;
        case 0x1347c4u: goto label_1347c4;
        case 0x1347d0u: goto label_1347d0;
        case 0x1347e0u: goto label_1347e0;
        default: break;
    }

    ctx->pc = 0x134660u;

label_134660:
    // 0x134660: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x134660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x134664: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x134664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x134668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13466c: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x13466cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x134670: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x134670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
    // 0x134674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x134674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134678:
    // 0x134678: 0x90c30050  lbu         $v1, 0x50($a2)
    ctx->pc = 0x134678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x13467c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x13467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x134680: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134680u;
    {
        const bool branch_taken_0x134680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134680) {
            ctx->pc = 0x134690u;
            goto label_134690;
        }
    }
    ctx->pc = 0x134688u;
    // 0x134688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134688u;
    {
        const bool branch_taken_0x134688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134688u;
            // 0x13468c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134688) {
            ctx->pc = 0x134698u;
            goto label_134698;
        }
    }
    ctx->pc = 0x134690u;
label_134690:
    // 0x134690: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x134690u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x134694: 0x0  nop
    ctx->pc = 0x134694u;
    // NOP
label_134698:
    // 0x134698: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x134698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13469c: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x13469cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1346a0: 0x24c60248  addiu       $a2, $a2, 0x248
    ctx->pc = 0x1346a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
    // 0x1346a4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1346A4u;
    {
        const bool branch_taken_0x1346a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1346A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346A4u;
            // 0x1346a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346a4) {
            ctx->pc = 0x134678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134678;
        }
    }
    ctx->pc = 0x1346ACu;
    // 0x1346ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1346ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1346B4u;
    // 0x1346b4: 0x0  nop
    ctx->pc = 0x1346b4u;
    // NOP
    // 0x1346b8: 0x0  nop
    ctx->pc = 0x1346b8u;
    // NOP
    // 0x1346bc: 0x0  nop
    ctx->pc = 0x1346bcu;
    // NOP
label_1346c0:
    // 0x1346c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1346c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1346c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1346c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1346c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1346c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1346cc: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x1346CCu;
    SET_GPR_U32(ctx, 31, 0x1346D4u);
    ctx->pc = 0x1346D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1346CCu;
            // 0x1346d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (runtime->hasFunction(0x1A0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346D4u; }
        if (ctx->pc != 0x1346D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346D4u; }
        if (ctx->pc != 0x1346D4u) { return; }
    }
    ctx->pc = 0x1346D4u;
label_1346d4:
    // 0x1346d4: 0xc055630  jal         func_1558C0
    ctx->pc = 0x1346D4u;
    SET_GPR_U32(ctx, 31, 0x1346DCu);
    ctx->pc = 0x1558C0u;
    if (runtime->hasFunction(0x1558C0u)) {
        auto targetFn = runtime->lookupFunction(0x1558C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346DCu; }
        if (ctx->pc != 0x1346DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001558C0_0x1558c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346DCu; }
        if (ctx->pc != 0x1346DCu) { return; }
    }
    ctx->pc = 0x1346DCu;
label_1346dc:
    // 0x1346dc: 0xc055684  jal         func_155A10
    ctx->pc = 0x1346DCu;
    SET_GPR_U32(ctx, 31, 0x1346E4u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346E4u; }
        if (ctx->pc != 0x1346E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346E4u; }
        if (ctx->pc != 0x1346E4u) { return; }
    }
    ctx->pc = 0x1346E4u;
label_1346e4:
    // 0x1346e4: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1346E4u;
    SET_GPR_U32(ctx, 31, 0x1346ECu);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346ECu; }
        if (ctx->pc != 0x1346ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346ECu; }
        if (ctx->pc != 0x1346ECu) { return; }
    }
    ctx->pc = 0x1346ECu;
label_1346ec:
    // 0x1346ec: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x1346ECu;
    SET_GPR_U32(ctx, 31, 0x1346F4u);
    ctx->pc = 0x197F80u;
    if (runtime->hasFunction(0x197F80u)) {
        auto targetFn = runtime->lookupFunction(0x197F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346F4u; }
        if (ctx->pc != 0x1346F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197F80_0x197f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346F4u; }
        if (ctx->pc != 0x1346F4u) { return; }
    }
    ctx->pc = 0x1346F4u;
label_1346f4:
    // 0x1346f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1346f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1346f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1346fc: 0xa06058c0  sb          $zero, 0x58C0($v1)
    ctx->pc = 0x1346fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 0));
    // 0x134700: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x134700u;
    SET_GPR_U32(ctx, 31, 0x134708u);
    ctx->pc = 0x134704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134700u;
            // 0x134704: 0xa04058b8  sb          $zero, 0x58B8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22712), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D40u;
    if (runtime->hasFunction(0x1A0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134708u; }
        if (ctx->pc != 0x134708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134708u; }
        if (ctx->pc != 0x134708u) { return; }
    }
    ctx->pc = 0x134708u;
label_134708:
    // 0x134708: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13470c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134710: 0xa040da98  sb          $zero, -0x2568($v0)
    ctx->pc = 0x134710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957720), (uint8_t)GPR_U32(ctx, 0));
    // 0x134714: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134718: 0xa043daa0  sb          $v1, -0x2560($v0)
    ctx->pc = 0x134718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957728), (uint8_t)GPR_U32(ctx, 3));
    // 0x13471c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134720: 0xa040f338  sb          $zero, -0xCC8($v0)
    ctx->pc = 0x134720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964024), (uint8_t)GPR_U32(ctx, 0));
    // 0x134724: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134728: 0xa040da08  sb          $zero, -0x25F8($v0)
    ctx->pc = 0x134728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 0));
    // 0x13472c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134730: 0xa040d9f8  sb          $zero, -0x2608($v0)
    ctx->pc = 0x134730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    // 0x134734: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_134738:
    // 0x134738: 0xc0541f8  jal         func_1507E0
    ctx->pc = 0x134738u;
    SET_GPR_U32(ctx, 31, 0x134740u);
    ctx->pc = 0x13473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134738u;
            // 0x13473c: 0xac40da10  sw          $zero, -0x25F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1507E0u;
    if (runtime->hasFunction(0x1507E0u)) {
        auto targetFn = runtime->lookupFunction(0x1507E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134740u; }
        if (ctx->pc != 0x134740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001507E0_0x1507e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134740u; }
        if (ctx->pc != 0x134740u) { return; }
    }
    ctx->pc = 0x134740u;
label_134740:
    // 0x134740: 0xc04c260  jal         func_130980
    ctx->pc = 0x134740u;
    SET_GPR_U32(ctx, 31, 0x134748u);
    ctx->pc = 0x134744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134740u;
            // 0x134744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130980u;
    if (runtime->hasFunction(0x130980u)) {
        auto targetFn = runtime->lookupFunction(0x130980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134748u; }
        if (ctx->pc != 0x134748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130980_0x130980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134748u; }
        if (ctx->pc != 0x134748u) { return; }
    }
    ctx->pc = 0x134748u;
label_134748:
    // 0x134748: 0xc04c210  jal         func_130840
    ctx->pc = 0x134748u;
    SET_GPR_U32(ctx, 31, 0x134750u);
    ctx->pc = 0x13474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134748u;
            // 0x13474c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130840u;
    if (runtime->hasFunction(0x130840u)) {
        auto targetFn = runtime->lookupFunction(0x130840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134750u; }
        if (ctx->pc != 0x134750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130840_0x130840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134750u; }
        if (ctx->pc != 0x134750u) { return; }
    }
    ctx->pc = 0x134750u;
label_134750:
    // 0x134750: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x134754: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x134754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x134758: 0xa0409780  sb          $zero, -0x6880($v0)
    ctx->pc = 0x134758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x13475c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x13475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x134760: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x134760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x134764: 0xa060f35a  sb          $zero, -0xCA6($v1)
    ctx->pc = 0x134764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964058), (uint8_t)GPR_U32(ctx, 0));
    // 0x134768: 0x9046b270  lbu         $a2, -0x4D90($v0)
    ctx->pc = 0x134768u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947440)));
    // 0x13476c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x13476cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x134770: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x134774: 0x248454a0  addiu       $a0, $a0, 0x54A0
    ctx->pc = 0x134774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21664));
    // 0x134778: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58
    ctx->pc = 0x134778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
    // 0x13477c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13477cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134780: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x134780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x134784: 0xa066f35b  sb          $a2, -0xCA5($v1)
    ctx->pc = 0x134784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 6));
    // 0x134788: 0x9047b273  lbu         $a3, -0x4D8D($v0)
    ctx->pc = 0x134788u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947443)));
    // 0x13478c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134790: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134794: 0xa047f35c  sb          $a3, -0xCA4($v0)
    ctx->pc = 0x134794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 7));
    // 0x134798: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x134798u;
    SET_GPR_U32(ctx, 31, 0x1347A0u);
    ctx->pc = 0x13479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134798u;
            // 0x13479c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A0u; }
        if (ctx->pc != 0x1347A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A0u; }
        if (ctx->pc != 0x1347A0u) { return; }
    }
    ctx->pc = 0x1347A0u;
label_1347a0:
    // 0x1347a0: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x1347A0u;
    SET_GPR_U32(ctx, 31, 0x1347A8u);
    ctx->pc = 0x1347A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1347A0u;
            // 0x1347a4: 0x24040104  addiu       $a0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (runtime->hasFunction(0x1A0530u)) {
        auto targetFn = runtime->lookupFunction(0x1A0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A8u; }
        if (ctx->pc != 0x1347A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0530_0x1a0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A8u; }
        if (ctx->pc != 0x1347A8u) { return; }
    }
    ctx->pc = 0x1347A8u;
label_1347a8:
    // 0x1347a8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1347a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1347ac: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1347ACu;
    SET_GPR_U32(ctx, 31, 0x1347B4u);
    ctx->pc = 0x1347B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1347ACu;
            // 0x1347b0: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347B4u; }
        if (ctx->pc != 0x1347B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347B4u; }
        if (ctx->pc != 0x1347B4u) { return; }
    }
    ctx->pc = 0x1347B4u;
label_1347b4:
    // 0x1347b4: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x1347B4u;
    SET_GPR_U32(ctx, 31, 0x1347BCu);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347BCu; }
        if (ctx->pc != 0x1347BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347BCu; }
        if (ctx->pc != 0x1347BCu) { return; }
    }
    ctx->pc = 0x1347BCu;
label_1347bc:
    // 0x1347bc: 0xc04d198  jal         func_134660
    ctx->pc = 0x1347BCu;
    SET_GPR_U32(ctx, 31, 0x1347C4u);
    ctx->pc = 0x134660u;
    goto label_134660;
    ctx->pc = 0x1347C4u;
label_1347c4:
    // 0x1347c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1347c8: 0xc0558e4  jal         func_156390
    ctx->pc = 0x1347C8u;
    SET_GPR_U32(ctx, 31, 0x1347D0u);
    ctx->pc = 0x1347CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1347C8u;
            // 0x1347cc: 0x2484c5c0  addiu       $a0, $a0, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156390u;
    if (runtime->hasFunction(0x156390u)) {
        auto targetFn = runtime->lookupFunction(0x156390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347D0u; }
        if (ctx->pc != 0x1347D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156390_0x156390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347D0u; }
        if (ctx->pc != 0x1347D0u) { return; }
    }
    ctx->pc = 0x1347D0u;
label_1347d0:
    // 0x1347d0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1347d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1347d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1347d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1347d8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1347D8u;
    SET_GPR_U32(ctx, 31, 0x1347E0u);
    ctx->pc = 0x1347DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1347D8u;
            // 0x1347dc: 0x24844930  addiu       $a0, $a0, 0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347E0u; }
        if (ctx->pc != 0x1347E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347E0u; }
        if (ctx->pc != 0x1347E0u) { return; }
    }
    ctx->pc = 0x1347E0u;
label_1347e0:
    // 0x1347e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1347e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1347e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1347e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1347e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1347E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1347ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1347E8u;
            // 0x1347ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1347F0u;
    ctx->pc = 0x1347f0u;
}
