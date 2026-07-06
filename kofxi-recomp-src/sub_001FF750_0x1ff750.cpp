#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF750
// Address: 0x1ff750 - 0x1ff828
void sub_001FF750_0x1ff750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF750_0x1ff750");
#endif

    switch (ctx->pc) {
        case 0x1ff790u: goto label_1ff790;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ff7fcu: goto label_1ff7fc;
        default: break;
    }

    ctx->pc = 0x1ff750u;

    // 0x1ff750: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1ff750u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff754: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1ff758: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FF758u;
    {
        const bool branch_taken_0x1ff758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF758u;
            // 0x1ff75c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff758) {
            ctx->pc = 0x1FF7CCu;
            goto label_1ff7cc;
        }
    }
    ctx->pc = 0x1FF760u;
    // 0x1ff760: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1ff760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ff764: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FF764u;
    {
        const bool branch_taken_0x1ff764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff764) {
            ctx->pc = 0x1FF768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF764u;
            // 0x1ff768: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF76Cu;
    // 0x1ff76c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FF76Cu;
    {
        const bool branch_taken_0x1ff76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff76c) {
            ctx->pc = 0x1FF770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF76Cu;
            // 0x1ff770: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF774u;
    // 0x1ff774: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x1ff774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1ff778: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ff77c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF77Cu;
    {
        const bool branch_taken_0x1ff77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff77c) {
            ctx->pc = 0x1FF780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF77Cu;
            // 0x1ff780: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF784u;
    // 0x1ff784: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x1ff784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1ff788: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1ff788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ff78c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ff790:
    // 0x1ff790: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ff794: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ff794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ff798: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ff79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff7a0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1ff7a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff7a4: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x1ff7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1ff7a8: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF7A8u;
    {
        const bool branch_taken_0x1ff7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1FF7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7A8u;
            // 0x1ff7ac: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7a8) {
            ctx->pc = 0x1FF7CCu;
            goto label_1ff7cc;
        }
    }
    ctx->pc = 0x1FF7B0u;
    // 0x1ff7b0: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF7B0u;
    {
        const bool branch_taken_0x1ff7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1ff7b0) {
            ctx->pc = 0x1FF7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7B0u;
            // 0x1ff7b4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF7B8u;
    // 0x1ff7b8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF7B8u;
    {
        const bool branch_taken_0x1ff7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7b8) {
            ctx->pc = 0x1FF7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7B8u;
            // 0x1ff7bc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF7C0u;
    // 0x1ff7c0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ff7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ff7c4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FF7C4u;
    {
        const bool branch_taken_0x1ff7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7c4) {
            ctx->pc = 0x1FF7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7C4u;
            // 0x1ff7c8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff790;
        }
    }
    ctx->pc = 0x1FF7CCu;
label_1ff7cc:
    // 0x1ff7cc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ff7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1ff7d0:
    // 0x1ff7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7D0u;
            // 0x1ff7d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF7D8u;
label_1ff7d8:
    // 0x1ff7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff7e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff7e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff7ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff7f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff7f4: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF7F4u;
    SET_GPR_U32(ctx, 31, 0x1FF7FCu);
    ctx->pc = 0x1FF7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7F4u;
            // 0x1ff7f8: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7FCu; }
        if (ctx->pc != 0x1FF7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7FCu; }
        if (ctx->pc != 0x1FF7FCu) { return; }
    }
    ctx->pc = 0x1FF7FCu;
label_1ff7fc:
    // 0x1ff7fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF7FCu;
    {
        const bool branch_taken_0x1ff7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7fc) {
            ctx->pc = 0x1FF800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7FCu;
            // 0x1ff800: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF814u;
            goto label_1ff814;
        }
    }
    ctx->pc = 0x1FF804u;
    // 0x1ff804: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ff804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff80c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff814:
    // 0x1ff814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF81Cu;
            // 0x1ff820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF824u;
    // 0x1ff824: 0x0  nop
    ctx->pc = 0x1ff824u;
    // NOP
    ctx->pc = 0x1ff828u;
}
