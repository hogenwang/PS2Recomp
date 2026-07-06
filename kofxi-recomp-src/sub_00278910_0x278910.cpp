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

// Function: sub_00278910
// Address: 0x278910 - 0x278a20
void sub_00278910_0x278910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278910_0x278910");
#endif

    switch (ctx->pc) {
        case 0x278938u: goto label_278938;
        case 0x278944u: goto label_278944;
        case 0x278980u: goto label_278980;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789ccu: goto label_2789cc;
        default: break;
    }

    ctx->pc = 0x278910u;

    // 0x278910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27891c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278920: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x278920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27892c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278930: 0xc09d2fc  jal         func_274BF0
    ctx->pc = 0x278930u;
    SET_GPR_U32(ctx, 31, 0x278938u);
    ctx->pc = 0x278934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278930u;
    // 0x278934: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274BF0u, 0x278930u, 0x278938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278938u;
label_278938:
    // 0x278938: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x278938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27893c: 0xc09d334  jal         func_274CD0
    ctx->pc = 0x27893Cu;
    SET_GPR_U32(ctx, 31, 0x278944u);
    ctx->pc = 0x278940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27893Cu;
    // 0x278940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274CD0u, 0x27893Cu, 0x278944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278944u;
label_278944:
    // 0x278944: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x278944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278948: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x278948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27894c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x27894cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x278950: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x278950u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x278954: 0x1651002a  bne         $s2, $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x278954u;
    {
        const bool branch_taken_0x278954 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x278958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278954u;
        // 0x278958: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278954) {
            ctx->pc = 0x278A00u;
            goto label_278a00;
        }
    }
    ctx->pc = 0x27895Cu;
    // 0x27895c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x278960: 0x26502d78  addiu       $s0, $s2, 0x2D78
    ctx->pc = 0x278960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
    // 0x278964: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x278964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x278968: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27896c: 0x8c420738  lw          $v0, 0x738($v0)
    ctx->pc = 0x27896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1848)));
    // 0x278970: 0x4420018  bltzl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x278970u;
    {
        const bool branch_taken_0x278970 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x278970) {
            ctx->pc = 0x278974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278970u;
            // 0x278974: 0x26442d78  addiu       $a0, $s2, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789D4u;
            goto label_2789d4;
        }
    }
    ctx->pc = 0x278978u;
    // 0x278978: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x278978u;
    SET_GPR_U32(ctx, 31, 0x278980u);
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x278978u, 0x278980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278980u;
label_278980:
    // 0x278980: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278984: 0x462001f  bltzl       $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x278984u;
    {
        const bool branch_taken_0x278984 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x278984) {
            ctx->pc = 0x278988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278984u;
            // 0x278988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A04u;
            goto label_278a04;
        }
    }
    ctx->pc = 0x27898Cu;
    // 0x27898c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27898Cu;
    {
        const bool branch_taken_0x27898c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27898c) {
            ctx->pc = 0x2789B8u;
            goto label_2789b8;
        }
    }
    ctx->pc = 0x278994u;
    // 0x278994: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x278998: 0x34840534  ori         $a0, $a0, 0x534
    ctx->pc = 0x278998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1332);
    // 0x27899c: 0xc0b6bf8  jal         func_2DAFE0
    ctx->pc = 0x27899Cu;
    SET_GPR_U32(ctx, 31, 0x2789A4u);
    ctx->pc = 0x2789A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27899Cu;
    // 0x2789a0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAFE0u, 0x27899Cu, 0x2789A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789A4u;
label_2789a4:
    // 0x2789a4: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2789A4u;
    {
        const bool branch_taken_0x2789a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2789A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789A4u;
        // 0x2789a8: 0x26442d78  addiu       $a0, $s2, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789a4) {
            ctx->pc = 0x2789D4u;
            goto label_2789d4;
        }
    }
    ctx->pc = 0x2789ACu;
    // 0x2789ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2789ACu;
    {
        const bool branch_taken_0x2789ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789ACu;
        // 0x2789b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789ac) {
            ctx->pc = 0x278A04u;
            goto label_278a04;
        }
    }
    ctx->pc = 0x2789B4u;
    // 0x2789b4: 0x0  nop
    ctx->pc = 0x2789b4u;
    // NOP
label_2789b8:
    // 0x2789b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2789b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2789bc: 0x34a50534  ori         $a1, $a1, 0x534
    ctx->pc = 0x2789bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1332);
    // 0x2789c0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2789c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2789c4: 0xc0b6ca6  jal         func_2DB298
    ctx->pc = 0x2789C4u;
    SET_GPR_U32(ctx, 31, 0x2789CCu);
    ctx->pc = 0x2789C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789C4u;
    // 0x2789c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB298u, 0x2789C4u, 0x2789CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789CCu;
label_2789cc:
    // 0x2789cc: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2789CCu;
    {
        const bool branch_taken_0x2789cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2789D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789CCu;
        // 0x2789d0: 0x26442d78  addiu       $a0, $s2, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789cc) {
            ctx->pc = 0x278A00u;
            goto label_278a00;
        }
    }
    ctx->pc = 0x2789D4u;
label_2789d4:
    // 0x2789d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2789d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2789d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2789dc: 0x8c6306b8  lw          $v1, 0x6B8($v1)
    ctx->pc = 0x2789dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
    // 0x2789e0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2789e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2789e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2789E4u;
    {
        const bool branch_taken_0x2789e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789E4u;
        // 0x2789e8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789e4) {
            ctx->pc = 0x2789FCu;
            goto label_2789fc;
        }
    }
    ctx->pc = 0x2789ECu;
    // 0x2789ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2789ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2789f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2789f4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2789f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2789f8: 0xac2206b8  sw          $v0, 0x6B8($at)
    ctx->pc = 0x2789f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1720), GPR_U32(ctx, 2));
label_2789fc:
    // 0x2789fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2789fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278a00:
    // 0x278a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_278a04:
    // 0x278a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278a08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278a0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278a14: 0x3e00008  jr          $ra
    ctx->pc = 0x278A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A14u;
        // 0x278a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278A1Cu;
    // 0x278a1c: 0x0  nop
    ctx->pc = 0x278a1cu;
    // NOP
    if (ctx->pc == 0x278a1cu) { ctx->pc = 0x278a20u; }
}
