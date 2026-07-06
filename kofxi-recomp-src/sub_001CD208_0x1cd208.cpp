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

// Function: sub_001CD208
// Address: 0x1cd208 - 0x1cd3e8
void sub_001CD208_0x1cd208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD208_0x1cd208");
#endif

    switch (ctx->pc) {
        case 0x1cd26cu: goto label_1cd26c;
        case 0x1cd320u: goto label_1cd320;
        default: break;
    }

    ctx->pc = 0x1cd208u;

    // 0x1cd208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd20c: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1cd20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1cd210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd214: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
    // 0x1cd218: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1cd218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1cd21c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1cd220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd224: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd22c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0x807096e  j           func_1C25B8
    ctx->pc = 0x1CD230u;
    ctx->pc = 0x1CD234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD230u;
    // 0x1cd234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    sub_001C25B8_0x1c25b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD238u;
    // 0x1cd238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd23c: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1cd23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1cd240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd244: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd248: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
    // 0x1cd24c: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd254: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd258: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1cd258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1cd25c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1cd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cd260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd264: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD264u;
    SET_GPR_U32(ctx, 31, 0x1CD26Cu);
    ctx->pc = 0x1CD268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD264u;
    // 0x1cd268: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD264u, 0x1CD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD26Cu;
label_1cd26c:
    // 0x1cd26c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1cd270: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cd274: 0x24637b00  addiu       $v1, $v1, 0x7B00
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31488));
    // 0x1cd278: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd27c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cd27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd280: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1cd280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cd284: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cd284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd290: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1cd290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1cd294: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cd294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cd298: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1cd298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1cd29c: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1cd29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1cd2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2A0u;
        // 0x1cd2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD2A8u;
    // 0x1cd2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd2ac: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1cd2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd2b4: 0x24a57b40  addiu       $a1, $a1, 0x7B40
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31552));
    // 0x1cd2b8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1cd2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1cd2bc: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x1cd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1cd2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd2c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2d0: 0x807096e  j           func_1C25B8
    ctx->pc = 0x1CD2D0u;
    ctx->pc = 0x1CD2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2D0u;
    // 0x1cd2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    sub_001C25B8_0x1c25b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD2D8u;
    // 0x1cd2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd2dc: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd2e4: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd2e8: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd2f4: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd2f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd2fc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1cd300: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd308: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1cd308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1cd30c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cd30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd310: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cd310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd314: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd318: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD318u;
    SET_GPR_U32(ctx, 31, 0x1CD320u);
    ctx->pc = 0x1CD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD318u;
    // 0x1cd31c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD318u, 0x1CD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD320u;
label_1cd320:
    // 0x1cd320: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd324: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cd328: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1cd328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1cd32c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1cd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1cd330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD33Cu;
        // 0x1cd340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD344u;
    // 0x1cd344: 0x0  nop
    ctx->pc = 0x1cd344u;
    // NOP
    // 0x1cd348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd34c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1cd34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd354: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd358: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd35c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cd35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd360: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cd364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd368: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd36c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1cd370: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd378: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cd378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1cd37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd384: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1cd388: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1cd388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1cd38c: 0x807096e  j           func_1C25B8
    ctx->pc = 0x1CD38Cu;
    ctx->pc = 0x1CD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD38Cu;
    // 0x1cd390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    sub_001C25B8_0x1c25b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD394u;
    // 0x1cd394: 0x0  nop
    ctx->pc = 0x1cd394u;
    // NOP
    // 0x1cd398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd39c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1cd39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd3a4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd3a8: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd3ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd3b0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1cd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cd3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd3bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cd3c0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd3c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cd3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1cd3cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd3d4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1cd3d8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1cd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1cd3dc: 0x807096e  j           func_1C25B8
    ctx->pc = 0x1CD3DCu;
    ctx->pc = 0x1CD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3DCu;
    // 0x1cd3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    sub_001C25B8_0x1c25b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD3E4u;
    // 0x1cd3e4: 0x0  nop
    ctx->pc = 0x1cd3e4u;
    // NOP
    if (ctx->pc == 0x1cd3e4u) { ctx->pc = 0x1cd3e8u; }
}
