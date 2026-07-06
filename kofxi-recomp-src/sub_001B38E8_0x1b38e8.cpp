#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B38E8
// Address: 0x1b38e8 - 0x1b39b8
void sub_001B38E8_0x1b38e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B38E8_0x1b38e8");
#endif

    switch (ctx->pc) {
        case 0x1b3938u: goto label_1b3938;
        case 0x1b3948u: goto label_1b3948;
        case 0x1b3950u: goto label_1b3950;
        case 0x1b3958u: goto label_1b3958;
        default: break;
    }

    ctx->pc = 0x1b38e8u;

    // 0x1b38e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b38e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b38ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b38f0: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b38f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b38f8: 0x26c33100  addiu       $v1, $s6, 0x3100
    ctx->pc = 0x1b38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12544));
    // 0x1b38fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b38fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3908: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b390c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3910: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b3914: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3918: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B3918u;
    {
        const bool branch_taken_0x1b3918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3918u;
            // 0x1b391c: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3918) {
            ctx->pc = 0x1B3970u;
            goto label_1b3970;
        }
    }
    ctx->pc = 0x1B3920u;
    // 0x1b3920: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3924: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3928: 0x26b230f8  addiu       $s2, $s5, 0x30F8
    ctx->pc = 0x1b3928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12536));
    // 0x1b392c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b392cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3930: 0x269030a0  addiu       $s0, $s4, 0x30A0
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12448));
    // 0x1b3934: 0x0  nop
    ctx->pc = 0x1b3934u;
    // NOP
label_1b3938:
    // 0x1b3938: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x1b3938u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x1b393c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3940: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3940u;
    SET_GPR_U32(ctx, 31, 0x1B3948u);
    ctx->pc = 0x1B3944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3940u;
            // 0x1b3944: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3948u; }
        if (ctx->pc != 0x1B3948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3948u; }
        if (ctx->pc != 0x1B3948u) { return; }
    }
    ctx->pc = 0x1B3948u;
label_1b3948:
    // 0x1b3948: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3948u;
    SET_GPR_U32(ctx, 31, 0x1B3950u);
    ctx->pc = 0x1B394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3948u;
            // 0x1b394c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (runtime->hasFunction(0x10CB90u)) {
        auto targetFn = runtime->lookupFunction(0x10CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3950u; }
        if (ctx->pc != 0x1B3950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWakeupThreadWrapper_0x10cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3950u; }
        if (ctx->pc != 0x1B3950u) { return; }
    }
    ctx->pc = 0x1B3950u;
label_1b3950:
    // 0x1b3950: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3950u;
    SET_GPR_U32(ctx, 31, 0x1B3958u);
    ctx->pc = 0x1B3954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3950u;
            // 0x1b3954: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3958u; }
        if (ctx->pc != 0x1B3958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3958u; }
        if (ctx->pc != 0x1B3958u) { return; }
    }
    ctx->pc = 0x1B3958u;
label_1b3958:
    // 0x1b3958: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b3958u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b395c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B395Cu;
    {
        const bool branch_taken_0x1b395c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B395Cu;
            // 0x1b3960: 0x26c23100  addiu       $v0, $s6, 0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b395c) {
            ctx->pc = 0x1B3938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3938;
        }
    }
    ctx->pc = 0x1B3964u;
    // 0x1b3964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3964u;
    {
        const bool branch_taken_0x1b3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3964u;
            // 0x1b3968: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3964) {
            ctx->pc = 0x1B397Cu;
            goto label_1b397c;
        }
    }
    ctx->pc = 0x1B396Cu;
    // 0x1b396c: 0x0  nop
    ctx->pc = 0x1b396cu;
    // NOP
label_1b3970:
    // 0x1b3970: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3974: 0x26c23100  addiu       $v0, $s6, 0x3100
    ctx->pc = 0x1b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12544));
    // 0x1b3978: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b397c:
    // 0x1b397c: 0x26a330f8  addiu       $v1, $s5, 0x30F8
    ctx->pc = 0x1b397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12536));
    // 0x1b3980: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3984: 0x268430a0  addiu       $a0, $s4, 0x30A0
    ctx->pc = 0x1b3984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12448));
    // 0x1b3988: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b398c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b398cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b399c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b39a0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b39a4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b39a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b39ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B39ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B39B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39ACu;
            // 0x1b39b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B39B4u;
    // 0x1b39b4: 0x0  nop
    ctx->pc = 0x1b39b4u;
    // NOP
    ctx->pc = 0x1b39b8u;
}
