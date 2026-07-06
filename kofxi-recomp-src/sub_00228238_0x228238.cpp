#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228238
// Address: 0x228238 - 0x228330
void sub_00228238_0x228238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228238_0x228238");
#endif

    switch (ctx->pc) {
        case 0x228260u: goto label_228260;
        case 0x22829cu: goto label_22829c;
        case 0x22831cu: goto label_22831c;
        default: break;
    }

    ctx->pc = 0x228238u;

    // 0x228238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22823c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x228244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x228248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22824c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22824Cu;
    {
        const bool branch_taken_0x22824c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x228250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22824Cu;
            // 0x228250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22824c) {
            ctx->pc = 0x228260u;
            goto label_228260;
        }
    }
    ctx->pc = 0x228254u;
    // 0x228254: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228258: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x228258u;
    SET_GPR_U32(ctx, 31, 0x228260u);
    ctx->pc = 0x22825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228258u;
            // 0x22825c: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228260u; }
        if (ctx->pc != 0x228260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228260u; }
        if (ctx->pc != 0x228260u) { return; }
    }
    ctx->pc = 0x228260u;
label_228260:
    // 0x228260: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x228260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228264: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x228264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x228268: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228268u;
    {
        const bool branch_taken_0x228268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228268u;
            // 0x22826c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228268) {
            ctx->pc = 0x22829Cu;
            goto label_22829c;
        }
    }
    ctx->pc = 0x228270u;
    // 0x228270: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x228270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x228274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x228274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x228278: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x228278u;
    {
        const bool branch_taken_0x228278 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228278u;
            // 0x22827c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228278) {
            ctx->pc = 0x22831Cu;
            goto label_22831c;
        }
    }
    ctx->pc = 0x228280u;
    // 0x228280: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228284: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x228284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228288: 0x8c44f580  lw          $a0, -0xA80($v0)
    ctx->pc = 0x228288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
    // 0x22828c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22828cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228294: 0x8043320  j           func_10CC80
    ctx->pc = 0x228294u;
    ctx->pc = 0x228298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228294u;
            // 0x228298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22829Cu;
label_22829c:
    // 0x22829c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22829cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2282a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2282a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2282a4: 0x8c83f988  lw          $v1, -0x678($a0)
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965640)));
    // 0x2282a8: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2282A8u;
    {
        const bool branch_taken_0x2282a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2282ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282A8u;
            // 0x2282ac: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282a8) {
            ctx->pc = 0x2282B8u;
            goto label_2282b8;
        }
    }
    ctx->pc = 0x2282B0u;
    // 0x2282b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2282b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2282b4: 0xac82f988  sw          $v0, -0x678($a0)
    ctx->pc = 0x2282b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965640), GPR_U32(ctx, 2));
label_2282b8:
    // 0x2282b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2282b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2282bc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2282BCu;
    {
        const bool branch_taken_0x2282bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2282bc) {
            ctx->pc = 0x2282C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2282BCu;
            // 0x2282c0: 0xde020008  ld          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2282D0u;
            goto label_2282d0;
        }
    }
    ctx->pc = 0x2282C4u;
    // 0x2282c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2282c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2282c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2282C8u;
    {
        const bool branch_taken_0x2282c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2282CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2282C8u;
            // 0x2282cc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282c8) {
            ctx->pc = 0x2282F4u;
            goto label_2282f4;
        }
    }
    ctx->pc = 0x2282D0u;
label_2282d0:
    // 0x2282d0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2282d4: 0x2463f588  addiu       $v1, $v1, -0xA78
    ctx->pc = 0x2282d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964616));
    // 0x2282d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2282dc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2282dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2282e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2282e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2282e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2282e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2282e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2282e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2282ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2282ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2282f0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2282f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2282f4:
    // 0x2282f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2282f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2282f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2282fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2282fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x228300: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x228300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x228304: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x228304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x228308: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228308u;
    {
        const bool branch_taken_0x228308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228308u;
            // 0x22830c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228308) {
            ctx->pc = 0x22831Cu;
            goto label_22831c;
        }
    }
    ctx->pc = 0x228310u;
    // 0x228310: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228314: 0xc043320  jal         func_10CC80
    ctx->pc = 0x228314u;
    SET_GPR_U32(ctx, 31, 0x22831Cu);
    ctx->pc = 0x228318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228314u;
            // 0x228318: 0x8c44f580  lw          $a0, -0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22831Cu; }
        if (ctx->pc != 0x22831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22831Cu; }
        if (ctx->pc != 0x22831Cu) { return; }
    }
    ctx->pc = 0x22831Cu;
label_22831c:
    // 0x22831c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22831cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228328: 0x3e00008  jr          $ra
    ctx->pc = 0x228328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228328u;
            // 0x22832c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228330u;
    ctx->pc = 0x228330u;
}
