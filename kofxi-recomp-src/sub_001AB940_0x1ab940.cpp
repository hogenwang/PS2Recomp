#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB940
// Address: 0x1ab940 - 0x1aba08
void sub_001AB940_0x1ab940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB940_0x1ab940");
#endif

    switch (ctx->pc) {
        case 0x1ab978u: goto label_1ab978;
        case 0x1ab990u: goto label_1ab990;
        case 0x1ab998u: goto label_1ab998;
        case 0x1ab9d0u: goto label_1ab9d0;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1ab9f8u: goto label_1ab9f8;
        case 0x1aba00u: goto label_1aba00;
        default: break;
    }

    ctx->pc = 0x1ab940u;

    // 0x1ab940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab94c: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1ab950: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB950u;
    {
        const bool branch_taken_0x1ab950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB950u;
            // 0x1ab954: 0x9085000e  lbu         $a1, 0xE($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab950) {
            ctx->pc = 0x1AB964u;
            goto label_1ab964;
        }
    }
    ctx->pc = 0x1AB958u;
    // 0x1ab958: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1ab95c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB95Cu;
    {
        const bool branch_taken_0x1ab95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB95Cu;
            // 0x1ab960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab95c) {
            ctx->pc = 0x1AB984u;
            goto label_1ab984;
        }
    }
    ctx->pc = 0x1AB964u;
label_1ab964:
    // 0x1ab964: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB964u;
    {
        const bool branch_taken_0x1ab964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab964) {
            ctx->pc = 0x1AB968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB964u;
            // 0x1ab968: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB980u;
            goto label_1ab980;
        }
    }
    ctx->pc = 0x1AB96Cu;
    // 0x1ab96c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1ab970: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AB970u;
    SET_GPR_U32(ctx, 31, 0x1AB978u);
    ctx->pc = 0x1AB974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB970u;
            // 0x1ab974: 0x248472d8  addiu       $a0, $a0, 0x72D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB978u; }
        if (ctx->pc != 0x1AB978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB978u; }
        if (ctx->pc != 0x1AB978u) { return; }
    }
    ctx->pc = 0x1AB978u;
label_1ab978:
    // 0x1ab978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB978u;
    {
        const bool branch_taken_0x1ab978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB978u;
            // 0x1ab97c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab978) {
            ctx->pc = 0x1AB984u;
            goto label_1ab984;
        }
    }
    ctx->pc = 0x1AB980u;
label_1ab980:
    // 0x1ab980: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ab980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1ab984:
    // 0x1ab984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab988: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB988u;
            // 0x1ab98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB990u;
label_1ab990:
    // 0x1ab990: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB990u;
            // 0x1ab994: 0x8082000d  lb          $v0, 0xD($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB998u;
label_1ab998:
    // 0x1ab998: 0x84850098  lh          $a1, 0x98($a0)
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1ab99c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AB99Cu;
    {
        const bool branch_taken_0x1ab99c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB99Cu;
            // 0x1ab9a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab99c) {
            ctx->pc = 0x1AB9F0u;
            goto label_1ab9f0;
        }
    }
    ctx->pc = 0x1AB9A4u;
    // 0x1ab9a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab9a8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB9A8u;
    {
        const bool branch_taken_0x1ab9a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9A8u;
            // 0x1ab9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9a8) {
            ctx->pc = 0x1AB9D0u;
            goto label_1ab9d0;
        }
    }
    ctx->pc = 0x1AB9B0u;
    // 0x1ab9b0: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1ab9b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab9b8: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB9B8u;
    {
        const bool branch_taken_0x1ab9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AB9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9B8u;
            // 0x1ab9bc: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9b8) {
            ctx->pc = 0x1AB9F0u;
            goto label_1ab9f0;
        }
    }
    ctx->pc = 0x1AB9C0u;
    // 0x1ab9c0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ab9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab9c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ab9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9C8u;
            // 0x1ab9cc: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB9D0u;
label_1ab9d0:
    // 0x1ab9d0: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB9D0u;
    {
        const bool branch_taken_0x1ab9d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab9d0) {
            ctx->pc = 0x1AB9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9D0u;
            // 0x1ab9d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB9F0u;
            goto label_1ab9f0;
        }
    }
    ctx->pc = 0x1AB9D8u;
    // 0x1ab9d8: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1ab9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1ab9dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ab9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab9e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab9e4: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1ab9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ab9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9E8u;
            // 0x1ab9ec: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB9F0u;
label_1ab9f0:
    // 0x1ab9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB9F8u;
label_1ab9f8:
    // 0x1ab9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9F8u;
            // 0x1ab9fc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABA00u;
label_1aba00:
    // 0x1aba00: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA00u;
            // 0x1aba04: 0x8082000f  lb          $v0, 0xF($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABA08u;
    ctx->pc = 0x1aba08u;
}
