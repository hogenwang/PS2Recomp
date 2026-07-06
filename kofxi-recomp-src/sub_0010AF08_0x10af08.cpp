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

// Function: sub_0010AF08
// Address: 0x10af08 - 0x10b1c8
void sub_0010AF08_0x10af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF08_0x10af08");
#endif

    switch (ctx->pc) {
        case 0x10afa0u: goto label_10afa0;
        case 0x10b130u: goto label_10b130;
        case 0x10b13cu: goto label_10b13c;
        case 0x10b168u: goto label_10b168;
        case 0x10b178u: goto label_10b178;
        default: break;
    }

    ctx->pc = 0x10af08u;

    // 0x10af08: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x10af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x10af0c: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x10af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x10af10: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x10af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x10af14: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x10af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x10af18: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x10af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x10af1c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10af20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10af20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af24: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x10af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x10af28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10af28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af2c: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10af30: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10af34: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x10af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x10af38: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x10af38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10af3c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x10af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10af40: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x10af40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x10af44: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x10af44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x10af48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10AF48u;
    {
        const bool branch_taken_0x10af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF48u;
        // 0x10af4c: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af48) {
            ctx->pc = 0x10AFD8u;
            goto label_10afd8;
        }
    }
    ctx->pc = 0x10AF50u;
    // 0x10af50: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10af50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10af54: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10AF54u;
    {
        const bool branch_taken_0x10af54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10af54) {
            ctx->pc = 0x10AF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AF54u;
            // 0x10af58: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AFE0u;
            goto label_10afe0;
        }
    }
    ctx->pc = 0x10AF5Cu;
    // 0x10af5c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10af60: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10AF60u;
    {
        const bool branch_taken_0x10af60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10af60) {
            ctx->pc = 0x10AF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AF60u;
            // 0x10af64: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AFE0u;
            goto label_10afe0;
        }
    }
    ctx->pc = 0x10AF68u;
    // 0x10af68: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10af68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10af6c: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10af70: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10af74: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10af74u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10af78: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10af78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10af7c: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10af7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10af80: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10af80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10af84: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10af84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10af88: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10af8c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10af8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10af90: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10af90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10af94: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10af94u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10af98: 0xc048082  jal         func_120208
    ctx->pc = 0x10AF98u;
    SET_GPR_U32(ctx, 31, 0x10AFA0u);
    ctx->pc = 0x10AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF98u;
    // 0x10af9c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x10AF98u, 0x10AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFA0u;
label_10afa0:
    // 0x10afa0: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10afa4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10afa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10afa8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10afac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10afb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10afb4: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10afb8: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10afb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10afbc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10afbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10afc0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AFC0u;
    {
        const bool branch_taken_0x10afc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFC0u;
        // 0x10afc4: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afc0) {
            ctx->pc = 0x10AFE0u;
            goto label_10afe0;
        }
    }
    ctx->pc = 0x10AFC8u;
    // 0x10afc8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10afcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10afd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AFD0u;
    {
        const bool branch_taken_0x10afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFD0u;
        // 0x10afd4: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afd0) {
            ctx->pc = 0x10AFE0u;
            goto label_10afe0;
        }
    }
    ctx->pc = 0x10AFD8u;
label_10afd8:
    // 0x10afd8: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10afd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10afdc: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x10afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_10afe0:
    // 0x10afe0: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10afe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10afe8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AFE8u;
    {
        const bool branch_taken_0x10afe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10afe8) {
            ctx->pc = 0x10AFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AFE8u;
            // 0x10afec: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B010u;
            goto label_10b010;
        }
    }
    ctx->pc = 0x10AFF0u;
    // 0x10aff0: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10aff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10aff4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AFF4u;
    {
        const bool branch_taken_0x10aff4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10aff4) {
            ctx->pc = 0x10AFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AFF4u;
            // 0x10aff8: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B010u;
            goto label_10b010;
        }
    }
    ctx->pc = 0x10AFFCu;
    // 0x10affc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10affcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x10b000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b004: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10b004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10b008: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10b008u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10b00c: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x10b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_10b010:
    // 0x10b010: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x10b010u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x10b014: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x10b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x10b018: 0x250885c0  addiu       $t0, $t0, -0x7A40
    ctx->pc = 0x10b018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936000));
    // 0x10b01c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x10b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x10b020: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10b020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10b024: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x10b028: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10b028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10b02c: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x10b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10b030: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10b030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10b034: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x10b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x10b038: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10b03c: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x10b03cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10b040: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10b044: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10b048: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10b048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10b04c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10b04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10b050: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10b054: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x10b054u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x10b058: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10b058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10b05c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10b060: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10b060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10b064: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x10b064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x10b068: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x10b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10b06c: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x10b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x10b070: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10b070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10b074: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10b074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10b078: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x10b07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10b080: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x10b084: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x10b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10b088: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x10b088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b08c: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x10b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x10b090: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x10b090u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x10b094: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x10b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x10b098: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x10b098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x10b09c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x10b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10b0a0: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x10b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x10b0a4: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x10b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x10b0a8: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x10b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x10b0ac: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x10b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x10b0b0: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x10b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x10b0b4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x10b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x10b0b8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10b0bc: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x10b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x10b0c0: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x10b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x10b0c4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x10b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x10b0c8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10B0C8u;
    {
        const bool branch_taken_0x10b0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0C8u;
        // 0x10b0cc: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0c8) {
            ctx->pc = 0x10B0F4u;
            goto label_10b0f4;
        }
    }
    ctx->pc = 0x10B0D0u;
    // 0x10b0d0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10b0d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x10b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10b0d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b0dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B0DCu;
    {
        const bool branch_taken_0x10b0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0DCu;
        // 0x10b0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0dc) {
            ctx->pc = 0x10B10Cu;
            goto label_10b10c;
        }
    }
    ctx->pc = 0x10B0E4u;
    // 0x10b0e4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10b0e8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10b0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10b0ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B0ECu;
    {
        const bool branch_taken_0x10b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0ECu;
        // 0x10b0f0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0ec) {
            ctx->pc = 0x10B10Cu;
            goto label_10b10c;
        }
    }
    ctx->pc = 0x10B0F4u;
label_10b0f4:
    // 0x10b0f4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x10b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10b0f8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x10b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10b0fc: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10b100: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10b100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b104: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b108: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b10c:
    // 0x10b10c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10B10Cu;
    {
        const bool branch_taken_0x10b10c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b10c) {
            ctx->pc = 0x10B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B10Cu;
            // 0x10b110: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B148u;
            goto label_10b148;
        }
    }
    ctx->pc = 0x10B114u;
    // 0x10b114: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x10b114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x10b118: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x10b118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10b11c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10b120: 0x24c6a448  addiu       $a2, $a2, -0x5BB8
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943816));
    // 0x10b124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b128: 0xc043e24  jal         func_10F890
    ctx->pc = 0x10B128u;
    SET_GPR_U32(ctx, 31, 0x10B130u);
    ctx->pc = 0x10B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B128u;
    // 0x10b12c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x10B128u, 0x10B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B130u;
label_10b130:
    // 0x10b130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b134: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10B134u;
    SET_GPR_U32(ctx, 31, 0x10B13Cu);
    ctx->pc = 0x10B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B134u;
    // 0x10b138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10B134u, 0x10B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B13Cu;
label_10b13c:
    // 0x10b13c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10B13Cu;
    {
        const bool branch_taken_0x10b13c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B13Cu;
        // 0x10b140: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b13c) {
            ctx->pc = 0x10B1A0u;
            goto label_10b1a0;
        }
    }
    ctx->pc = 0x10B144u;
    // 0x10b144: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_10b148:
    // 0x10b148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b14c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10B14Cu;
    {
        const bool branch_taken_0x10b14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B14Cu;
        // 0x10b150: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b14c) {
            ctx->pc = 0x10B1A0u;
            goto label_10b1a0;
        }
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x10b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10b158: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B158u;
    {
        const bool branch_taken_0x10b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B158u;
        // 0x10b15c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b158) {
            ctx->pc = 0x10B170u;
            goto label_10b170;
        }
    }
    ctx->pc = 0x10B160u;
    // 0x10b160: 0xc042e3e  jal         func_10B8F8
    ctx->pc = 0x10B160u;
    SET_GPR_U32(ctx, 31, 0x10B168u);
    ctx->pc = 0x10B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B160u;
    // 0x10b164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B8F8u, 0x10B160u, 0x10B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B168u;
label_10b168:
    // 0x10b168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B168u;
    {
        const bool branch_taken_0x10b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B168u;
        // 0x10b16c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b168) {
            ctx->pc = 0x10B17Cu;
            goto label_10b17c;
        }
    }
    ctx->pc = 0x10B170u;
label_10b170:
    // 0x10b170: 0xc042b1e  jal         func_10AC78
    ctx->pc = 0x10B170u;
    SET_GPR_U32(ctx, 31, 0x10B178u);
    ctx->pc = 0x10B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B170u;
    // 0x10b174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC78u, 0x10B170u, 0x10B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B178u;
label_10b178:
    // 0x10b178: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x10b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10b17c:
    // 0x10b17c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b180: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B180u;
    {
        const bool branch_taken_0x10b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B180u;
        // 0x10b184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b180) {
            ctx->pc = 0x10B198u;
            goto label_10b198;
        }
    }
    ctx->pc = 0x10B188u;
    // 0x10b188: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10b18c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x10b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x10b190: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10b190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10b194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b198:
    // 0x10b198: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10b198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10b19c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_10b1a0:
    // 0x10b1a0: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10b1a4: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10b1a8: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10b1ac: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x10b1acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10b1b0: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10b1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10b1b4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10b1b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10b1b8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10b1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10b1bc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10b1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1C0u;
        // 0x10b1c4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1C8u;
}
