#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B698
// Address: 0x25b698 - 0x25b788
void sub_0025B698_0x25b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B698_0x25b698");
#endif

    switch (ctx->pc) {
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b728u: goto label_25b728;
        case 0x25b758u: goto label_25b758;
        default: break;
    }

    ctx->pc = 0x25b698u;

    // 0x25b698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b6a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25b6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25b6ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25b6b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25b6b4: 0xde040088  ld          $a0, 0x88($s0)
    ctx->pc = 0x25b6b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x25b6b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b6bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B6BCu;
    {
        const bool branch_taken_0x25b6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6BCu;
            // 0x25b6c0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6bc) {
            ctx->pc = 0x25B6D0u;
            goto label_25b6d0;
        }
    }
    ctx->pc = 0x25B6C4u;
    // 0x25b6c4: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x25b6c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25b6c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B6C8u;
    {
        const bool branch_taken_0x25b6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6C8u;
            // 0x25b6cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6c8) {
            ctx->pc = 0x25B6F4u;
            goto label_25b6f4;
        }
    }
    ctx->pc = 0x25B6D0u;
label_25b6d0:
    // 0x25b6d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25b6d4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25b6d8: 0x8c451590  lw          $a1, 0x1590($v0)
    ctx->pc = 0x25b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5520)));
    // 0x25b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6e0: 0xc08c25a  jal         func_230968
    ctx->pc = 0x25B6E0u;
    SET_GPR_U32(ctx, 31, 0x25B6E8u);
    ctx->pc = 0x25B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6E0u;
            // 0x25b6e4: 0x8c661594  lw          $a2, 0x1594($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5524)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230968u;
    if (runtime->hasFunction(0x230968u)) {
        auto targetFn = runtime->lookupFunction(0x230968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B6E8u; }
        if (ctx->pc != 0x25B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230968_0x230968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B6E8u; }
        if (ctx->pc != 0x25B6E8u) { return; }
    }
    ctx->pc = 0x25B6E8u;
label_25b6e8:
    // 0x25b6e8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25B6E8u;
    {
        const bool branch_taken_0x25b6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6E8u;
            // 0x25b6ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6e8) {
            ctx->pc = 0x25B774u;
            goto label_25b774;
        }
    }
    ctx->pc = 0x25B6F0u;
    // 0x25b6f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b6f4:
    // 0x25b6f4: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25B6F4u;
    {
        const bool branch_taken_0x25b6f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6F4u;
            // 0x25b6f8: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6f4) {
            ctx->pc = 0x25B770u;
            goto label_25b770;
        }
    }
    ctx->pc = 0x25B6FCu;
    // 0x25b6fc: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25b700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b704: 0xc092e56  jal         func_24B958
    ctx->pc = 0x25B704u;
    SET_GPR_U32(ctx, 31, 0x25B70Cu);
    ctx->pc = 0x25B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B704u;
            // 0x25b708: 0x24a512e0  addiu       $a1, $a1, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B958u;
    if (runtime->hasFunction(0x24B958u)) {
        auto targetFn = runtime->lookupFunction(0x24B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B70Cu; }
        if (ctx->pc != 0x25B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B958_0x24b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B70Cu; }
        if (ctx->pc != 0x25B70Cu) { return; }
    }
    ctx->pc = 0x25B70Cu;
label_25b70c:
    // 0x25b70c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x25B70Cu;
    {
        const bool branch_taken_0x25b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B70Cu;
            // 0x25b710: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b70c) {
            ctx->pc = 0x25B774u;
            goto label_25b774;
        }
    }
    ctx->pc = 0x25B714u;
    // 0x25b714: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x25b714u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25b718: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B718u;
    {
        const bool branch_taken_0x25b718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B718u;
            // 0x25b71c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b718) {
            ctx->pc = 0x25B730u;
            goto label_25b730;
        }
    }
    ctx->pc = 0x25B720u;
    // 0x25b720: 0xc096614  jal         func_259850
    ctx->pc = 0x25B720u;
    SET_GPR_U32(ctx, 31, 0x25B728u);
    ctx->pc = 0x25B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B720u;
            // 0x25b724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259850u;
    if (runtime->hasFunction(0x259850u)) {
        auto targetFn = runtime->lookupFunction(0x259850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B728u; }
        if (ctx->pc != 0x25B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259850_0x259850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B728u; }
        if (ctx->pc != 0x25B728u) { return; }
    }
    ctx->pc = 0x25B728u;
label_25b728:
    // 0x25b728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B728u;
    {
        const bool branch_taken_0x25b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b728) {
            ctx->pc = 0x25B734u;
            goto label_25b734;
        }
    }
    ctx->pc = 0x25B730u;
label_25b730:
    // 0x25b730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b734:
    // 0x25b734: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x25B734u;
    {
        const bool branch_taken_0x25b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b734) {
            ctx->pc = 0x25B738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25B734u;
            // 0x25b738: 0xa4400018  sh          $zero, 0x18($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25B76Cu;
            goto label_25b76c;
        }
    }
    ctx->pc = 0x25B73Cu;
    // 0x25b73c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25b73cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25b740: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x25b740u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b744: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x25b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x25b748: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B748u;
    {
        const bool branch_taken_0x25b748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B748u;
            // 0x25b74c: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b748) {
            ctx->pc = 0x25B758u;
            goto label_25b758;
        }
    }
    ctx->pc = 0x25B750u;
    // 0x25b750: 0xc092fda  jal         func_24BF68
    ctx->pc = 0x25B750u;
    SET_GPR_U32(ctx, 31, 0x25B758u);
    ctx->pc = 0x25B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B750u;
            // 0x25b754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF68u;
    if (runtime->hasFunction(0x24BF68u)) {
        auto targetFn = runtime->lookupFunction(0x24BF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B758u; }
        if (ctx->pc != 0x25B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF68_0x24bf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B758u; }
        if (ctx->pc != 0x25B758u) { return; }
    }
    ctx->pc = 0x25B758u;
label_25b758:
    // 0x25b758: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x25b758u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25b75c: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x25b760: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x25b760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x25b764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B764u;
    {
        const bool branch_taken_0x25b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B764u;
            // 0x25b768: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b764) {
            ctx->pc = 0x25B770u;
            goto label_25b770;
        }
    }
    ctx->pc = 0x25B76Cu;
label_25b76c:
    // 0x25b76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b770:
    // 0x25b770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25b774:
    // 0x25b774: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25b774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b778: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25b778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b77c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b780: 0x3e00008  jr          $ra
    ctx->pc = 0x25B780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B780u;
            // 0x25b784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B788u;
    ctx->pc = 0x25b788u;
}
